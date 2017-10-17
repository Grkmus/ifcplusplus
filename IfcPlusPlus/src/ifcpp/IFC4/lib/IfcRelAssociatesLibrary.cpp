/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDefinitionSelect.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcLibraryInformation.h"
#include "ifcpp/IFC4/include/IfcLibraryReference.h"
#include "ifcpp/IFC4/include/IfcLibrarySelect.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAssociatesLibrary.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcRelAssociatesLibrary 
IfcRelAssociatesLibrary::IfcRelAssociatesLibrary() {}
IfcRelAssociatesLibrary::IfcRelAssociatesLibrary( int id ) { m_id = id; }
IfcRelAssociatesLibrary::~IfcRelAssociatesLibrary() {}
shared_ptr<IfcPPObject> IfcRelAssociatesLibrary::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRelAssociatesLibrary> copy_self( new IfcRelAssociatesLibrary() );
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
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.push_back( dynamic_pointer_cast<IfcDefinitionSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatingLibrary ) { copy_self->m_RelatingLibrary = dynamic_pointer_cast<IfcLibrarySelect>( m_RelatingLibrary->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelAssociatesLibrary::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCRELASSOCIATESLIBRARY" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcDefinitionSelect>& type_object = m_RelatedObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingLibrary ) { m_RelatingLibrary->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcRelAssociatesLibrary::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcRelAssociatesLibrary::toString() const { return L"IfcRelAssociatesLibrary"; }
void IfcRelAssociatesLibrary::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssociatesLibrary, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readSelectList( args[4], m_RelatedObjects, map );
	m_RelatingLibrary = IfcLibrarySelect::createObjectFromSTEP( args[5], map );
}
void IfcRelAssociatesLibrary::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelAssociates::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingLibrary", m_RelatingLibrary ) );
}
void IfcRelAssociatesLibrary::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelAssociates::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAssociatesLibrary::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelAssociates::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssociatesLibrary> ptr_self = dynamic_pointer_cast<IfcRelAssociatesLibrary>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcRelAssociatesLibrary::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcLibraryInformation>  RelatingLibrary_IfcLibraryInformation = dynamic_pointer_cast<IfcLibraryInformation>( m_RelatingLibrary );
	if( RelatingLibrary_IfcLibraryInformation )
	{
		RelatingLibrary_IfcLibraryInformation->m_LibraryInfoForObjects_inverse.push_back( ptr_self );
	}
	shared_ptr<IfcLibraryReference>  RelatingLibrary_IfcLibraryReference = dynamic_pointer_cast<IfcLibraryReference>( m_RelatingLibrary );
	if( RelatingLibrary_IfcLibraryReference )
	{
		RelatingLibrary_IfcLibraryReference->m_LibraryRefForObjects_inverse.push_back( ptr_self );
	}
}
void IfcRelAssociatesLibrary::unlinkFromInverseCounterparts()
{
	IfcRelAssociates::unlinkFromInverseCounterparts();
	shared_ptr<IfcLibraryInformation>  RelatingLibrary_IfcLibraryInformation = dynamic_pointer_cast<IfcLibraryInformation>( m_RelatingLibrary );
	if( RelatingLibrary_IfcLibraryInformation )
	{
		std::vector<weak_ptr<IfcRelAssociatesLibrary> >& LibraryInfoForObjects_inverse = RelatingLibrary_IfcLibraryInformation->m_LibraryInfoForObjects_inverse;
		for( auto it_LibraryInfoForObjects_inverse = LibraryInfoForObjects_inverse.begin(); it_LibraryInfoForObjects_inverse != LibraryInfoForObjects_inverse.end(); )
		{
			shared_ptr<IfcRelAssociatesLibrary> self_candidate( *it_LibraryInfoForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_LibraryInfoForObjects_inverse= LibraryInfoForObjects_inverse.erase( it_LibraryInfoForObjects_inverse );
			}
			else
			{
				++it_LibraryInfoForObjects_inverse;
			}
		}
	}
	shared_ptr<IfcLibraryReference>  RelatingLibrary_IfcLibraryReference = dynamic_pointer_cast<IfcLibraryReference>( m_RelatingLibrary );
	if( RelatingLibrary_IfcLibraryReference )
	{
		std::vector<weak_ptr<IfcRelAssociatesLibrary> >& LibraryRefForObjects_inverse = RelatingLibrary_IfcLibraryReference->m_LibraryRefForObjects_inverse;
		for( auto it_LibraryRefForObjects_inverse = LibraryRefForObjects_inverse.begin(); it_LibraryRefForObjects_inverse != LibraryRefForObjects_inverse.end(); )
		{
			shared_ptr<IfcRelAssociatesLibrary> self_candidate( *it_LibraryRefForObjects_inverse );
			if( self_candidate.get() == this )
			{
				it_LibraryRefForObjects_inverse= LibraryRefForObjects_inverse.erase( it_LibraryRefForObjects_inverse );
			}
			else
			{
				++it_LibraryRefForObjects_inverse;
			}
		}
	}
}
