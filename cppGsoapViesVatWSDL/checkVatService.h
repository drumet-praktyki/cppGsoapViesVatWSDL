// Reminder: Modify typemap.dat to customize the header file generated by wsdl2h
/* checkVatService.h
   Generated by wsdl2h 2.8.69 from checkVatService.wsdl and typemap.dat
   2018-08-09 12:05:20 GMT

   DO NOT INCLUDE THIS FILE DIRECTLY INTO YOUR PROJECT BUILDS
   USE THE soapcpp2-GENERATED SOURCE CODE FILES FOR YOUR PROJECT BUILDS

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

/** @page page_notes Notes

@note HINTS:
 - Run soapcpp2 on checkVatService.h to generate the SOAP/XML processing logic.
   Use soapcpp2 -I to specify paths for #import
   Use soapcpp2 -j to generate improved proxy and server classes.
   Use soapcpp2 -r to generate a report.
 - Use wsdl2h -c and -s to generate pure C code or C++ code without STL.
 - Use 'typemap.dat' to control namespace bindings and type mappings.
   It is strongly recommended to customize the names of the namespace prefixes
   generated by wsdl2h. To do so, modify the prefix bindings in the Namespaces
   section below and add the modified lines to 'typemap.dat' to rerun wsdl2h.
 - Run Doxygen (www.doxygen.org) on this file to generate documentation.
 - Use wsdl2h -R to generate REST operations.
 - Use wsdl2h -Onum to optimize output by removing unused schema components.
 - Use wsdl2h -nname to use name as the base namespace prefix instead of 'ns'.
 - Use wsdl2h -Nname for service prefix and produce multiple service bindings
 - Use wsdl2h -d to enable DOM support for xsd:anyType.
 - Use wsdl2h -g to auto-generate readers and writers for root elements.
 - Use wsdl2h -b to auto-generate bi-directional operations (duplex ops).
 - Use wsdl2h -U to map XML names to C++ Unicode identifiers instead of _xNNNN.
 - Use wsdl2h -u to disable the generation of unions.
 - Struct/class members serialized as XML attributes are annotated with a '@'.
 - Struct/class members that have a special role are annotated with a '$'.

@warning
   DO NOT INCLUDE THIS ANNOTATED FILE DIRECTLY IN YOUR PROJECT SOURCE CODE.
   USE THE FILES GENERATED BY soapcpp2 FOR YOUR PROJECT'S SOURCE CODE:
   THE soapStub.h FILE CONTAINS THIS CONTENT WITHOUT ANNOTATIONS.

@copyright LICENSE:
@verbatim
--------------------------------------------------------------------------------
gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The wsdl2h tool and its generated software are released under the GPL.
This software is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
GPL license.

This program is free software; you can redistribute it and/or modify it under
the terms of the GNU General Public License as published by the Free Software
Foundation; either version 2 of the License, or (at your option) any later
version.

This program is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program; if not, write to the Free Software Foundation, Inc., 59 Temple
Place, Suite 330, Boston, MA 02111-1307 USA

Author contact information:
engelen@genivia.com / engelen@acm.org

This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial-use license is available from Genivia, Inc., contact@genivia.com
--------------------------------------------------------------------------------
@endverbatim

*/


//gsoapopt c++,w

/******************************************************************************\
 *                                                                            *
 * Definitions                                                                *
 *   urn:ec.europa.eu:taxud:vies:services:checkVat                            *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * $CONTAINER                                                                 *
 *   std::vector                                                              *
 *                                                                            *
\******************************************************************************/

#include <vector>
template <class T> class std::vector;

/******************************************************************************\
 *                                                                            *
 * Import                                                                     *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Schema Namespaces                                                          *
 *                                                                            *
\******************************************************************************/


/* NOTE:

It is strongly recommended to customize the names of the namespace prefixes
generated by wsdl2h. To do so, modify the prefix bindings below and add the
modified lines to typemap.dat to rerun wsdl2h:

ns1 = "urn:ec.europa.eu:taxud:vies:services:checkVat"
ns2 = "urn:ec.europa.eu:taxud:vies:services:checkVat:types"

*/

#define SOAP_NAMESPACE_OF_ns2	"urn:ec.europa.eu:taxud:vies:services:checkVat:types"
//gsoap ns2   schema namespace:	urn:ec.europa.eu:taxud:vies:services:checkVat:types
//gsoap ns2   schema form:	qualified

/******************************************************************************\
 *                                                                            *
 * Built-in Schema Types and Top-Level Elements and Attributes                *
 *                                                                            *
\******************************************************************************/

/// Primitive built-in type "xs:date".
typedef std::string xsd__date;


/******************************************************************************\
 *                                                                            *
 * Forward Declarations                                                       *
 *                                                                            *
\******************************************************************************/


//  Forward declaration of class _ns2__checkVat.
class _ns2__checkVat;

//  Forward declaration of class _ns2__checkVatResponse.
class _ns2__checkVatResponse;

//  Forward declaration of class _ns2__checkVatApprox.
class _ns2__checkVatApprox;

//  Forward declaration of class _ns2__checkVatApproxResponse.
class _ns2__checkVatApproxResponse;


/******************************************************************************\
 *                                                                            *
 * Schema Types and Top-Level Elements and Attributes                         *
 *   urn:ec.europa.eu:taxud:vies:services:checkVat:types                      *
 *                                                                            *
\******************************************************************************/

/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":companyTypeCode is a simpleType restriction of XSD type xs:string.
///
/// Content pattern is "[A-Z]{2}\\-[1-9][0-9]?".
typedef std::string ns2__companyTypeCode "[A-Z]{2}\\-[1-9][0-9]?";

/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode is a simpleType restriction of XSD type xs:string.
///
/// @note The enum values are prefixed with "ns2__matchCode__" to prevent name clashes: use wsdl2h option -e to omit this prefix or use option -c++11 for scoped enumerations
enum ns2__matchCode
{
/// <PRE><BLOCKQUOTE>
///   VALID
/// </BLOCKQUOTE></PRE>
	ns2__matchCode__1 = 1,	///< xs:string value="1"
/// <PRE><BLOCKQUOTE>
///   INVALID
/// </BLOCKQUOTE></PRE>
	ns2__matchCode__2 = 2,	///< xs:string value="2"
/// <PRE><BLOCKQUOTE>
///   NOT_PROCESSED
/// </BLOCKQUOTE></PRE>
	ns2__matchCode__3 = 3,	///< xs:string value="3"
};


/******************************************************************************\
 *                                                                            *
 * Schema Complex Types and Top-Level Elements                                *
 *   urn:ec.europa.eu:taxud:vies:services:checkVat:types                      *
 *                                                                            *
\******************************************************************************/

/// @brief Top-level root element "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVat
/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVat is a complexType.
///
/// class _ns2__checkVat operations:
/// - _ns2__checkVat* soap_new__ns2__checkVat(soap*) allocate and default initialize
/// - _ns2__checkVat* soap_new__ns2__checkVat(soap*, int num) allocate array and default initialize values
/// - _ns2__checkVat* soap_new_req__ns2__checkVat(soap*, ...) allocate, set required members
/// - _ns2__checkVat* soap_new_set__ns2__checkVat(soap*, ...) allocate, set all public members
/// - _ns2__checkVat::soap_default(soap*) default initialize members
/// - int soap_read__ns2__checkVat(soap*, _ns2__checkVat*) deserialize from a stream
/// - int soap_write__ns2__checkVat(soap*, _ns2__checkVat*) serialize to a stream
/// - _ns2__checkVat* _ns2__checkVat::soap_dup(soap*) returns deep copy of _ns2__checkVat, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns2__checkVat::soap_del() deep deletes _ns2__checkVat data members, use only after _ns2__checkVat::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns2__checkVat
{ public:
/// Element "countryCode" of XSD type xs:string.
    std::string                          countryCode                    1;	///< Required element.
/// Element "vatNumber" of XSD type xs:string.
    std::string                          vatNumber                      1;	///< Required element.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatResponse
/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatResponse is a complexType.
///
/// class _ns2__checkVatResponse operations:
/// - _ns2__checkVatResponse* soap_new__ns2__checkVatResponse(soap*) allocate and default initialize
/// - _ns2__checkVatResponse* soap_new__ns2__checkVatResponse(soap*, int num) allocate array and default initialize values
/// - _ns2__checkVatResponse* soap_new_req__ns2__checkVatResponse(soap*, ...) allocate, set required members
/// - _ns2__checkVatResponse* soap_new_set__ns2__checkVatResponse(soap*, ...) allocate, set all public members
/// - _ns2__checkVatResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns2__checkVatResponse(soap*, _ns2__checkVatResponse*) deserialize from a stream
/// - int soap_write__ns2__checkVatResponse(soap*, _ns2__checkVatResponse*) serialize to a stream
/// - _ns2__checkVatResponse* _ns2__checkVatResponse::soap_dup(soap*) returns deep copy of _ns2__checkVatResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns2__checkVatResponse::soap_del() deep deletes _ns2__checkVatResponse data members, use only after _ns2__checkVatResponse::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns2__checkVatResponse
{ public:
/// Element "countryCode" of XSD type xs:string.
    std::string                          countryCode                    1;	///< Required element.
/// Element "vatNumber" of XSD type xs:string.
    std::string                          vatNumber                      1;	///< Required element.
/// Element "requestDate" of XSD type xs:date.
    xsd__date                            requestDate                    1;	///< Required element.
/// Element "valid" of XSD type xs:boolean.
    bool                                 valid                          1;	///< Required element.
/// Element "name" of XSD type xs:string.
    std::string*                         name                           0;	///< Optional element.
/// Element "address" of XSD type xs:string.
    std::string*                         address                        0;	///< Optional element.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatApprox
/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatApprox is a complexType.
///
/// class _ns2__checkVatApprox operations:
/// - _ns2__checkVatApprox* soap_new__ns2__checkVatApprox(soap*) allocate and default initialize
/// - _ns2__checkVatApprox* soap_new__ns2__checkVatApprox(soap*, int num) allocate array and default initialize values
/// - _ns2__checkVatApprox* soap_new_req__ns2__checkVatApprox(soap*, ...) allocate, set required members
/// - _ns2__checkVatApprox* soap_new_set__ns2__checkVatApprox(soap*, ...) allocate, set all public members
/// - _ns2__checkVatApprox::soap_default(soap*) default initialize members
/// - int soap_read__ns2__checkVatApprox(soap*, _ns2__checkVatApprox*) deserialize from a stream
/// - int soap_write__ns2__checkVatApprox(soap*, _ns2__checkVatApprox*) serialize to a stream
/// - _ns2__checkVatApprox* _ns2__checkVatApprox::soap_dup(soap*) returns deep copy of _ns2__checkVatApprox, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns2__checkVatApprox::soap_del() deep deletes _ns2__checkVatApprox data members, use only after _ns2__checkVatApprox::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns2__checkVatApprox
{ public:
/// Element "countryCode" of XSD type xs:string.
    std::string                          countryCode                    1;	///< Required element.
/// Element "vatNumber" of XSD type xs:string.
    std::string                          vatNumber                      1;	///< Required element.
/// Element "traderName" of XSD type xs:string.
    std::string*                         traderName                     0;	///< Optional element.
/// Element "traderCompanyType" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":companyTypeCode.
    ns2__companyTypeCode*                traderCompanyType              0;	///< Optional element.
/// Element "traderStreet" of XSD type xs:string.
    std::string*                         traderStreet                   0;	///< Optional element.
/// Element "traderPostcode" of XSD type xs:string.
    std::string*                         traderPostcode                 0;	///< Optional element.
/// Element "traderCity" of XSD type xs:string.
    std::string*                         traderCity                     0;	///< Optional element.
/// Element "requesterCountryCode" of XSD type xs:string.
    std::string*                         requesterCountryCode           0;	///< Optional element.
/// Element "requesterVatNumber" of XSD type xs:string.
    std::string*                         requesterVatNumber             0;	///< Optional element.
    struct soap                         *soap                          ;
};

/// @brief Top-level root element "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatApproxResponse
/// @brief "urn:ec.europa.eu:taxud:vies:services:checkVat:types":checkVatApproxResponse is a complexType.
///
/// class _ns2__checkVatApproxResponse operations:
/// - _ns2__checkVatApproxResponse* soap_new__ns2__checkVatApproxResponse(soap*) allocate and default initialize
/// - _ns2__checkVatApproxResponse* soap_new__ns2__checkVatApproxResponse(soap*, int num) allocate array and default initialize values
/// - _ns2__checkVatApproxResponse* soap_new_req__ns2__checkVatApproxResponse(soap*, ...) allocate, set required members
/// - _ns2__checkVatApproxResponse* soap_new_set__ns2__checkVatApproxResponse(soap*, ...) allocate, set all public members
/// - _ns2__checkVatApproxResponse::soap_default(soap*) default initialize members
/// - int soap_read__ns2__checkVatApproxResponse(soap*, _ns2__checkVatApproxResponse*) deserialize from a stream
/// - int soap_write__ns2__checkVatApproxResponse(soap*, _ns2__checkVatApproxResponse*) serialize to a stream
/// - _ns2__checkVatApproxResponse* _ns2__checkVatApproxResponse::soap_dup(soap*) returns deep copy of _ns2__checkVatApproxResponse, copies the (cyclic) graph structure when a context is provided, or (cycle-pruned) tree structure with soap_set_mode(soap, SOAP_XML_TREE) (use soapcpp2 -Ec)
/// - _ns2__checkVatApproxResponse::soap_del() deep deletes _ns2__checkVatApproxResponse data members, use only after _ns2__checkVatApproxResponse::soap_dup(NULL) (use soapcpp2 -Ed)
class _ns2__checkVatApproxResponse
{ public:
/// Element "countryCode" of XSD type xs:string.
    std::string                          countryCode                    1;	///< Required element.
/// Element "vatNumber" of XSD type xs:string.
    std::string                          vatNumber                      1;	///< Required element.
/// Element "requestDate" of XSD type xs:date.
    xsd__date                            requestDate                    1;	///< Required element.
/// Element "valid" of XSD type xs:boolean.
    bool                                 valid                          1;	///< Required element.
/// Element "traderName" of XSD type xs:string.
    std::string*                         traderName                     0;	///< Optional element.
/// Element "traderCompanyType" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":companyTypeCode.
    ns2__companyTypeCode*                traderCompanyType              0;	///< Optional element.
/// Element "traderAddress" of XSD type xs:string.
    std::string*                         traderAddress                  0;	///< Optional element.
/// Element "traderStreet" of XSD type xs:string.
    std::string*                         traderStreet                   0;	///< Optional element.
/// Element "traderPostcode" of XSD type xs:string.
    std::string*                         traderPostcode                 0;	///< Optional element.
/// Element "traderCity" of XSD type xs:string.
    std::string*                         traderCity                     0;	///< Optional element.
/// Element "traderNameMatch" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode.
    enum ns2__matchCode*                 traderNameMatch                0;	///< Optional element.
/// Element "traderCompanyTypeMatch" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode.
    enum ns2__matchCode*                 traderCompanyTypeMatch         0;	///< Optional element.
/// Element "traderStreetMatch" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode.
    enum ns2__matchCode*                 traderStreetMatch              0;	///< Optional element.
/// Element "traderPostcodeMatch" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode.
    enum ns2__matchCode*                 traderPostcodeMatch            0;	///< Optional element.
/// Element "traderCityMatch" of XSD type "urn:ec.europa.eu:taxud:vies:services:checkVat:types":matchCode.
    enum ns2__matchCode*                 traderCityMatch                0;	///< Optional element.
/// Element "requestIdentifier" of XSD type xs:string.
    std::string                          requestIdentifier              1;	///< Required element.
    struct soap                         *soap                          ;
};


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Elements                                              *
 *   urn:ec.europa.eu:taxud:vies:services:checkVat:types                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Additional Top-Level Attributes                                            *
 *   urn:ec.europa.eu:taxud:vies:services:checkVat:types                      *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Services                                                                   *
 *                                                                            *
\******************************************************************************/


//gsoap ns1  service name:	checkVatBinding 
//gsoap ns1  service type:	checkVatPortType 
//gsoap ns1  service port:	http://ec.europa.eu/taxation_customs/vies/services/checkVatService 
//gsoap ns1  service namespace:	urn:ec.europa.eu:taxud:vies:services:checkVat 
//gsoap ns1  service transport:	http://schemas.xmlsoap.org/soap/http 

/** @mainpage Service Definitions

@section Service_bindings Service Bindings

  - @ref checkVatBinding

@section Service_more More Information

  - @ref page_notes "Notes"

  - @ref page_XMLDataBinding "XML Data Binding"

  - @ref SOAP_ENV__Header "SOAP Header Content" (when applicable)

  - @ref SOAP_ENV__Detail "SOAP Fault Detail Content" (when applicable)


*/

/**

@page checkVatBinding Binding "checkVatBinding"

@section checkVatBinding_operations Operations of Binding "checkVatBinding"

  - @ref __ns1__checkVat

  - @ref __ns1__checkVatApprox

@section checkVatBinding_ports Default endpoints of Binding "checkVatBinding"

  - http://ec.europa.eu/taxation_customs/vies/services/checkVatService

@note Use wsdl2h option -Nname to change the service binding prefix name


*/

/******************************************************************************\
 *                                                                            *
 * Service Binding                                                            *
 *   checkVatBinding                                                          *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__checkVat                                                          *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__checkVat" of service binding "checkVatBinding".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ec.europa.eu/taxation_customs/vies/services/checkVatService

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__checkVat(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns2__checkVat*                     ns2__checkVat,
    // output parameters:
    _ns2__checkVatResponse             &ns2__checkVatResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__checkVat(
    struct soap *soap,
    // input parameters:
    _ns2__checkVat*                     ns2__checkVat,
    // output parameters:
    _ns2__checkVatResponse             &ns2__checkVatResponse
  );
@endcode

C++ proxy class (defined in soapcheckVatBindingProxy.h generated with soapcpp2):
@code
  class checkVatBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapcheckVatBindingService.h generated with soapcpp2):
@code
  class checkVatBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	checkVat SOAP
//gsoap ns1  service method-style:	checkVat document
//gsoap ns1  service method-encoding:	checkVat literal
//gsoap ns1  service method-action:	checkVat ""
//gsoap ns1  service method-output-action:	checkVat Response
int __ns1__checkVat(
    _ns2__checkVat*                     ns2__checkVat,	///< Input parameter
    _ns2__checkVatResponse             &ns2__checkVatResponse	///< Output parameter
);

/******************************************************************************\
 *                                                                            *
 * Service Operation                                                          *
 *   __ns1__checkVatApprox                                                    *
 *                                                                            *
\******************************************************************************/


/** Operation "__ns1__checkVatApprox" of service binding "checkVatBinding".

  - SOAP document/literal style messaging

  - Default endpoints:
    - http://ec.europa.eu/taxation_customs/vies/services/checkVatService

  - Addressing input action: ""

  - Addressing output action: "Response"

C stub function (defined in soapClient.c[pp] generated by soapcpp2):
@code
  int soap_call___ns1__checkVatApprox(
    struct soap *soap,
    NULL, // char *endpoint = NULL selects default endpoint for this operation
    NULL, // char *action = NULL selects default action for this operation
    // input parameters:
    _ns2__checkVatApprox*               ns2__checkVatApprox,
    // output parameters:
    _ns2__checkVatApproxResponse       &ns2__checkVatApproxResponse
  );
@endcode

C server function (called from the service dispatcher defined in soapServer.c[pp]):
@code
  int __ns1__checkVatApprox(
    struct soap *soap,
    // input parameters:
    _ns2__checkVatApprox*               ns2__checkVatApprox,
    // output parameters:
    _ns2__checkVatApproxResponse       &ns2__checkVatApproxResponse
  );
@endcode

C++ proxy class (defined in soapcheckVatBindingProxy.h generated with soapcpp2):
@code
  class checkVatBindingProxy;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use proxy classes;

C++ service class (defined in soapcheckVatBindingService.h generated with soapcpp2):
@code
  class checkVatBindingService;
@endcode
Important: use soapcpp2 option '-j' (or '-i') to generate improved and easy-to-use service classes;

*/

//gsoap ns1  service method-protocol:	checkVatApprox SOAP
//gsoap ns1  service method-style:	checkVatApprox document
//gsoap ns1  service method-encoding:	checkVatApprox literal
//gsoap ns1  service method-action:	checkVatApprox ""
//gsoap ns1  service method-output-action:	checkVatApprox Response
int __ns1__checkVatApprox(
    _ns2__checkVatApprox*               ns2__checkVatApprox,	///< Input parameter
    _ns2__checkVatApproxResponse       &ns2__checkVatApproxResponse	///< Output parameter
);

/**

@page checkVatBinding Binding "checkVatBinding"

@section checkVatBinding_policy_enablers Policy Enablers of Binding "checkVatBinding"

None specified.

*/

/******************************************************************************\
 *                                                                            *
 * XML Data Binding                                                           *
 *                                                                            *
\******************************************************************************/


/**

@page page_XMLDataBinding XML Data Binding

SOAP/XML services use data bindings contractually bound by WSDL and auto-
generated by wsdl2h and soapcpp2 (see Service Bindings). Plain data bindings
are adopted from XML schemas as part of the WSDL types section or when running
wsdl2h on a set of schemas to produce non-SOAP-based XML data bindings.

The following readers and writers are C/C++ data type (de)serializers auto-
generated by wsdl2h and soapcpp2. Run soapcpp2 on this file to generate the
(de)serialization code, which is stored in soapC.c[pp]. Include "soapH.h" in
your code to import these data type and function declarations. Only use the
soapcpp2-generated files in your project build. Do not include the wsdl2h-
generated .h file in your code.

Data can be read and deserialized from:
  - an int file descriptor, using soap->recvfd = fd
  - a socket, using soap->socket = (int)...
  - a C++ stream (istream, stringstream), using soap->is = (istream*)...
  - a C string, using soap->is = (const char*)...
  - any input, using the soap->frecv() callback

Data can be serialized and written to:
  - an int file descriptor, using soap->sendfd = (int)...
  - a socket, using soap->socket = (int)...
  - a C++ stream (ostream, stringstream), using soap->os = (ostream*)...
  - a C string, using soap->os = (const char**)...
  - any output, using the soap->fsend() callback

The following options are available for (de)serialization control:
  - soap->encodingStyle = NULL; to remove SOAP 1.1/1.2 encodingStyle
  - soap_mode(soap, SOAP_XML_TREE); XML without id-ref (no cycles!)
  - soap_mode(soap, SOAP_XML_GRAPH); XML with id-ref (including cycles)
  - soap_set_namespaces(soap, struct Namespace *nsmap); to set xmlns bindings


@section ns2 Top-level root elements of schema "urn:ec.europa.eu:taxud:vies:services:checkVat:types"

  - <ns2:checkVat> @ref _ns2__checkVat
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__checkVat(struct soap*, _ns2__checkVat*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__checkVat(struct soap*, _ns2__checkVat*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns2__checkVat(struct soap*, const char *URL, _ns2__checkVat*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns2__checkVat(struct soap*, const char *URL, _ns2__checkVat*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns2__checkVat(struct soap*, const char *URL, _ns2__checkVat*);
    soap_POST_recv__ns2__checkVat(struct soap*, _ns2__checkVat*);
    @endcode

  - <ns2:checkVatResponse> @ref _ns2__checkVatResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__checkVatResponse(struct soap*, _ns2__checkVatResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__checkVatResponse(struct soap*, _ns2__checkVatResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns2__checkVatResponse(struct soap*, const char *URL, _ns2__checkVatResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns2__checkVatResponse(struct soap*, const char *URL, _ns2__checkVatResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns2__checkVatResponse(struct soap*, const char *URL, _ns2__checkVatResponse*);
    soap_POST_recv__ns2__checkVatResponse(struct soap*, _ns2__checkVatResponse*);
    @endcode

  - <ns2:checkVatApprox> @ref _ns2__checkVatApprox
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__checkVatApprox(struct soap*, _ns2__checkVatApprox*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__checkVatApprox(struct soap*, _ns2__checkVatApprox*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns2__checkVatApprox(struct soap*, const char *URL, _ns2__checkVatApprox*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns2__checkVatApprox(struct soap*, const char *URL, _ns2__checkVatApprox*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns2__checkVatApprox(struct soap*, const char *URL, _ns2__checkVatApprox*);
    soap_POST_recv__ns2__checkVatApprox(struct soap*, _ns2__checkVatApprox*);
    @endcode

  - <ns2:checkVatApproxResponse> @ref _ns2__checkVatApproxResponse
    @code
    // Reader (returns SOAP_OK on success):
    soap_read__ns2__checkVatApproxResponse(struct soap*, _ns2__checkVatApproxResponse*);
    // Writer (returns SOAP_OK on success):
    soap_write__ns2__checkVatApproxResponse(struct soap*, _ns2__checkVatApproxResponse*);
    // REST GET (returns SOAP_OK on success):
    soap_GET__ns2__checkVatApproxResponse(struct soap*, const char *URL, _ns2__checkVatApproxResponse*);
    // REST PUT (returns SOAP_OK on success):
    soap_PUT__ns2__checkVatApproxResponse(struct soap*, const char *URL, _ns2__checkVatApproxResponse*);
    // REST POST (returns SOAP_OK on success):
    soap_POST_send__ns2__checkVatApproxResponse(struct soap*, const char *URL, _ns2__checkVatApproxResponse*);
    soap_POST_recv__ns2__checkVatApproxResponse(struct soap*, _ns2__checkVatApproxResponse*);
    @endcode

*/

/* End of checkVatService.h */
