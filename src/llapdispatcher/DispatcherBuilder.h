/* Default INode implementation
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_DISPATCHERBUILDER_h
#define _LLAPDISPATCHER_DISPATCHERBUILDER_h

#include "llapdispatcher\IController.h"

namespace LLAPDispatcher {
  
class DispatcherBuilder
{
public:
  DispatcherBuilder()
  {
	  
  }

  DispatcherBuilder& addFirmwareVersionNode(float version)
  {
	return *this;  
  }
  
  //! Add a default battery indicator node
  DispatcherBuilder& addBatteryIndicatorNode()
  {
	return *this;  
  }
  
  //! Add a fixed string node
  DispatcherBuilder& add(string value)
  {
	return *this;  
  }
  
  //! Add a dynamic string node
  DispatcherBuilder& add(string& valueRef)
  {
	return *this;  
  }
  
  //! Add a fixed integer node
  DispatcherBuilder& add(int value)
  {
	return *this;  
  }
  
  //! Add a dynamic int node
  DispatcherBuilder& add(int& valueRef)
  {
	return *this;  
  }
  
  //! Add a fixed floating-point node
  DispatcherBuilder& add(float value)
  {
	return *this;  
  }
  
  //! Add a dynamic floating-point node
  DispatcherBuilder& add(float& valueRef)
  {
	return *this;  
  }
  
  //! Add a fixed boolean node
  DispatcherBuilder& add(bool value)
  {
	return *this;  
  }
  
  //! Add a dynamic boolean node
  DispatcherBuilder& add(bool& valueRef)
  {
	return *this;  
  }
  
  //! Add a dynamic boolean node with a string payload
  DispatcherBuilder& add(bool& valueRef, const char* trueValue, const char* falseValue)
  {
	return *this;  
  }
  
  //! Build the dispatcher
  IController* build()
  {
	  return nullptr;
  }
  
} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_DISPATCHERBUILDER_h