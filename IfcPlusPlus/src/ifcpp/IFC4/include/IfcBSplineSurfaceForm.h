/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcBSplineSurfaceForm = ENUMERATION OF	(PLANE_SURF	,CYLINDRICAL_SURF	,CONICAL_SURF	,SPHERICAL_SURF	,TOROIDAL_SURF	,SURF_OF_REVOLUTION	,RULED_SURF	,GENERALISED_CONE	,QUADRIC_SURF	,SURF_OF_LINEAR_EXTRUSION	,UNSPECIFIED);
class IFCPP_EXPORT IfcBSplineSurfaceForm : virtual public IfcPPObject
{
public:
	enum IfcBSplineSurfaceFormEnum
	{
		ENUM_PLANE_SURF,
		ENUM_CYLINDRICAL_SURF,
		ENUM_CONICAL_SURF,
		ENUM_SPHERICAL_SURF,
		ENUM_TOROIDAL_SURF,
		ENUM_SURF_OF_REVOLUTION,
		ENUM_RULED_SURF,
		ENUM_GENERALISED_CONE,
		ENUM_QUADRIC_SURF,
		ENUM_SURF_OF_LINEAR_EXTRUSION,
		ENUM_UNSPECIFIED
	};

	IfcBSplineSurfaceForm();
	IfcBSplineSurfaceForm( IfcBSplineSurfaceFormEnum e ) { m_enum = e; }
	~IfcBSplineSurfaceForm();
	virtual const char* className() const { return "IfcBSplineSurfaceForm"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcBSplineSurfaceForm> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcBSplineSurfaceFormEnum m_enum;
};

