/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcWorkCalendarTypeEnum = ENUMERATION OF	(FIRSTSHIFT	,SECONDSHIFT	,THIRDSHIFT	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcWorkCalendarTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcWorkCalendarTypeEnumEnum
	{
		ENUM_FIRSTSHIFT,
		ENUM_SECONDSHIFT,
		ENUM_THIRDSHIFT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWorkCalendarTypeEnum();
	IfcWorkCalendarTypeEnum( IfcWorkCalendarTypeEnumEnum e ) { m_enum = e; }
	~IfcWorkCalendarTypeEnum();
	virtual const char* className() const { return "IfcWorkCalendarTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWorkCalendarTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcWorkCalendarTypeEnumEnum m_enum;
};

