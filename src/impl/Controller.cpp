/* Default IController implementation
 * Paul Wightmore 2015
 */

#include "llapdispatcher\IMessageTranslator.h"
#include "impl\Controller.h"

namespace LLAPDispatcher {

Controller::Controller(IMessageTranslator* translator) 
  : m_translator(translator) 
{
	
}
  
bool Controller::dispatch(const char* messageBuffer) 
{
	auto m = m_translator->translate(messageBuffer); 
}

bool Controller::pending(char* messageBuffer) 
{
  
}

void Controller::addEndpoint(IEndpoint* endpoint) 
{
  
}

void Controller::removeEndpoint(const IEndpoint* endpoint) 
{
  
}

void Controller::broadcastResponders() 
{
  
}

void Controller::reset() 
{
  
}
  
} // namespace LLAPDispatcher