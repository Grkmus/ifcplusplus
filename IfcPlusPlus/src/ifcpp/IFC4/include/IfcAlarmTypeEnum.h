/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcAlarmTypeEnum = ENUMERATION OF	(BELL	,BREAKGLASSBUTTON	,LIGHT	,MANUALPULLBOX	,SIREN	,WHISTLE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcAlarmTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcAlarmTypeEnumEnum
	{
		ENUM_BELL,
		ENUM_BREAKGLASSBUTTON,
		ENUM_LIGHT,
		ENUM_MANUALPULLBOX,
		ENUM_SIREN,
		ENUM_WHISTLE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcAlarmTypeEnum();
	IfcAlarmTypeEnum( IfcAlarmTypeEnumEnum e ) { m_enum = e; }
	~IfcAlarmTypeEnum();
	virtual const char* className() const { return "IfcAlarmTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcAlarmTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcAlarmTypeEnumEnum m_enum;
};

