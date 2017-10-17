/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCostItem.h"
#include "ifcpp/IFC4/include/IfcCostItemTypeEnum.h"
#include "ifcpp/IFC4/include/IfcCostValue.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPhysicalQuantity.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToControl.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcCostItem 
IfcCostItem::IfcCostItem() {}
IfcCostItem::IfcCostItem( int id ) { m_id = id; }
IfcCostItem::~IfcCostItem() {}
shared_ptr<IfcPPObject> IfcCostItem::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCostItem> copy_self( new IfcCostItem() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcCostItemTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_CostValues.size(); ++ii )
	{
		auto item_ii = m_CostValues[ii];
		if( item_ii )
		{
			copy_self->m_CostValues.push_back( dynamic_pointer_cast<IfcCostValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_CostQuantities.size(); ++ii )
	{
		auto item_ii = m_CostQuantities[ii];
		if( item_ii )
		{
			copy_self->m_CostQuantities.push_back( dynamic_pointer_cast<IfcPhysicalQuantity>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcCostItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCOSTITEM" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_CostValues );
	stream << ",";
	writeEntityList( stream, m_CostQuantities );
	stream << ");";
}
void IfcCostItem::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcCostItem::toString() const { return L"IfcCostItem"; }
void IfcCostItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCostItem, expecting 9, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map );
	m_PredefinedType = IfcCostItemTypeEnum::createObjectFromSTEP( args[6], map );
	readEntityReferenceList( args[7], m_CostValues, map );
	readEntityReferenceList( args[8], m_CostQuantities, map );
}
void IfcCostItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcControl::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	if( m_CostValues.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> CostValues_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_CostValues.begin(), m_CostValues.end(), std::back_inserter( CostValues_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "CostValues", CostValues_vec_object ) );
	}
	if( m_CostQuantities.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> CostQuantities_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_CostQuantities.begin(), m_CostQuantities.end(), std::back_inserter( CostQuantities_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "CostQuantities", CostQuantities_vec_object ) );
	}
}
void IfcCostItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcControl::getAttributesInverse( vec_attributes_inverse );
}
void IfcCostItem::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcControl::setInverseCounterparts( ptr_self_entity );
}
void IfcCostItem::unlinkFromInverseCounterparts()
{
	IfcControl::unlinkFromInverseCounterparts();
}
