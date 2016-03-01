/* IEmitter interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IEMITTER_h
#define _LLAPDISPATCHER_IEMITTER_h

namespace LLAPDispatcher {

#include "llapdispatcher\INode.h"

class IPayload;

//! A node that is capable of emitting a message
/*!
	The time and place of emission is unrelated to the nodes capability and is therefore managed
	at a higher level 
*/
class IEmitter : INode 
{
public:
  //! Get the payload to be emitted
  /**
    * Should ideally be polled in a single frame until there are no more pending messages
    *
    * \param buffer a 9 byte LLAP payload buffer
    * \return true if there is a payload to be delivered
    */
  virtual IPayload* getPayload() = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IEMITTER_h