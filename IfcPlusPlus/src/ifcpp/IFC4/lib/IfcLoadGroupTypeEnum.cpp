/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcLoadGroupTypeEnum.h"

// TYPE IfcLoadGroupTypeEnum = ENUMERATION OF	(LOAD_GROUP	,LOAD_CASE	,LOAD_COMBINATION	,USERDEFINED	,NOTDEFINED);
IfcLoadGroupTypeEnum::IfcLoadGroupTypeEnum() {}
IfcLoadGroupTypeEnum::~IfcLoadGroupTypeEnum() {}
shared_ptr<IfcPPObject> IfcLoadGroupTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLoadGroupTypeEnum> copy_self( new IfcLoadGroupTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcLoadGroupTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLOADGROUPTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_LOAD_GROUP:	stream << ".LOAD_GROUP."; break;
		case ENUM_LOAD_CASE:	stream << ".LOAD_CASE."; break;
		case ENUM_LOAD_COMBINATION:	stream << ".LOAD_COMBINATION."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLoadGroupTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_LOAD_GROUP:	return L"LOAD_GROUP";
		case ENUM_LOAD_CASE:	return L"LOAD_CASE";
		case ENUM_LOAD_COMBINATION:	return L"LOAD_COMBINATION";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcLoadGroupTypeEnum> IfcLoadGroupTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLoadGroupTypeEnum>(); }
	shared_ptr<IfcLoadGroupTypeEnum> type_object( new IfcLoadGroupTypeEnum() );
	if( boost::iequals( arg, L".LOAD_GROUP." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_GROUP;
	}
	else if( boost::iequals( arg, L".LOAD_CASE." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_CASE;
	}
	else if( boost::iequals( arg, L".LOAD_COMBINATION." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_LOAD_COMBINATION;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcLoadGroupTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
