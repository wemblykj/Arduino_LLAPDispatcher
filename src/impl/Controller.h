/* Default IController implementation
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_CONTROLLER_h
#define _LLAPDISPATCHER_CONTROLLER_h

#include "llapdispatcher/IController.h"

namespace LLAPDispatcher {
  
class IMessageTranslator;

class Controller : public IController 
{
public:
  Controller(IMessageTranslator* translator);
  
  // Implement IController
  bool dispatch(const char* message) override;
  bool pending(char* message) override;
  void addEndpoint(IEndpoint* endpoint) override;
  void removeEndpoint(const IEndpoint* endpoint) override;
  void broadcastResponders() override;
  void reset() override;
  
private:
  IMessageTranslator* m_translator;  
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_CONTROLLER_h