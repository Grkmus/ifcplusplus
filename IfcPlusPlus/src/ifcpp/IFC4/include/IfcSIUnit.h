/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcNamedUnit.h"
class IFCPP_EXPORT IfcSIPrefix;
class IFCPP_EXPORT IfcSIUnitName;
//ENTITY
class IFCPP_EXPORT IfcSIUnit : public IfcNamedUnit
{ 
public:
	IfcSIUnit();
	IfcSIUnit( int id );
	~IfcSIUnit();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 4; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcSIUnit"; }
	virtual const std::wstring toString() const;


	// IfcNamedUnit -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcDimensionalExponents>	m_Dimensions;
	//  shared_ptr<IfcUnitEnum>				m_UnitType;

	// IfcSIUnit -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcSIPrefix>				m_Prefix;					//optional
	shared_ptr<IfcSIUnitName>			m_Name;
};

