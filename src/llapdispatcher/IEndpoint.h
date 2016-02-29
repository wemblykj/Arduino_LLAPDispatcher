/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IENDPOINT_h
#define _LLAPDISPATCHER_IENDPOINT_h

#include "llapdispatcher\INode.h"

namespace LLAPDispatcher {

class IPayload;

class IEndpoint : INode
{
public:
  //! Deliver a payload from an LLAP message to this endpoint
  virtual void deliverPayload(IPayload payload) = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IENDPOINT_h