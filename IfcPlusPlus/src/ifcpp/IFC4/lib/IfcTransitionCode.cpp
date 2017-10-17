/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTransitionCode.h"

// TYPE IfcTransitionCode = ENUMERATION OF	(DISCONTINUOUS	,CONTINUOUS	,CONTSAMEGRADIENT	,CONTSAMEGRADIENTSAMECURVATURE);
IfcTransitionCode::IfcTransitionCode() {}
IfcTransitionCode::~IfcTransitionCode() {}
shared_ptr<IfcPPObject> IfcTransitionCode::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTransitionCode> copy_self( new IfcTransitionCode() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcTransitionCode::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTRANSITIONCODE("; }
	switch( m_enum )
	{
		case ENUM_DISCONTINUOUS:	stream << ".DISCONTINUOUS."; break;
		case ENUM_CONTINUOUS:	stream << ".CONTINUOUS."; break;
		case ENUM_CONTSAMEGRADIENT:	stream << ".CONTSAMEGRADIENT."; break;
		case ENUM_CONTSAMEGRADIENTSAMECURVATURE:	stream << ".CONTSAMEGRADIENTSAMECURVATURE."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTransitionCode::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_DISCONTINUOUS:	return L"DISCONTINUOUS";
		case ENUM_CONTINUOUS:	return L"CONTINUOUS";
		case ENUM_CONTSAMEGRADIENT:	return L"CONTSAMEGRADIENT";
		case ENUM_CONTSAMEGRADIENTSAMECURVATURE:	return L"CONTSAMEGRADIENTSAMECURVATURE";
	}
	return L"";
}
shared_ptr<IfcTransitionCode> IfcTransitionCode::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTransitionCode>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTransitionCode>(); }
	shared_ptr<IfcTransitionCode> type_object( new IfcTransitionCode() );
	if( boost::iequals( arg, L".DISCONTINUOUS." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_DISCONTINUOUS;
	}
	else if( boost::iequals( arg, L".CONTINUOUS." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTINUOUS;
	}
	else if( boost::iequals( arg, L".CONTSAMEGRADIENT." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTSAMEGRADIENT;
	}
	else if( boost::iequals( arg, L".CONTSAMEGRADIENTSAMECURVATURE." ) )
	{
		type_object->m_enum = IfcTransitionCode::ENUM_CONTSAMEGRADIENTSAMECURVATURE;
	}
	return type_object;
}
