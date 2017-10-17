/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcSweptAreaSolid.h"
class IFCPP_EXPORT IfcAxis1Placement;
class IFCPP_EXPORT IfcPlaneAngleMeasure;
//ENTITY
class IFCPP_EXPORT IfcRevolvedAreaSolid : public IfcSweptAreaSolid
{ 
public:
	IfcRevolvedAreaSolid();
	IfcRevolvedAreaSolid( int id );
	~IfcRevolvedAreaSolid();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcRevolvedAreaSolid"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcSolidModel -----------------------------------------------------------

	// IfcSweptAreaSolid -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcProfileDef>								m_SweptArea;
	//  shared_ptr<IfcAxis2Placement3D>							m_Position;					//optional

	// IfcRevolvedAreaSolid -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAxis1Placement>							m_Axis;
	shared_ptr<IfcPlaneAngleMeasure>						m_Angle;
};

