/* IResponder interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_IRESPONDER_h
#define _LLAPDISPATCHER_IRESPONDER_h

namespace LLAPDispatcher {

#include "llapdispatcher\INode.h"

class IPayload;

//! An emitting node that will respond to a query
class IResponder : IEmitter 
{
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IRESPONDER_h