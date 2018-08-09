#include <stdio.h>
#include <sstream>

#include "soapH.h"
#include  "checkVatBinding.nsmap"

int main() {
  struct soap soap;

  std::string countryCode;
  std::string vatNumber;

  std::string name;
  std::string address;
  bool valid;

  char msgbuf[256];
  char namebuf[256];

  countryCode = "PL";
  vatNumber = "7010305673";

  soap_init(&soap);

  _ns2__checkVat ns2checkvat;
  _ns2__checkVatResponse ns2checkvatresponse;

  ns2checkvat.countryCode = countryCode;
  ns2checkvat.vatNumber = vatNumber;

  int soapRes = soap_call___ns1__checkVat(
    &soap,
    NULL, // or webservice address
    NULL, // or "checkVat",
    &ns2checkvat,
    ns2checkvatresponse);

  if (soapRes == SOAP_OK) {
    sprintf_s(msgbuf, "ok %d\n", soapRes);
    OutputDebugString(msgbuf);
    printf("ok\n");

    name = *ns2checkvatresponse.name;
    valid = ns2checkvatresponse.valid;

    sprintf_s(namebuf, "ok %s\n", name.c_str());

    printf("name is %s", name.c_str());
    OutputDebugString(namebuf);

    system("pause");

  }
  else
  {
    sprintf_s(msgbuf, "not ok %d\n", soapRes);
    OutputDebugStringA(msgbuf);
    printf("not ok\n");
  }

  soap_destroy(&soap);
  soap_end(&soap);
  soap_done(&soap);

  return 0;
}