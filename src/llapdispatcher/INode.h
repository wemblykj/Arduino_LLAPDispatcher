/* IEndpoint interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_INODE_h
#define _LLAPDISPATCHER_INODE_h

namespace LLAPDispatcher {

//! A uniquely identifiable node
class INode
{
public:
  //! A unique id for this node
  virtual const char* id() const = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_INODE_h