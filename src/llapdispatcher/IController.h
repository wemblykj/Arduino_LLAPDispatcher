/* IController interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_ICONTROLLER_h
#define _LLAPDISPATCHER_ICONTROLLER_h

namespace LLAPDispatcher {

class IEndpoint;

class IController
{
public:
  //! Dispatch an incoming message from LLAP
  /**
    * \return true if the message was successfully dispatched and therefore handled
    */
  virtual bool dispatch(const char* message) = 0;
  
  //! Returns the next message to be sent out via LLAP
  /**
    * Should ideally be polled in a single frame until there are no more pending messages
    *
    * \param buffer a 12 byte LLAP message buffer
    * \return true if there is a payload to be delivered
    */
  virtual bool pending(char* messageBuffer) = 0;
  
  //! Add a new endpoint to the dispatcher
  /**
    * \pre The endpoint does not already exist
    */
  virtual void addEndpoint(IEndpoint* endpoint) = 0;
  
  //! Remove an endpoint
  virtual void removeEndpoint(const IEndpoint* endpoint) = 0;
  
  //! Broadcast all responding endpoints
  /**
    * All responding endpoints will be queried and their resultant messages added to the pending queue. \see pending()
    */
  virtual void broadcastResponders() = 0;
  
  //! Reset the controller state
  /**
    * Will clear any pending messages
    */
  virtual void reset() = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_ICONTROLLER_h