/* IEmitter interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_IEMITTER_h
#define _LLAPDISPATCHER_IEMITTER_h

namespace LLAPDispatcher {

#include "llapdispatcher\INode.h"

class IPayload;

//! A node for which a message can be emitted
/*!
	The time and place of emission is unrelated to the nodes capability and is therefore managed
	at a higher level 
*/
class IEmitter : INode 
{
public:
  //! Get the payload to be emitted
  virtual IPayload* getPayload() = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IEMITTER_h