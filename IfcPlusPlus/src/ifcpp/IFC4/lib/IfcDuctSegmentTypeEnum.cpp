/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDuctSegmentTypeEnum.h"

// TYPE IfcDuctSegmentTypeEnum = ENUMERATION OF	(RIGIDSEGMENT	,FLEXIBLESEGMENT	,USERDEFINED	,NOTDEFINED);
IfcDuctSegmentTypeEnum::IfcDuctSegmentTypeEnum() {}
IfcDuctSegmentTypeEnum::~IfcDuctSegmentTypeEnum() {}
shared_ptr<IfcPPObject> IfcDuctSegmentTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDuctSegmentTypeEnum> copy_self( new IfcDuctSegmentTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDuctSegmentTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDUCTSEGMENTTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_RIGIDSEGMENT:	stream << ".RIGIDSEGMENT."; break;
		case ENUM_FLEXIBLESEGMENT:	stream << ".FLEXIBLESEGMENT."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDuctSegmentTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_RIGIDSEGMENT:	return L"RIGIDSEGMENT";
		case ENUM_FLEXIBLESEGMENT:	return L"FLEXIBLESEGMENT";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDuctSegmentTypeEnum> IfcDuctSegmentTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDuctSegmentTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDuctSegmentTypeEnum>(); }
	shared_ptr<IfcDuctSegmentTypeEnum> type_object( new IfcDuctSegmentTypeEnum() );
	if( boost::iequals( arg, L".RIGIDSEGMENT." ) )
	{
		type_object->m_enum = IfcDuctSegmentTypeEnum::ENUM_RIGIDSEGMENT;
	}
	else if( boost::iequals( arg, L".FLEXIBLESEGMENT." ) )
	{
		type_object->m_enum = IfcDuctSegmentTypeEnum::ENUM_FLEXIBLESEGMENT;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDuctSegmentTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDuctSegmentTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
