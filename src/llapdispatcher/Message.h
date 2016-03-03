/* Default IMessage implementation
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_MESSAGE_h
#define _LLAPDISPATCHER_MESSAGE_h

#include "llapdispatcher\IMessage.h"

namespace LLAPDispatcher {
  
class Message : public IMessage
{
public:
  Node(const char* id)
    mId(id)
  {
	  
  }
  
  // Implement INode
  const char* id() const override
  {
	  return mName.c_str();
  }
  
private:
  String mId;
} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_MESSAGE_h