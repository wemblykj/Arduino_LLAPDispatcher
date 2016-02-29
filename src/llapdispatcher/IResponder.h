/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IRESPONDER_h
#define _LLAPDISPATCHER_IRESPONDER_h

namespace LLAPDispatcher {

#include "llapdispatcher\INode.h"

class IPayload;

class IResponder : INode 
{
public:
  //! Returns any pending payloads to be sent out over LLAP for this endpoint
  /**
    * Should ideally be polled in a single frame until there are no more pending messages
    *
    * \param buffer a 9 byte LLAP payload buffer
    * \return true if there is a payload to be delivered
    */
  virtual IPayload* getPayload() = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IRESPONDER_h