/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_INODE_h
#define _LLAPDISPATCHER_INODE_h

namespace LLAPDispatcher {

class IEndpoint
{
public:
  virtual const char* name() const = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_INODE_h