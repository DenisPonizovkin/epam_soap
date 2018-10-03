// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : https://apo.rgs.ru/apo2_arm_reader.dll/wsdl/IAPO2_ARM_READER
// Version  : 1.0
// (10/2/2018 6:36:20 PM - $Revision:   1.0.1.0.1.82  $)
// ************************************************************************ //

#ifndef   IAPO2_ARM_READERH
#define   IAPO2_ARM_READERH

#include <System.hpp>
#include <InvokeRegistry.hpp>
#include <XSBuiltIns.hpp>
#include <SoapHTTPClient.hpp>


namespace NS_IAPO2_ARM_READER {

// ************************************************************************ //
// The following types, referred to in the WSDL document are not being represented
// in this file. They are either aliases[@] of other types represented or were referred
// to but never[!] declared in the document. The types from the latter category
// typically map to predefined/known XML or Borland types; however, they could also 
// indicate incorrect WSDL documents that failed to declare or import a schema type.
// ************************************************************************ //
// !:string          - "http://www.w3.org/2001/XMLSchema"
// !:int             - "http://www.w3.org/2001/XMLSchema"
// !:TDateTime       - "http://www.w3.org/2001/XMLSchema"


// ************************************************************************ //
// Namespace : urn:APO2_ARM_READER_c-IAPO2_ARM_READER
// soapAction: urn:APO2_ARM_READER_c-IAPO2_ARM_READER#%operationName%
// transport : http://schemas.xmlsoap.org/soap/http
// style     : rpc
// binding   : IAPO2_ARM_READERbinding
// service   : IAPO2_ARM_READERservice
// port      : IAPO2_ARM_READERPort
// URL       : https://apo.rgs.ru/apo2_arm_reader.dll/soap/IAPO2_ARM_READER
// ************************************************************************ //
__interface INTERFACE_UUID("{813C3116-0E51-D1D5-1308-37379B406372}") IAPO2_ARM_READER : public IInvokable
{
public:
  virtual int             WriteStatistic(const AnsiString comment) = 0; 
  virtual int             CheckOurNPFClient(const AnsiString Snils) = 0; 
  virtual AnsiString      GetNPFAgent(const AnsiString LNR) = 0; 
  virtual int             PassportIsBad(const AnsiString PASSP_SERIES, const AnsiString PASSP_NUMBER) = 0; 
  virtual TDateTime       GetServerDateTime() = 0; 
  virtual AnsiString      WritePolicyToMGDB(const AnsiString XML) = 0; 
  virtual AnsiString      Check_APO2_Last_Versions(const AnsiString XML) = 0; 
  virtual AnsiString      GetAgentsByLNR_INN(const AnsiString LNR_INN, const int fuz_yur_ii) = 0; 
};
typedef DelphiInterface<IAPO2_ARM_READER> _di_IAPO2_ARM_READER;

_di_IAPO2_ARM_READER GetIAPO2_ARM_READER(bool useWSDL=false, AnsiString addr="");



#endif // __IAPO2_ARM_READER_h__

};     // NS_IAPO2_ARM_READER

#if !defined(NO_IMPLICIT_NAMESPACE_USE)
using  namespace NS_IAPO2_ARM_READER;
#endif

 