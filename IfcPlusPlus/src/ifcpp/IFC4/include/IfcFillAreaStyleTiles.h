/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcFillStyleSelect.h"
#include "IfcGeometricRepresentationItem.h"
class IFCPP_EXPORT IfcVector;
class IFCPP_EXPORT IfcStyledItem;
class IFCPP_EXPORT IfcPositiveRatioMeasure;
//ENTITY
class IFCPP_EXPORT IfcFillAreaStyleTiles : virtual public IfcFillStyleSelect, public IfcGeometricRepresentationItem
{ 
public:
	IfcFillAreaStyleTiles();
	IfcFillAreaStyleTiles( int id );
	~IfcFillAreaStyleTiles();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcFillAreaStyleTiles"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcFillAreaStyleTiles -----------------------------------------------------------
	// attributes:
	std::vector<shared_ptr<IfcVector> >						m_TilingPattern;
	std::vector<shared_ptr<IfcStyledItem> >					m_Tiles;
	shared_ptr<IfcPositiveRatioMeasure>						m_TilingScale;
};

