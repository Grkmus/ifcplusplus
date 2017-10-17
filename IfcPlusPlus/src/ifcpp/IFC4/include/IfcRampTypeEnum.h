/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcRampTypeEnum = ENUMERATION OF	(STRAIGHT_RUN_RAMP	,TWO_STRAIGHT_RUN_RAMP	,QUARTER_TURN_RAMP	,TWO_QUARTER_TURN_RAMP	,HALF_TURN_RAMP	,SPIRAL_RAMP	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcRampTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcRampTypeEnumEnum
	{
		ENUM_STRAIGHT_RUN_RAMP,
		ENUM_TWO_STRAIGHT_RUN_RAMP,
		ENUM_QUARTER_TURN_RAMP,
		ENUM_TWO_QUARTER_TURN_RAMP,
		ENUM_HALF_TURN_RAMP,
		ENUM_SPIRAL_RAMP,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcRampTypeEnum();
	IfcRampTypeEnum( IfcRampTypeEnumEnum e ) { m_enum = e; }
	~IfcRampTypeEnum();
	virtual const char* className() const { return "IfcRampTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcRampTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcRampTypeEnumEnum m_enum;
};

