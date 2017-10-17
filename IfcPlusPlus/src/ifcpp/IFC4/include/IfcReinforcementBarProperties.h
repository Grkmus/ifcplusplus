/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcPreDefinedProperties.h"
class IFCPP_EXPORT IfcAreaMeasure;
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcReinforcingBarSurfaceEnum;
class IFCPP_EXPORT IfcLengthMeasure;
class IFCPP_EXPORT IfcPositiveLengthMeasure;
class IFCPP_EXPORT IfcCountMeasure;
//ENTITY
class IFCPP_EXPORT IfcReinforcementBarProperties : public IfcPreDefinedProperties
{ 
public:
	IfcReinforcementBarProperties();
	IfcReinforcementBarProperties( int id );
	~IfcReinforcementBarProperties();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 6; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcReinforcementBarProperties"; }
	virtual const std::wstring toString() const;


	// IfcPropertyAbstraction -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;

	// IfcPreDefinedProperties -----------------------------------------------------------

	// IfcReinforcementBarProperties -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcAreaMeasure>									m_TotalCrossSectionArea;
	shared_ptr<IfcLabel>										m_SteelGrade;
	shared_ptr<IfcReinforcingBarSurfaceEnum>					m_BarSurface;				//optional
	shared_ptr<IfcLengthMeasure>								m_EffectiveDepth;			//optional
	shared_ptr<IfcPositiveLengthMeasure>						m_NominalBarDiameter;		//optional
	shared_ptr<IfcCountMeasure>									m_BarCount;					//optional
};

