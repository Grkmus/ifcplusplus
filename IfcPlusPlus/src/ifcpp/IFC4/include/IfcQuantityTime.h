/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcPhysicalSimpleQuantity.h"
class IFCPP_EXPORT IfcTimeMeasure;
class IFCPP_EXPORT IfcLabel;
//ENTITY
class IFCPP_EXPORT IfcQuantityTime : public IfcPhysicalSimpleQuantity
{ 
public:
	IfcQuantityTime();
	IfcQuantityTime( int id );
	~IfcQuantityTime();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 5; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcQuantityTime"; }
	virtual const std::wstring toString() const;


	// IfcPhysicalQuantity -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>										m_Name;
	//  shared_ptr<IfcText>											m_Description;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcExternalReferenceRelationship> >	m_HasExternalReferences_inverse;
	//  std::vector<weak_ptr<IfcPhysicalComplexQuantity> >			m_PartOfComplex_inverse;

	// IfcPhysicalSimpleQuantity -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcNamedUnit>									m_Unit;						//optional

	// IfcQuantityTime -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcTimeMeasure>									m_TimeValue;
	shared_ptr<IfcLabel>										m_Formula;					//optional
};

