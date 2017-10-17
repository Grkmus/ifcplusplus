/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSwitchingDeviceTypeEnum = ENUMERATION OF	(CONTACTOR	,DIMMERSWITCH	,EMERGENCYSTOP	,KEYPAD	,MOMENTARYSWITCH	,SELECTORSWITCH	,STARTER	,SWITCHDISCONNECTOR	,TOGGLESWITCH	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcSwitchingDeviceTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcSwitchingDeviceTypeEnumEnum
	{
		ENUM_CONTACTOR,
		ENUM_DIMMERSWITCH,
		ENUM_EMERGENCYSTOP,
		ENUM_KEYPAD,
		ENUM_MOMENTARYSWITCH,
		ENUM_SELECTORSWITCH,
		ENUM_STARTER,
		ENUM_SWITCHDISCONNECTOR,
		ENUM_TOGGLESWITCH,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSwitchingDeviceTypeEnum();
	IfcSwitchingDeviceTypeEnum( IfcSwitchingDeviceTypeEnumEnum e ) { m_enum = e; }
	~IfcSwitchingDeviceTypeEnum();
	virtual const char* className() const { return "IfcSwitchingDeviceTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSwitchingDeviceTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcSwitchingDeviceTypeEnumEnum m_enum;
};

