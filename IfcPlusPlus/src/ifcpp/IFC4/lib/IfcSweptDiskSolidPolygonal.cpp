/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCurve.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSweptDiskSolidPolygonal.h"

// ENTITY IfcSweptDiskSolidPolygonal 
IfcSweptDiskSolidPolygonal::IfcSweptDiskSolidPolygonal() {}
IfcSweptDiskSolidPolygonal::IfcSweptDiskSolidPolygonal( int id ) { m_id = id; }
IfcSweptDiskSolidPolygonal::~IfcSweptDiskSolidPolygonal() {}
shared_ptr<IfcPPObject> IfcSweptDiskSolidPolygonal::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSweptDiskSolidPolygonal> copy_self( new IfcSweptDiskSolidPolygonal() );
	if( m_Directrix ) { copy_self->m_Directrix = dynamic_pointer_cast<IfcCurve>( m_Directrix->getDeepCopy(options) ); }
	if( m_Radius ) { copy_self->m_Radius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Radius->getDeepCopy(options) ); }
	if( m_InnerRadius ) { copy_self->m_InnerRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_InnerRadius->getDeepCopy(options) ); }
	if( m_StartParam ) { copy_self->m_StartParam = dynamic_pointer_cast<IfcParameterValue>( m_StartParam->getDeepCopy(options) ); }
	if( m_EndParam ) { copy_self->m_EndParam = dynamic_pointer_cast<IfcParameterValue>( m_EndParam->getDeepCopy(options) ); }
	if( m_FilletRadius ) { copy_self->m_FilletRadius = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FilletRadius->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSweptDiskSolidPolygonal::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCSWEPTDISKSOLIDPOLYGONAL" << "(";
	if( m_Directrix ) { stream << "#" << m_Directrix->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_Radius ) { m_Radius->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_InnerRadius ) { m_InnerRadius->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_StartParam ) { m_StartParam->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_EndParam ) { m_EndParam->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_FilletRadius ) { m_FilletRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcSweptDiskSolidPolygonal::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcSweptDiskSolidPolygonal::toString() const { return L"IfcSweptDiskSolidPolygonal"; }
void IfcSweptDiskSolidPolygonal::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSweptDiskSolidPolygonal, expecting 6, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Directrix, map );
	m_Radius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[1], map );
	m_InnerRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[2], map );
	m_StartParam = IfcParameterValue::createObjectFromSTEP( args[3], map );
	m_EndParam = IfcParameterValue::createObjectFromSTEP( args[4], map );
	m_FilletRadius = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map );
}
void IfcSweptDiskSolidPolygonal::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSweptDiskSolid::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "FilletRadius", m_FilletRadius ) );
}
void IfcSweptDiskSolidPolygonal::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSweptDiskSolid::getAttributesInverse( vec_attributes_inverse );
}
void IfcSweptDiskSolidPolygonal::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSweptDiskSolid::setInverseCounterparts( ptr_self_entity );
}
void IfcSweptDiskSolidPolygonal::unlinkFromInverseCounterparts()
{
	IfcSweptDiskSolid::unlinkFromInverseCounterparts();
}
