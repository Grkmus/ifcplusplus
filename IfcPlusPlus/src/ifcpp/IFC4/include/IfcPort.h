/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcProduct.h"
class IFCPP_EXPORT IfcRelConnectsPortToElement;
class IFCPP_EXPORT IfcRelConnectsPorts;
//ENTITY
class IFCPP_EXPORT IfcPort : public IfcProduct
{ 
public:
	IfcPort();
	IfcPort( int id );
	~IfcPort();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 7; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcPort"; }
	virtual const std::wstring toString() const;


	// IfcRoot -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcGloballyUniqueId>						m_GlobalId;
	//  shared_ptr<IfcOwnerHistory>							m_OwnerHistory;				//optional
	//  shared_ptr<IfcLabel>								m_Name;						//optional
	//  shared_ptr<IfcText>									m_Description;				//optional

	// IfcObjectDefinition -----------------------------------------------------------
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelAssigns> >				m_HasAssignments_inverse;
	//  std::vector<weak_ptr<IfcRelNests> >					m_Nests_inverse;
	//  std::vector<weak_ptr<IfcRelNests> >					m_IsNestedBy_inverse;
	//  std::vector<weak_ptr<IfcRelDeclares> >				m_HasContext_inverse;
	//  std::vector<weak_ptr<IfcRelAggregates> >			m_IsDecomposedBy_inverse;
	//  std::vector<weak_ptr<IfcRelAggregates> >			m_Decomposes_inverse;
	//  std::vector<weak_ptr<IfcRelAssociates> >			m_HasAssociations_inverse;

	// IfcObject -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcLabel>								m_ObjectType;				//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelDefinesByObject> >		m_IsDeclaredBy_inverse;
	//  std::vector<weak_ptr<IfcRelDefinesByObject> >		m_Declares_inverse;
	//  std::vector<weak_ptr<IfcRelDefinesByType> >			m_IsTypedBy_inverse;
	//  std::vector<weak_ptr<IfcRelDefinesByProperties> >	m_IsDefinedBy_inverse;

	// IfcProduct -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcObjectPlacement>						m_ObjectPlacement;			//optional
	//  shared_ptr<IfcProductRepresentation>				m_Representation;			//optional
	// inverse attributes:
	//  std::vector<weak_ptr<IfcRelAssignsToProduct> >		m_ReferencedBy_inverse;

	// IfcPort -----------------------------------------------------------
	// inverse attributes:
	std::vector<weak_ptr<IfcRelConnectsPortToElement> >	m_ContainedIn_inverse;
	std::vector<weak_ptr<IfcRelConnectsPorts> >			m_ConnectedFrom_inverse;
	std::vector<weak_ptr<IfcRelConnectsPorts> >			m_ConnectedTo_inverse;
};

