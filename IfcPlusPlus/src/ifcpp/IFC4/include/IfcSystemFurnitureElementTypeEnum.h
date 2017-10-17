/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSystemFurnitureElementTypeEnum = ENUMERATION OF	(PANEL	,WORKSURFACE	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcSystemFurnitureElementTypeEnum : virtual public IfcPPObject
{
public:
	enum IfcSystemFurnitureElementTypeEnumEnum
	{
		ENUM_PANEL,
		ENUM_WORKSURFACE,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcSystemFurnitureElementTypeEnum();
	IfcSystemFurnitureElementTypeEnum( IfcSystemFurnitureElementTypeEnumEnum e ) { m_enum = e; }
	~IfcSystemFurnitureElementTypeEnum();
	virtual const char* className() const { return "IfcSystemFurnitureElementTypeEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSystemFurnitureElementTypeEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcSystemFurnitureElementTypeEnumEnum m_enum;
};

