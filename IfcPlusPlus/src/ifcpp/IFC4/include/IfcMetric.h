/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcConstraint.h"
class IFCPP_EXPORT IfcBenchmarkEnum;
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcMetricValueSelect;
class IFCPP_EXPORT IfcReference;
//ENTITY
class IFCPP_EXPORT IfcMetric : public IfcConstraint
{ 
public:
	IfcMetric();
	IfcMetric( int id );
	~IfcMetric();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 11; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcMetric"; }
	virtual const std::wstring toString() const;


	// IfcConstraint -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>										m_Name;
	//  shared_ptr<IfcText>											m_Description;				//optional
	//  shared_ptr<IfcConstraintEnum>								m_ConstraintGrade;
	//  shared_ptr<IfcLabel>										m_ConstraintSource;			//optional
	//  shared_ptr<IfcActorSelect>									m_CreatingActor;			//optional
	//  shared_ptr<IfcDateTime>										m_CreationTime;				//optional
	//  shared_ptr<IfcLabel>										m_UserDefinedGrade;			//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
	//  std::vector<weak_ptr<IfcResourceConstraintRelationship> >	m_PropertiesForConstraint_inverse;

	// IfcMetric -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcBenchmarkEnum>								m_Benchmark;
	shared_ptr<IfcLabel>										m_ValueSource;				//optional
	shared_ptr<IfcMetricValueSelect>							m_DataValue;				//optional
	shared_ptr<IfcReference>									m_ReferencePath;			//optional
};

