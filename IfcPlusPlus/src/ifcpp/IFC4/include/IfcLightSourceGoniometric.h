/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcLightSource.h"
class IFCPP_EXPORT IfcAxis2Placement3D;
class IFCPP_EXPORT IfcColourRgb;
class IFCPP_EXPORT IfcThermodynamicTemperatureMeasure;
class IFCPP_EXPORT IfcLuminousFluxMeasure;
class IFCPP_EXPORT IfcLightEmissionSourceEnum;
class IFCPP_EXPORT IfcLightDistributionDataSourceSelect;
//ENTITY
class IFCPP_EXPORT IfcLightSourceGoniometric : public IfcLightSource
{ 
public:
	IfcLightSourceGoniometric();
	IfcLightSourceGoniometric( int id );
	~IfcLightSourceGoniometric();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 10; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcLightSourceGoniometric"; }
	virtual const std::wstring toString() const;


	// IfcRepresentationItem -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcPresentationLayerAssignment> >	m_LayerAssignment_inverse;
	//  std::vector<weak_ptr<IfcStyledItem> >					m_StyledByItem_inverse;

	// IfcGeometricRepresentationItem -----------------------------------------------------------

	// IfcLightSource -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>									m_Name;						//optional
	//  shared_ptr<IfcColourRgb>								m_LightColour;
	//  shared_ptr<IfcNormalisedRatioMeasure>					m_AmbientIntensity;			//optional
	//  shared_ptr<IfcNormalisedRatioMeasure>					m_Intensity;				//optional

	// IfcLightSourceGoniometric -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAxis2Placement3D>							m_Position;
	shared_ptr<IfcColourRgb>								m_ColourAppearance;			//optional
	shared_ptr<IfcThermodynamicTemperatureMeasure>			m_ColourTemperature;
	shared_ptr<IfcLuminousFluxMeasure>						m_LuminousFlux;
	shared_ptr<IfcLightEmissionSourceEnum>					m_LightEmissionSource;
	shared_ptr<IfcLightDistributionDataSourceSelect>		m_LightDistributionDataSource;
};

