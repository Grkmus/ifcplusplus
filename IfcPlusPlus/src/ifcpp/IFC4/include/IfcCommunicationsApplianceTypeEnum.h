/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcCommunicationsApplianceTypeEnum = ENUMERATION OF	(ANTENNA	,COMPUTER	,FAX	,GATEWAY	,MODEM	,NETWORKAPPLIANCE	,NETWORKBRIDGE	,NETWORKHUB	,PRINTER	,REPEATER	,ROUTER	,SCANNER	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcCommunicationsApplianceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcCommunicationsApplianceTypeEnumEnum
	{
		ENUM_ANTENNA,
		ENUM_COMPUTER,
		ENUM_FAX,
		ENUM_GATEWAY,
		ENUM_MODEM,
		ENUM_NETWORKAPPLIANCE,
		ENUM_NETWORKBRIDGE,
		ENUM_NETWORKHUB,
		ENUM_PRINTER,
		ENUM_REPEATER,
		ENUM_ROUTER,
		ENUM_SCANNER,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcCommunicationsApplianceTypeEnum();
	IfcCommunicationsApplianceTypeEnum( IfcCommunicationsApplianceTypeEnumEnum e ) { m_enum = e; }
	~IfcCommunicationsApplianceTypeEnum();
	virtual const char* className() const { return "IfcCommunicationsApplianceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcCommunicationsApplianceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcCommunicationsApplianceTypeEnumEnum m_enum;
};

