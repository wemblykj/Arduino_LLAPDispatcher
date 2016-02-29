/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IMESSAGETRANSLATOR_h
#define _LLAPDISPATCHER_IMESSAGETRANSLATOR_h

namespace LLAPDispatcher {

class IMessage;

class IMessageTranslator
{
public:
  // translate the message buffer into an IMessage instance
  virtual IMessage* translate(const char* messageBuffer) const = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IMESSAGETRANSLATOR_h