/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcElectricDistributionBoardTypeEnum.h"

// TYPE IfcElectricDistributionBoardTypeEnum = ENUMERATION OF	(CONSUMERUNIT	,DISTRIBUTIONBOARD	,MOTORCONTROLCENTRE	,SWITCHBOARD	,USERDEFINED	,NOTDEFINED);
IfcElectricDistributionBoardTypeEnum::IfcElectricDistributionBoardTypeEnum() {}
IfcElectricDistributionBoardTypeEnum::~IfcElectricDistributionBoardTypeEnum() {}
shared_ptr<IfcPPObject> IfcElectricDistributionBoardTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcElectricDistributionBoardTypeEnum> copy_self( new IfcElectricDistributionBoardTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcElectricDistributionBoardTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCELECTRICDISTRIBUTIONBOARDTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_CONSUMERUNIT:	stream << ".CONSUMERUNIT."; break;
		case ENUM_DISTRIBUTIONBOARD:	stream << ".DISTRIBUTIONBOARD."; break;
		case ENUM_MOTORCONTROLCENTRE:	stream << ".MOTORCONTROLCENTRE."; break;
		case ENUM_SWITCHBOARD:	stream << ".SWITCHBOARD."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcElectricDistributionBoardTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_CONSUMERUNIT:	return L"CONSUMERUNIT";
		case ENUM_DISTRIBUTIONBOARD:	return L"DISTRIBUTIONBOARD";
		case ENUM_MOTORCONTROLCENTRE:	return L"MOTORCONTROLCENTRE";
		case ENUM_SWITCHBOARD:	return L"SWITCHBOARD";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcElectricDistributionBoardTypeEnum> IfcElectricDistributionBoardTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcElectricDistributionBoardTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcElectricDistributionBoardTypeEnum>(); }
	shared_ptr<IfcElectricDistributionBoardTypeEnum> type_object( new IfcElectricDistributionBoardTypeEnum() );
	if( boost::iequals( arg, L".CONSUMERUNIT." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_CONSUMERUNIT;
	}
	else if( boost::iequals( arg, L".DISTRIBUTIONBOARD." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_DISTRIBUTIONBOARD;
	}
	else if( boost::iequals( arg, L".MOTORCONTROLCENTRE." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_MOTORCONTROLCENTRE;
	}
	else if( boost::iequals( arg, L".SWITCHBOARD." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_SWITCHBOARD;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcElectricDistributionBoardTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
