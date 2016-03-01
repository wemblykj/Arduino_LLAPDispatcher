/* Default IEndpoint implementation
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_ENDPOINT_h
#define _LLAPDISPATCHER_ENDPOINT_h

#include "llapdispatcher\IEndpoint.h"

namespace LLAPDispatcher {
  
//! A node that can be queried or that can receive a payload and will respond with a confirmation payload
class Endpoint : public Node, IReceiver, IResponder
{
public:
  // Implement IReceiver
  bool deliverPayload(IPayload* payload) override;
  
} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_ENDPOINT_h