/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcCartesianTransformationOperator3D.h"
#include "ifcpp/IFC4/include/IfcDirection.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCartesianTransformationOperator3D 
IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D() {}
IfcCartesianTransformationOperator3D::IfcCartesianTransformationOperator3D( int id ) { m_id = id; }
IfcCartesianTransformationOperator3D::~IfcCartesianTransformationOperator3D() {}
shared_ptr<IfcPPObject> IfcCartesianTransformationOperator3D::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCartesianTransformationOperator3D> copy_self( new IfcCartesianTransformationOperator3D() );
	if( m_Axis1 ) { copy_self->m_Axis1 = dynamic_pointer_cast<IfcDirection>( m_Axis1->getDeepCopy(options) ); }
	if( m_Axis2 ) { copy_self->m_Axis2 = dynamic_pointer_cast<IfcDirection>( m_Axis2->getDeepCopy(options) ); }
	if( m_LocalOrigin ) { copy_self->m_LocalOrigin = dynamic_pointer_cast<IfcCartesianPoint>( m_LocalOrigin->getDeepCopy(options) ); }
	if( m_Scale ) { copy_self->m_Scale = dynamic_pointer_cast<IfcReal>( m_Scale->getDeepCopy(options) ); }
	if( m_Axis3 ) { copy_self->m_Axis3 = dynamic_pointer_cast<IfcDirection>( m_Axis3->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCartesianTransformationOperator3D::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCARTESIANTRANSFORMATIONOPERATOR3D" << "(";
	if( m_Axis1 ) { stream << "#" << m_Axis1->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Axis2 ) { stream << "#" << m_Axis2->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_LocalOrigin ) { stream << "#" << m_LocalOrigin->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Scale ) { m_Scale->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Axis3 ) { stream << "#" << m_Axis3->m_id; } else { stream << "$"; }
	stream << ");";
}
void IfcCartesianTransformationOperator3D::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcCartesianTransformationOperator3D::toString() const { return L"IfcCartesianTransformationOperator3D"; }
void IfcCartesianTransformationOperator3D::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianTransformationOperator3D, expecting 5, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Axis1, map );
	readEntityReference( args[1], m_Axis2, map );
	readEntityReference( args[2], m_LocalOrigin, map );
	m_Scale = IfcReal::createObjectFromSTEP( args[3], map );
	readEntityReference( args[4], m_Axis3, map );
}
void IfcCartesianTransformationOperator3D::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcCartesianTransformationOperator::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Axis3", m_Axis3 ) );
}
void IfcCartesianTransformationOperator3D::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcCartesianTransformationOperator::getAttributesInverse( vec_attributes_inverse );
}
void IfcCartesianTransformationOperator3D::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcCartesianTransformationOperator::setInverseCounterparts( ptr_self_entity );
}
void IfcCartesianTransformationOperator3D::unlinkFromInverseCounterparts()
{
	IfcCartesianTransformationOperator::unlinkFromInverseCounterparts();
}
