/* IEndpoint interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_IMESSAGE_h
#define _LLAPDISPATCHER_IMESSAGE_h

namespace LLAPDispatcher {

class IPayload;

class IMessage
{
public:
  // the sender of an incoming message
  virtual const char* senderId() const = 0;
  
  // the recipient of an outgoing message
  virtual const char* recipientId() const = 0;
  
  // the node id associated with this message
  virtual const char* nodeId() const = 0;
  
  //! the payload associated with the message
  virtual IPayload* payload() = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IMESSAGE_h