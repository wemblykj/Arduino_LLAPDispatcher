/* IEndpoint interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_ICONTEXT_h
#define _LLAPDISPATCHER_ICONTEXT_h

namespace LLAPDispatcher {

//! Provides a context
class IContext
{
public:
  IController* controller();
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_ICONTEXT_h