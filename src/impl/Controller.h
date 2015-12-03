/* Default IController implementation
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_CONTROLLER_h
#define _LLAPDISPATCHER_CONTROLLER_h

namespace LLAPDispatcher {
  
class IEndpoint;

class Controller : public IController
{
public:
  // Implement IController
  bool dispatch(const char* message) override;
  const char* pending() override;
  void addEndpoint(IEndpoint* endpoint) override;
  void removeEndpoint(const IEndpoint* endpoint) override;
  void broadcastEndpoints()  override;
  void reset() override;
  
} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_CONTROLLER_h