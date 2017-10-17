/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcPileTypeEnum.h"

// TYPE IfcPileTypeEnum = ENUMERATION OF	(BORED	,DRIVEN	,JETGROUTING	,COHESION	,FRICTION	,SUPPORT	,USERDEFINED	,NOTDEFINED);
IfcPileTypeEnum::IfcPileTypeEnum() {}
IfcPileTypeEnum::~IfcPileTypeEnum() {}
shared_ptr<IfcPPObject> IfcPileTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPileTypeEnum> copy_self( new IfcPileTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcPileTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCPILETYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BORED:	stream << ".BORED."; break;
		case ENUM_DRIVEN:	stream << ".DRIVEN."; break;
		case ENUM_JETGROUTING:	stream << ".JETGROUTING."; break;
		case ENUM_COHESION:	stream << ".COHESION."; break;
		case ENUM_FRICTION:	stream << ".FRICTION."; break;
		case ENUM_SUPPORT:	stream << ".SUPPORT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcPileTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BORED:	return L"BORED";
		case ENUM_DRIVEN:	return L"DRIVEN";
		case ENUM_JETGROUTING:	return L"JETGROUTING";
		case ENUM_COHESION:	return L"COHESION";
		case ENUM_FRICTION:	return L"FRICTION";
		case ENUM_SUPPORT:	return L"SUPPORT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcPileTypeEnum> IfcPileTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcPileTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcPileTypeEnum>(); }
	shared_ptr<IfcPileTypeEnum> type_object( new IfcPileTypeEnum() );
	if( boost::iequals( arg, L".BORED." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_BORED;
	}
	else if( boost::iequals( arg, L".DRIVEN." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_DRIVEN;
	}
	else if( boost::iequals( arg, L".JETGROUTING." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_JETGROUTING;
	}
	else if( boost::iequals( arg, L".COHESION." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_COHESION;
	}
	else if( boost::iequals( arg, L".FRICTION." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_FRICTION;
	}
	else if( boost::iequals( arg, L".SUPPORT." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_SUPPORT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcPileTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
