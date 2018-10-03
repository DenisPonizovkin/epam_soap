// ************************************************************************ //
// The types declared in this file were generated from data read from the
// WSDL File described below:
// WSDL     : https://apo.rgs.ru/apo2_arm_reader.dll/wsdl/IAPO2_ARM_READER
// Version  : 1.0
// (10/2/2018 6:36:20 PM - $Revision:   1.0.1.0.1.82  $)
// ************************************************************************ //

#include <vcl.h>
#pragma hdrstop

#if !defined(IAPO2_ARM_READERH)
#include "IAPO2_ARM_READER.h"
#endif



namespace NS_IAPO2_ARM_READER {

_di_IAPO2_ARM_READER GetIAPO2_ARM_READER(bool useWSDL, AnsiString addr)
{
  static const char* defWSDL= "https://apo.rgs.ru/apo2_arm_reader.dll/wsdl/IAPO2_ARM_READER";
  static const char* defURL = "https://apo.rgs.ru/apo2_arm_reader.dll/soap/IAPO2_ARM_READER";
  static const char* defSvc = "IAPO2_ARM_READERservice";
  static const char* defPrt = "IAPO2_ARM_READERPort";
  if (addr=="")
    addr = useWSDL ? defWSDL : defURL;
  THTTPRIO* rio = new THTTPRIO(0);
  if (useWSDL) {
    rio->WSDLLocation = addr;
    rio->Service = defSvc;
    rio->Port = defPrt;
  } else {
    rio->URL = addr;
  }
  _di_IAPO2_ARM_READER service;
  rio->QueryInterface(service);
  if (!service)
    delete rio;
  return service;
}


// ************************************************************************ //
// This routine registers the interfaces and types used by invoke the SOAP
// Service.
// ************************************************************************ //
static void RegTypes()
{
  /* IAPO2_ARM_READER */
  InvRegistry()->RegisterInterface(__interfaceTypeinfo(IAPO2_ARM_READER), L"urn:APO2_ARM_READER_c-IAPO2_ARM_READER", L"");
  InvRegistry()->RegisterDefaultSOAPAction(__interfaceTypeinfo(IAPO2_ARM_READER), L"urn:APO2_ARM_READER_c-IAPO2_ARM_READER#%operationName%");
}
#pragma startup RegTypes 32

};     // NS_IAPO2_ARM_READER

 