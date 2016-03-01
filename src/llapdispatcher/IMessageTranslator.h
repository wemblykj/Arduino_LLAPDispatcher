/* IEndpoint interface
 * Paul Wightmore 2016
 */
#ifndef _LLAPDISPATCHER_IMESSAGETRANSLATOR_h
#define _LLAPDISPATCHER_IMESSAGETRANSLATOR_h

namespace LLAPDispatcher {

class IMessage;

//! Translate between application messages and the internal abstract message structure
/*! Provides translation of the contents of an external message buffer into an abstract message
    and vice-versa
 */
class IMessageTranslator
{
public:
  //! decode the application specific message buffer into an IMessage instance
  virtual IMessage* decode(const char* messageBuffer) const = 0;
  
  //! encode the IMessage instance to the application specific message buffer
  virtual IMessage* encode(const char* messageBuffer) const = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IMESSAGETRANSLATOR_h