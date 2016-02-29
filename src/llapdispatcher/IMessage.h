/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IMESSAGE_h
#define _LLAPDISPATCHER_IMESSAGE_h

namespace LLAPDispatcher {

class IMessage
{
public:
  // the sender of an incoming message
  virtual const char* sender() const = 0;
  
  // the recipient of an outgoing message
  virtual const char* recipient() const = 0;
  
  // an identifies the destination endpoint
  virtual const char* endpointId() const = 0;
  
  //! the payload associated with the message
  virtual const char* payload(char* payload) = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IMESSAGE_h