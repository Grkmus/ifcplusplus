/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCartesianPoint 
IfcCartesianPoint::IfcCartesianPoint() {}
IfcCartesianPoint::IfcCartesianPoint( int id ) { m_id = id; }
IfcCartesianPoint::~IfcCartesianPoint() {}
shared_ptr<IfcPPObject> IfcCartesianPoint::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCartesianPoint> copy_self( new IfcCartesianPoint() );
	for( size_t ii=0; ii<m_Coordinates.size(); ++ii )
	{
		auto item_ii = m_Coordinates[ii];
		if( item_ii )
		{
			copy_self->m_Coordinates.push_back( dynamic_pointer_cast<IfcLengthMeasure>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcCartesianPoint::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCARTESIANPOINT" << "(";
	writeNumericTypeList( stream, m_Coordinates );
	stream << ");";
}
void IfcCartesianPoint::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcCartesianPoint::toString() const { return L"IfcCartesianPoint"; }
void IfcCartesianPoint::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCartesianPoint, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readTypeOfRealList( args[0], m_Coordinates );
}
void IfcCartesianPoint::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPoint::getAttributes( vec_attributes );
	if( m_Coordinates.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Coordinates_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Coordinates.begin(), m_Coordinates.end(), std::back_inserter( Coordinates_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Coordinates", Coordinates_vec_object ) );
	}
}
void IfcCartesianPoint::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPoint::getAttributesInverse( vec_attributes_inverse );
}
void IfcCartesianPoint::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPoint::setInverseCounterparts( ptr_self_entity );
}
void IfcCartesianPoint::unlinkFromInverseCounterparts()
{
	IfcPoint::unlinkFromInverseCounterparts();
}
