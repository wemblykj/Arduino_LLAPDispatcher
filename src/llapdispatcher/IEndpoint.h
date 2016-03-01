/* IReceiver interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IRECEIVER_h
#define _LLAPDISPATCHER_IRECEIVER_h

#include "llapdispatcher\INode.h"

namespace LLAPDispatcher {

class IPayload;

// A node that can receive a payload
class IReceiver : INode
{
public:
  //! Deliver a payload to this receiver
  /*!
	@return @e true if accepted otherwise @false
  */
  virtual bool deliverPayload(IPayload* payload) = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IRECEIVER_h