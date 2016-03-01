/* Default INode implementation
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_NODE_h
#define _LLAPDISPATCHER_NODE_h

#include "llapdispatcher\INode.h"

namespace LLAPDispatcher {
  
class Node : public INode
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

#endif // _LLAPDISPATCHER_NODE_h