/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcBoundaryCondition.h"
class IFCPP_EXPORT IfcModulusOfTranslationalSubgradeReactionSelect;
class IFCPP_EXPORT IfcModulusOfRotationalSubgradeReactionSelect;
//ENTITY
class IFCPP_EXPORT IfcBoundaryEdgeCondition : public IfcBoundaryCondition
{ 
public:
	IfcBoundaryEdgeCondition();
	IfcBoundaryEdgeCondition( int id );
	~IfcBoundaryEdgeCondition();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcBoundaryEdgeCondition"; }
	virtual const std::wstring toString() const;


	// IfcBoundaryCondition -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>										m_Name;						//optional

	// IfcBoundaryEdgeCondition -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthX;	//optional
	shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthY;	//optional
	shared_ptr<IfcModulusOfTranslationalSubgradeReactionSelect>	m_TranslationalStiffnessByLengthZ;	//optional
	shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthX;	//optional
	shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthY;	//optional
	shared_ptr<IfcModulusOfRotationalSubgradeReactionSelect>	m_RotationalStiffnessByLengthZ;	//optional
};

