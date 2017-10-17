/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcLampTypeEnum = ENUMERATION OF	(COMPACTFLUORESCENT	,FLUORESCENT	,HALOGEN	,HIGHPRESSUREMERCURY	,HIGHPRESSURESODIUM	,LED	,METALHALIDE	,OLED	,TUNGSTENFILAMENT	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcLampTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcLampTypeEnumEnum
	{
		ENUM_COMPACTFLUORESCENT,
		ENUM_FLUORESCENT,
		ENUM_HALOGEN,
		ENUM_HIGHPRESSUREMERCURY,
		ENUM_HIGHPRESSURESODIUM,
		ENUM_LED,
		ENUM_METALHALIDE,
		ENUM_OLED,
		ENUM_TUNGSTENFILAMENT,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcLampTypeEnum();
	IfcLampTypeEnum( IfcLampTypeEnumEnum e ) { m_enum = e; }
	~IfcLampTypeEnum();
	virtual const char* className() const { return "IfcLampTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLampTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcLampTypeEnumEnum m_enum;
};

