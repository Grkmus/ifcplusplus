/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcGeometricProjectionEnum = ENUMERATION OF	(GRAPH_VIEW	,SKETCH_VIEW	,MODEL_VIEW	,PLAN_VIEW	,REFLECTED_PLAN_VIEW	,SECTION_VIEW	,ELEVATION_VIEW	,USERDEFINED	,NOTDEFINED);
class IFCPP_EXPORT IfcGeometricProjectionEnum : virtual public IfcPPObject
{
public:
	enum IfcGeometricProjectionEnumEnum
	{
		ENUM_GRAPH_VIEW,
		ENUM_SKETCH_VIEW,
		ENUM_MODEL_VIEW,
		ENUM_PLAN_VIEW,
		ENUM_REFLECTED_PLAN_VIEW,
		ENUM_SECTION_VIEW,
		ENUM_ELEVATION_VIEW,
		ENUM_USERDEFINED,
		ENUM_NOTDEFINED
	};

	IfcGeometricProjectionEnum();
	IfcGeometricProjectionEnum( IfcGeometricProjectionEnumEnum e ) { m_enum = e; }
	~IfcGeometricProjectionEnum();
	virtual const char* className() const { return "IfcGeometricProjectionEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcGeometricProjectionEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcGeometricProjectionEnumEnum m_enum;
};

