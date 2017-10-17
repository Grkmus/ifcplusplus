/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcBoundingBox.h"
#include "ifcpp/IFC4/include/IfcBoxedHalfSpace.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSurface.h"

// ENTITY IfcBoxedHalfSpace 
IfcBoxedHalfSpace::IfcBoxedHalfSpace() {}
IfcBoxedHalfSpace::IfcBoxedHalfSpace( int id ) { m_id = id; }
IfcBoxedHalfSpace::~IfcBoxedHalfSpace() {}
shared_ptr<IfcPPObject> IfcBoxedHalfSpace::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcBoxedHalfSpace> copy_self( new IfcBoxedHalfSpace() );
	if( m_BaseSurface ) { copy_self->m_BaseSurface = dynamic_pointer_cast<IfcSurface>( m_BaseSurface->getDeepCopy(options) ); }
	if( m_AgreementFlag ) { copy_self->m_AgreementFlag = dynamic_pointer_cast<IfcBoolean>( m_AgreementFlag->getDeepCopy(options) ); }
	if( m_Enclosure ) { copy_self->m_Enclosure = dynamic_pointer_cast<IfcBoundingBox>( m_Enclosure->getDeepCopy(options) ); }
	return copy_self;
}
void IfcBoxedHalfSpace::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCBOXEDHALFSPACE" << "(";
	if( m_BaseSurface ) { stream << "#" << m_BaseSurface->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_AgreementFlag ) { m_AgreementFlag->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Enclosure ) { stream << "#" << m_Enclosure->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcBoxedHalfSpace::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcBoxedHalfSpace::toString() const { return L"IfcBoxedHalfSpace"; }
void IfcBoxedHalfSpace::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcBoxedHalfSpace, expecting 3, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_BaseSurface, map );
	m_AgreementFlag = IfcBoolean::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Enclosure, map );
}
void IfcBoxedHalfSpace::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcHalfSpaceSolid::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Enclosure", m_Enclosure ) );
}
void IfcBoxedHalfSpace::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcHalfSpaceSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcBoxedHalfSpace::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcHalfSpaceSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcBoxedHalfSpace::unlinkFromInverseCounterparts()
{
	IfcHalfSpaceSolid::unlinkFromInverseCounterparts();
}
