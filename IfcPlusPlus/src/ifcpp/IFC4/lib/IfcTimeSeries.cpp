/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDataOriginEnum.h"
#include "ifcpp/IFC4/include/IfcDateTime.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTimeSeries.h"
#include "ifcpp/IFC4/include/IfcTimeSeriesDataTypeEnum.h"
#include "ifcpp/IFC4/include/IfcUnit.h"

// ENTITY IfcTimeSeries 
IfcTimeSeries::IfcTimeSeries() {}
IfcTimeSeries::IfcTimeSeries( int id ) { m_id = id; }
IfcTimeSeries::~IfcTimeSeries() {}
shared_ptr<IfcPPObject> IfcTimeSeries::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTimeSeries> copy_self( new IfcTimeSeries() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_StartTime ) { copy_self->m_StartTime = dynamic_pointer_cast<IfcDateTime>( m_StartTime->getDeepCopy(options) ); }
	if( m_EndTime ) { copy_self->m_EndTime = dynamic_pointer_cast<IfcDateTime>( m_EndTime->getDeepCopy(options) ); }
	if( m_TimeSeriesDataType ) { copy_self->m_TimeSeriesDataType = dynamic_pointer_cast<IfcTimeSeriesDataTypeEnum>( m_TimeSeriesDataType->getDeepCopy(options) ); }
	if( m_DataOrigin ) { copy_self->m_DataOrigin = dynamic_pointer_cast<IfcDataOriginEnum>( m_DataOrigin->getDeepCopy(options) ); }
	if( m_UserDefinedDataOrigin ) { copy_self->m_UserDefinedDataOrigin = dynamic_pointer_cast<IfcLabel>( m_UserDefinedDataOrigin->getDeepCopy(options) ); }
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcUnit>( m_Unit->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTimeSeries::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCTIMESERIES" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_StartTime ) { m_StartTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_EndTime ) { m_EndTime->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TimeSeriesDataType ) { m_TimeSeriesDataType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_DataOrigin ) { m_DataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedDataOrigin ) { m_UserDefinedDataOrigin->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Unit ) { m_Unit->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcTimeSeries::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcTimeSeries::toString() const { return L"IfcTimeSeries"; }
void IfcTimeSeries::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 8 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTimeSeries, expecting 8, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_StartTime = IfcDateTime::createObjectFromSTEP( args[2], map );
	m_EndTime = IfcDateTime::createObjectFromSTEP( args[3], map );
	m_TimeSeriesDataType = IfcTimeSeriesDataTypeEnum::createObjectFromSTEP( args[4], map );
	m_DataOrigin = IfcDataOriginEnum::createObjectFromSTEP( args[5], map );
	m_UserDefinedDataOrigin = IfcLabel::createObjectFromSTEP( args[6], map );
	m_Unit = IfcUnit::createObjectFromSTEP( args[7], map );
}
void IfcTimeSeries::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
	vec_attributes.push_back( std::make_pair( "Description", m_Description ) );
	vec_attributes.push_back( std::make_pair( "StartTime", m_StartTime ) );
	vec_attributes.push_back( std::make_pair( "EndTime", m_EndTime ) );
	vec_attributes.push_back( std::make_pair( "TimeSeriesDataType", m_TimeSeriesDataType ) );
	vec_attributes.push_back( std::make_pair( "DataOrigin", m_DataOrigin ) );
	vec_attributes.push_back( std::make_pair( "UserDefinedDataOrigin", m_UserDefinedDataOrigin ) );
	vec_attributes.push_back( std::make_pair( "Unit", m_Unit ) );
}
void IfcTimeSeries::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
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
}
void IfcTimeSeries::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcTimeSeries::unlinkFromInverseCounterparts()
{
}
