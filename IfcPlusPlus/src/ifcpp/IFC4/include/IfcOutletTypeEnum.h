/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcOutletTypeEnum = ENUMERATION OF	(AUDIOVISUALOUTLET	,COMMUNICATIONSOUTLET	,POWEROUTLET	,DATAOUTLET	,TELEPHONEOUTLET	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcOutletTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcOutletTypeEnumEnum
	{
		ENUM_AUDIOVISUALOUTLET,
		ENUM_COMMUNICATIONSOUTLET,
		ENUM_POWEROUTLET,
		ENUM_DATAOUTLET,
		ENUM_TELEPHONEOUTLET,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcOutletTypeEnum();
	IfcOutletTypeEnum( IfcOutletTypeEnumEnum e ) { m_enum = e; }
	~IfcOutletTypeEnum();
	virtual const char* className() const { return "IfcOutletTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcOutletTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcOutletTypeEnumEnum m_enum;
};

