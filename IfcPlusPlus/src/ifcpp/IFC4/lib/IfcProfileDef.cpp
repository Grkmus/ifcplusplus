/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"

// ENTITY IfcProfileDef 
IfcProfileDef::IfcProfileDef() {}
IfcProfileDef::IfcProfileDef( int id ) { m_id = id; }
IfcProfileDef::~IfcProfileDef() {}
shared_ptr<IfcPPObject> IfcProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcProfileDef> copy_self( new IfcProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	return copy_self;
}
void IfcProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcProfileDef::toString() const { return L"IfcProfileDef"; }
void IfcProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcProfileDef, expecting 2, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
}
void IfcProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "ProfileType", m_ProfileType ) );
	vec_attributes.push_back( std::make_pair( "ProfileName", m_ProfileName ) );
}
void IfcProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	if( m_HasExternalReference_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasExternalReference_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasExternalReference_inverse.size(); ++i )
		{
			if( !m_HasExternalReference_inverse[i].expired() )
			{
				HasExternalReference_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcExternalReferenceRelationship>( m_HasExternalReference_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasExternalReference_inverse", HasExternalReference_inverse_vec_obj ) );
	}
	if( m_HasProperties_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> HasProperties_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_HasProperties_inverse.size(); ++i )
		{
			if( !m_HasProperties_inverse[i].expired() )
			{
				HasProperties_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcProfileProperties>( m_HasProperties_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "HasProperties_inverse", HasProperties_inverse_vec_obj ) );
	}
}
void IfcProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcProfileDef::unlinkFromInverseCounterparts()
{
}
