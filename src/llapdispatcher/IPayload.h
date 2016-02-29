/* IEndpoint interface
 * Paul Wightmore 2015
 */
#ifndef _LLAPDISPATCHER_IPAYLOAD_h
#define _LLAPDISPATCHER_IPAYLOAD_h

namespace LLAPDispatcher {

class IPayload
{
public:
  virtual const char* getString() const = 0;
  virtual void setString(const char* value) const = 0;
  virtual int getInt() const = 0;
  virtual void setInt(int value) const = 0;
  virtual bool getBool() const = 0;
  virtual void setBool(bool value) const = 0;
};

} // namespace LLAPDispatcher

#endif // _LLAPDISPATCHER_IPAYLOAD_h