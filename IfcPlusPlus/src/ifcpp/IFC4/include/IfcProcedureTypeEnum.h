/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcProcedureTypeEnum = ENUMERATION OF	(ADVICE_CAUTION	,ADVICE_NOTE	,ADVICE_WARNING	,CALIBRATION	,DIAGNOSTIC	,SHUTDOWN	,STARTUP	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcProcedureTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcProcedureTypeEnumEnum
	{
		ENUM_ADVICE_CAUTION,
		ENUM_ADVICE_NOTE,
		ENUM_ADVICE_WARNING,
		ENUM_CALIBRATION,
		ENUM_DIAGNOSTIC,
		ENUM_SHUTDOWN,
		ENUM_STARTUP,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcProcedureTypeEnum();
	IfcProcedureTypeEnum( IfcProcedureTypeEnumEnum e ) { m_enum = e; }
	~IfcProcedureTypeEnum();
	virtual const char* className() const { return "IfcProcedureTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcProcedureTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcProcedureTypeEnumEnum m_enum;
};

