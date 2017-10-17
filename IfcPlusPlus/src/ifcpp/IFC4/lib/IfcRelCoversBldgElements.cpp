/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCovering.h"
#include "ifcpp/IFC4/include/IfcElement.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelCoversBldgElements.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelCoversBldgElements 
IfcRelCoversBldgElements::IfcRelCoversBldgElements() {}
IfcRelCoversBldgElements::IfcRelCoversBldgElements( int id ) { m_id = id; }
IfcRelCoversBldgElements::~IfcRelCoversBldgElements() {}
shared_ptr<IfcPPObject> IfcRelCoversBldgElements::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRelCoversBldgElements> copy_self( new IfcRelCoversBldgElements() );
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
	if( m_RelatingBuildingElement ) { copy_self->m_RelatingBuildingElement = dynamic_pointer_cast<IfcElement>( m_RelatingBuildingElement->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedCoverings.size(); ++ii )
	{
		auto item_ii = m_RelatedCoverings[ii];
		if( item_ii )
		{
			copy_self->m_RelatedCoverings.push_back( dynamic_pointer_cast<IfcCovering>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcRelCoversBldgElements::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRELCOVERSBLDGELEMENTS" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RelatingBuildingElement ) { stream << "#" << m_RelatingBuildingElement->m_id; } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_RelatedCoverings );
	stream << ");";
}
void IfcRelCoversBldgElements::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcRelCoversBldgElements::toString() const { return L"IfcRelCoversBldgElements"; }
void IfcRelCoversBldgElements::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelCoversBldgElements, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_RelatingBuildingElement, map );
	readEntityReferenceList( args[5], m_RelatedCoverings, map );
}
void IfcRelCoversBldgElements::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelConnects::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingBuildingElement", m_RelatingBuildingElement ) );
	if( m_RelatedCoverings.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> RelatedCoverings_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_RelatedCoverings.begin(), m_RelatedCoverings.end(), std::back_inserter( RelatedCoverings_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "RelatedCoverings", RelatedCoverings_vec_object ) );
	}
}
void IfcRelCoversBldgElements::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelConnects::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelCoversBldgElements::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelConnects::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelCoversBldgElements> ptr_self = dynamic_pointer_cast<IfcRelCoversBldgElements>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcRelCoversBldgElements::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedCoverings.size(); ++i )
	{
		if( m_RelatedCoverings[i] )
		{
			m_RelatedCoverings[i]->m_CoversElements_inverse.push_back( ptr_self );
		}
	}
	if( m_RelatingBuildingElement )
	{
		m_RelatingBuildingElement->m_HasCoverings_inverse.push_back( ptr_self );
	}
}
void IfcRelCoversBldgElements::unlinkFromInverseCounterparts()
{
	IfcRelConnects::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedCoverings.size(); ++i )
	{
		if( m_RelatedCoverings[i] )
		{
			std::vector<weak_ptr<IfcRelCoversBldgElements> >& CoversElements_inverse = m_RelatedCoverings[i]->m_CoversElements_inverse;
			for( auto it_CoversElements_inverse = CoversElements_inverse.begin(); it_CoversElements_inverse != CoversElements_inverse.end(); )
			{
				shared_ptr<IfcRelCoversBldgElements> self_candidate( *it_CoversElements_inverse );
				if( self_candidate.get() == this )
				{
					it_CoversElements_inverse= CoversElements_inverse.erase( it_CoversElements_inverse );
				}
				else
				{
					++it_CoversElements_inverse;
				}
			}
		}
	}
	if( m_RelatingBuildingElement )
	{
		std::vector<weak_ptr<IfcRelCoversBldgElements> >& HasCoverings_inverse = m_RelatingBuildingElement->m_HasCoverings_inverse;
		for( auto it_HasCoverings_inverse = HasCoverings_inverse.begin(); it_HasCoverings_inverse != HasCoverings_inverse.end(); )
		{
			shared_ptr<IfcRelCoversBldgElements> self_candidate( *it_HasCoverings_inverse );
			if( self_candidate.get() == this )
			{
				it_HasCoverings_inverse= HasCoverings_inverse.erase( it_HasCoverings_inverse );
			}
			else
			{
				++it_HasCoverings_inverse;
			}
		}
	}
}
