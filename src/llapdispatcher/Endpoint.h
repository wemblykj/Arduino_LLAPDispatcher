/* Default IEndpoint implementation
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_ENDPOINT_h
#define _LLAPDISPATCHER_ENDPOINT_h

namespace LLAPDispatcher {
  
class Endpoint : public IEndpoint
{
public:
  // Implement IEndpoint
  const char* name() const override
  const char* deliverPayload(const char* payload) override;
  bool pendingPayload(char* payloadBuffer) override;
  
} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_ENDPOINT_h