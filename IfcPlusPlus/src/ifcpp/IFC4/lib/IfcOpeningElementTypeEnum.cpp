/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcOpeningElementTypeEnum.h"

// TYPE IfcOpeningElementTypeEnum = ENUMERATION OF	(OPENING	,RECESS	,USERDEFINED	,NOTDEFINED);
IfcOpeningElementTypeEnum::IfcOpeningElementTypeEnum() {}
IfcOpeningElementTypeEnum::~IfcOpeningElementTypeEnum() {}
shared_ptr<IfcPPObject> IfcOpeningElementTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcOpeningElementTypeEnum> copy_self( new IfcOpeningElementTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcOpeningElementTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCOPENINGELEMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_OPENING:	stream << ".OPENING."; break;
		case ENUM_RECESS:	stream << ".RECESS."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcOpeningElementTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_OPENING:	return L"OPENING";
		case ENUM_RECESS:	return L"RECESS";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcOpeningElementTypeEnum> IfcOpeningElementTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcOpeningElementTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcOpeningElementTypeEnum>(); }
	shared_ptr<IfcOpeningElementTypeEnum> type_object( new IfcOpeningElementTypeEnum() );
	if( boost::iequals( arg, L".OPENING." ) )
	{
		type_object->m_enum = IfcOpeningElementTypeEnum::ENUM_OPENING;
	}
	else if( boost::iequals( arg, L".RECESS." ) )
	{
		type_object->m_enum = IfcOpeningElementTypeEnum::ENUM_RECESS;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcOpeningElementTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcOpeningElementTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
