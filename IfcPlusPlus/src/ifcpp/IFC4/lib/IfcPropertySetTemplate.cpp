/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPropertySetTemplate.h"
#include "ifcpp/IFC4/include/IfcPropertySetTemplateTypeEnum.h"
#include "ifcpp/IFC4/include/IfcPropertyTemplate.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcPropertySetTemplate 
IfcPropertySetTemplate::IfcPropertySetTemplate() {}
IfcPropertySetTemplate::IfcPropertySetTemplate( int id ) { m_id = id; }
IfcPropertySetTemplate::~IfcPropertySetTemplate() {}
shared_ptr<IfcPPObject> IfcPropertySetTemplate::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPropertySetTemplate> copy_self( new IfcPropertySetTemplate() );
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
	if( m_TemplateType ) { copy_self->m_TemplateType = dynamic_pointer_cast<IfcPropertySetTemplateTypeEnum>( m_TemplateType->getDeepCopy(options) ); }
	if( m_ApplicableEntity ) { copy_self->m_ApplicableEntity = dynamic_pointer_cast<IfcIdentifier>( m_ApplicableEntity->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_HasPropertyTemplates.size(); ++ii )
	{
		auto item_ii = m_HasPropertyTemplates[ii];
		if( item_ii )
		{
			copy_self->m_HasPropertyTemplates.push_back( dynamic_pointer_cast<IfcPropertyTemplate>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPropertySetTemplate::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPROPERTYSETTEMPLATE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_TemplateType ) { m_TemplateType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ApplicableEntity ) { m_ApplicableEntity->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_HasPropertyTemplates );
	stream << ");";
}
void IfcPropertySetTemplate::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcPropertySetTemplate::toString() const { return L"IfcPropertySetTemplate"; }
void IfcPropertySetTemplate::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertySetTemplate, expecting 7, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_TemplateType = IfcPropertySetTemplateTypeEnum::createObjectFromSTEP( args[4], map );
	m_ApplicableEntity = IfcIdentifier::createObjectFromSTEP( args[5], map );
	readEntityReferenceList( args[6], m_HasPropertyTemplates, map );
}
void IfcPropertySetTemplate::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPropertyTemplateDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "TemplateType", m_TemplateType ) );
	vec_attributes.push_back( std::make_pair( "ApplicableEntity", m_ApplicableEntity ) );
	if( m_HasPropertyTemplates.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasPropertyTemplates_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_HasPropertyTemplates.begin(), m_HasPropertyTemplates.end(), std::back_inserter( HasPropertyTemplates_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "HasPropertyTemplates", HasPropertyTemplates_vec_object ) );
	}
}
void IfcPropertySetTemplate::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPropertyTemplateDefinition::getAttributesInverse( vec_attributes_inverse );
	if( m_Defines_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Defines_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_Defines_inverse.size(); ++i )
		{
			if( !m_Defines_inverse[i].expired() )
			{
				Defines_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDefinesByTemplate>( m_Defines_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "Defines_inverse", Defines_inverse_vec_obj ) );
	}
}
void IfcPropertySetTemplate::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPropertyTemplateDefinition::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcPropertySetTemplate> ptr_self = dynamic_pointer_cast<IfcPropertySetTemplate>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcPropertySetTemplate::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_HasPropertyTemplates.size(); ++i )
	{
		if( m_HasPropertyTemplates[i] )
		{
			m_HasPropertyTemplates[i]->m_PartOfPsetTemplate_inverse.push_back( ptr_self );
		}
	}
}
void IfcPropertySetTemplate::unlinkFromInverseCounterparts()
{
	IfcPropertyTemplateDefinition::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_HasPropertyTemplates.size(); ++i )
	{
		if( m_HasPropertyTemplates[i] )
		{
			std::vector<weak_ptr<IfcPropertySetTemplate> >& PartOfPsetTemplate_inverse = m_HasPropertyTemplates[i]->m_PartOfPsetTemplate_inverse;
			for( auto it_PartOfPsetTemplate_inverse = PartOfPsetTemplate_inverse.begin(); it_PartOfPsetTemplate_inverse != PartOfPsetTemplate_inverse.end(); )
			{
				shared_ptr<IfcPropertySetTemplate> self_candidate( *it_PartOfPsetTemplate_inverse );
				if( self_candidate.get() == this )
				{
					it_PartOfPsetTemplate_inverse= PartOfPsetTemplate_inverse.erase( it_PartOfPsetTemplate_inverse );
				}
				else
				{
					++it_PartOfPsetTemplate_inverse;
				}
			}
		}
	}
}
