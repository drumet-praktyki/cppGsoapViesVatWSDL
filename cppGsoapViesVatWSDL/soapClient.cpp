/* soapClient.cpp
   Generated by gSOAP 2.8.69 for checkVatService.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#if defined(__BORLANDC__)
#pragma option push -w-8060
#pragma option push -w-8004
#endif
#include "soapH.h"

SOAP_SOURCE_STAMP("@(#) soapClient.cpp ver 2.8.69 2018-08-09 12:05:42 GMT")


SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__checkVat(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns2__checkVat *ns2__checkVat, _ns2__checkVatResponse &ns2__checkVatResponse)
{	struct __ns1__checkVat soap_tmp___ns1__checkVat;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ec.europa.eu/taxation_customs/vies/services/checkVatService";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp___ns1__checkVat.ns2__checkVat = ns2__checkVat;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__checkVat(soap, &soap_tmp___ns1__checkVat);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__checkVat(soap, &soap_tmp___ns1__checkVat, "-ns1:checkVat", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__checkVat(soap, &soap_tmp___ns1__checkVat, "-ns1:checkVat", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns2__checkVatResponse*>(&ns2__checkVatResponse)) // NULL ref?
		return soap_closesock(soap);
	ns2__checkVatResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__checkVatResponse.soap_get(soap, "ns2:checkVatResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

SOAP_FMAC5 int SOAP_FMAC6 soap_call___ns1__checkVatApprox(struct soap *soap, const char *soap_endpoint, const char *soap_action, _ns2__checkVatApprox *ns2__checkVatApprox, _ns2__checkVatApproxResponse &ns2__checkVatApproxResponse)
{	struct __ns1__checkVatApprox soap_tmp___ns1__checkVatApprox;
	if (soap_endpoint == NULL)
		soap_endpoint = "http://ec.europa.eu/taxation_customs/vies/services/checkVatService";
	if (soap_action == NULL)
		soap_action = "";
	soap_tmp___ns1__checkVatApprox.ns2__checkVatApprox = ns2__checkVatApprox;
	soap_begin(soap);
	soap->encodingStyle = NULL;
	soap_serializeheader(soap);
	soap_serialize___ns1__checkVatApprox(soap, &soap_tmp___ns1__checkVatApprox);
	if (soap_begin_count(soap))
		return soap->error;
	if (soap->mode & SOAP_IO_LENGTH)
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__checkVatApprox(soap, &soap_tmp___ns1__checkVatApprox, "-ns1:checkVatApprox", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__checkVatApprox(soap, &soap_tmp___ns1__checkVatApprox, "-ns1:checkVatApprox", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	if (!static_cast<_ns2__checkVatApproxResponse*>(&ns2__checkVatApproxResponse)) // NULL ref?
		return soap_closesock(soap);
	ns2__checkVatApproxResponse.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__checkVatApproxResponse.soap_get(soap, "ns2:checkVatApproxResponse", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}

#if defined(__BORLANDC__)
#pragma option pop
#pragma option pop
#endif

/* End of soapClient.cpp */
