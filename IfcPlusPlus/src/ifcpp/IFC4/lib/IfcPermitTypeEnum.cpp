/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcPermitTypeEnum.h"

// TYPE IfcPermitTypeEnum = ENUMERATION OF	(ACCESS	,BUILDING	,WORK	,USERDEFINED	,NOTDEFINED);
IfcPermitTypeEnum::IfcPermitTypeEnum() {}
IfcPermitTypeEnum::~IfcPermitTypeEnum() {}
shared_ptr<IfcPPObject> IfcPermitTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPermitTypeEnum> copy_self( new IfcPermitTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPermitTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPERMITTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_ACCESS:	stream << ".ACCESS."; break;
		case ENUM_BUILDING:	stream << ".BUILDING."; break;
		case ENUM_WORK:	stream << ".WORK."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPermitTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_ACCESS:	return L"ACCESS";
		case ENUM_BUILDING:	return L"BUILDING";
		case ENUM_WORK:	return L"WORK";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPermitTypeEnum> IfcPermitTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPermitTypeEnum>(); }
	shared_ptr<IfcPermitTypeEnum> type_object( new IfcPermitTypeEnum() );
	if( boost::iequals( arg, L".ACCESS." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_ACCESS;
	}
	else if( boost::iequals( arg, L".BUILDING." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_BUILDING;
	}
	else if( boost::iequals( arg, L".WORK." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_WORK;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPermitTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
