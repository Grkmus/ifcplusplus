/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcCurveInterpolationEnum.h"

// TYPE IfcCurveInterpolationEnum = ENUMERATION OF	(LINEAR	,LOG_LINEAR	,LOG_LOG	,NOTDEFINED);
IfcCurveInterpolationEnum::IfcCurveInterpolationEnum() {}
IfcCurveInterpolationEnum::~IfcCurveInterpolationEnum() {}
shared_ptr<IfcPPObject> IfcCurveInterpolationEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCurveInterpolationEnum> copy_self( new IfcCurveInterpolationEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcCurveInterpolationEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCCURVEINTERPOLATIONENUM("; }
	switch( m_enum )
	{
		case ENUM_LINEAR:	stream << ".LINEAR."; break;
		case ENUM_LOG_LINEAR:	stream << ".LOG_LINEAR."; break;
		case ENUM_LOG_LOG:	stream << ".LOG_LOG."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcCurveInterpolationEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_LINEAR:	return L"LINEAR";
		case ENUM_LOG_LINEAR:	return L"LOG_LINEAR";
		case ENUM_LOG_LOG:	return L"LOG_LOG";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcCurveInterpolationEnum> IfcCurveInterpolationEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcCurveInterpolationEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcCurveInterpolationEnum>(); }
	shared_ptr<IfcCurveInterpolationEnum> type_object( new IfcCurveInterpolationEnum() );
	if( boost::iequals( arg, L".LINEAR." ) )
	{
		type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LINEAR;
	}
	else if( boost::iequals( arg, L".LOG_LINEAR." ) )
	{
		type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LOG_LINEAR;
	}
	else if( boost::iequals( arg, L".LOG_LOG." ) )
	{
		type_object->m_enum = IfcCurveInterpolationEnum::ENUM_LOG_LOG;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcCurveInterpolationEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
