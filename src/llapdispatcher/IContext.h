/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_ICONTEXT_h
#define _LLAPDISPATCHER_ICONTEXT_h

namespace LLAPDispatcher {

class IContext
{
public:
  IController* controller();
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_ICONTEXT_h