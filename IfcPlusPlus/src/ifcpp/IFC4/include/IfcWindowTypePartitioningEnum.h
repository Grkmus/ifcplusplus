/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcWindowTypePartitioningEnum = ENUMERATION OF	(SINGLE_PANEL	,DOUBLE_PANEL_VERTICAL	,DOUBLE_PANEL_HORIZONTAL	,TRIPLE_PANEL_VERTICAL	,TRIPLE_PANEL_BOTTOM	,TRIPLE_PANEL_TOP	,TRIPLE_PANEL_LEFT	,TRIPLE_PANEL_RIGHT	,TRIPLE_PANEL_HORIZONTAL	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcWindowTypePartitioningEnum : virtual public IfcPPObject
{
public:
	enum IfcWindowTypePartitioningEnumEnum
	{
		ENUM_SINGLE_PANEL,
		ENUM_DOUBLE_PANEL_VERTICAL,
		ENUM_DOUBLE_PANEL_HORIZONTAL,
		ENUM_TRIPLE_PANEL_VERTICAL,
		ENUM_TRIPLE_PANEL_BOTTOM,
		ENUM_TRIPLE_PANEL_TOP,
		ENUM_TRIPLE_PANEL_LEFT,
		ENUM_TRIPLE_PANEL_RIGHT,
		ENUM_TRIPLE_PANEL_HORIZONTAL,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcWindowTypePartitioningEnum();
	IfcWindowTypePartitioningEnum( IfcWindowTypePartitioningEnumEnum e ) { m_enum = e; }
	~IfcWindowTypePartitioningEnum();
	virtual const char* className() const { return "IfcWindowTypePartitioningEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcWindowTypePartitioningEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcWindowTypePartitioningEnumEnum m_enum;
};

