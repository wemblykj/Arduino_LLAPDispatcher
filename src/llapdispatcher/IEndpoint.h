/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IENDPOINT_h
#define _LLAPDISPATCHER_IENDPOINT_h

namespace LLAPDispatcher {

class IEndpoint
{
public:
  virtual const char* name() const = 0;
  
  //! Deliver a payload from an LLAP message to this endpoint
  virtual const char* deliverPayload(char* payload) = 0;
  
  //! Returns any pending payloads to be sent out over LLAP for this endpoint
  /**
    * Should ideally be polled in a single frame until there are no more pending messages
    *
    * \param buffer a 9 byte LLAP payload buffer
    * \return true if there is a payload to be delivered
    */
  virtual bool pendingPayload(char* payloadBuffer) = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IENDPOINT_h