/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDamperTypeEnum.h"

// TYPE IfcDamperTypeEnum = ENUMERATION OF	(BACKDRAFTDAMPER	,BALANCINGDAMPER	,BLASTDAMPER	,CONTROLDAMPER	,FIREDAMPER	,FIRESMOKEDAMPER	,FUMEHOODEXHAUST	,GRAVITYDAMPER	,GRAVITYRELIEFDAMPER	,RELIEFDAMPER	,SMOKEDAMPER	,USERDEFINED	,NOTDEFINED);
IfcDamperTypeEnum::IfcDamperTypeEnum() {}
IfcDamperTypeEnum::~IfcDamperTypeEnum() {}
shared_ptr<IfcPPObject> IfcDamperTypeEnum::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDamperTypeEnum> copy_self( new IfcDamperTypeEnum() );
	copy_self->m_enum = m_enum;
	return copy_self;
}
void IfcDamperTypeEnum::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDAMPERTYPEENUM("; }
	switch( m_enum )
	{
		case ENUM_BACKDRAFTDAMPER:	stream << ".BACKDRAFTDAMPER."; break;
		case ENUM_BALANCINGDAMPER:	stream << ".BALANCINGDAMPER."; break;
		case ENUM_BLASTDAMPER:	stream << ".BLASTDAMPER."; break;
		case ENUM_CONTROLDAMPER:	stream << ".CONTROLDAMPER."; break;
		case ENUM_FIREDAMPER:	stream << ".FIREDAMPER."; break;
		case ENUM_FIRESMOKEDAMPER:	stream << ".FIRESMOKEDAMPER."; break;
		case ENUM_FUMEHOODEXHAUST:	stream << ".FUMEHOODEXHAUST."; break;
		case ENUM_GRAVITYDAMPER:	stream << ".GRAVITYDAMPER."; break;
		case ENUM_GRAVITYRELIEFDAMPER:	stream << ".GRAVITYRELIEFDAMPER."; break;
		case ENUM_RELIEFDAMPER:	stream << ".RELIEFDAMPER."; break;
		case ENUM_SMOKEDAMPER:	stream << ".SMOKEDAMPER."; break;
		case ENUM_USERDEFINED:	stream << ".USERDEFINED."; break;
		case ENUM_NOTDEFINED:	stream << ".NOTDEFINED."; break;
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDamperTypeEnum::toString() const
{
	switch( m_enum ) 
	{
		case ENUM_BACKDRAFTDAMPER:	return L"BACKDRAFTDAMPER";
		case ENUM_BALANCINGDAMPER:	return L"BALANCINGDAMPER";
		case ENUM_BLASTDAMPER:	return L"BLASTDAMPER";
		case ENUM_CONTROLDAMPER:	return L"CONTROLDAMPER";
		case ENUM_FIREDAMPER:	return L"FIREDAMPER";
		case ENUM_FIRESMOKEDAMPER:	return L"FIRESMOKEDAMPER";
		case ENUM_FUMEHOODEXHAUST:	return L"FUMEHOODEXHAUST";
		case ENUM_GRAVITYDAMPER:	return L"GRAVITYDAMPER";
		case ENUM_GRAVITYRELIEFDAMPER:	return L"GRAVITYRELIEFDAMPER";
		case ENUM_RELIEFDAMPER:	return L"RELIEFDAMPER";
		case ENUM_SMOKEDAMPER:	return L"SMOKEDAMPER";
		case ENUM_USERDEFINED:	return L"USERDEFINED";
		case ENUM_NOTDEFINED:	return L"NOTDEFINED";
	}
	return L"";
}
shared_ptr<IfcDamperTypeEnum> IfcDamperTypeEnum::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDamperTypeEnum>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDamperTypeEnum>(); }
	shared_ptr<IfcDamperTypeEnum> type_object( new IfcDamperTypeEnum() );
	if( boost::iequals( arg, L".BACKDRAFTDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BACKDRAFTDAMPER;
	}
	else if( boost::iequals( arg, L".BALANCINGDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BALANCINGDAMPER;
	}
	else if( boost::iequals( arg, L".BLASTDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_BLASTDAMPER;
	}
	else if( boost::iequals( arg, L".CONTROLDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_CONTROLDAMPER;
	}
	else if( boost::iequals( arg, L".FIREDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FIREDAMPER;
	}
	else if( boost::iequals( arg, L".FIRESMOKEDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FIRESMOKEDAMPER;
	}
	else if( boost::iequals( arg, L".FUMEHOODEXHAUST." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_FUMEHOODEXHAUST;
	}
	else if( boost::iequals( arg, L".GRAVITYDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_GRAVITYDAMPER;
	}
	else if( boost::iequals( arg, L".GRAVITYRELIEFDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_GRAVITYRELIEFDAMPER;
	}
	else if( boost::iequals( arg, L".RELIEFDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_RELIEFDAMPER;
	}
	else if( boost::iequals( arg, L".SMOKEDAMPER." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_SMOKEDAMPER;
	}
	else if( boost::iequals( arg, L".USERDEFINED." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_USERDEFINED;
	}
	else if( boost::iequals( arg, L".NOTDEFINED." ) )
	{
		type_object->m_enum = IfcDamperTypeEnum::ENUM_NOTDEFINED;
	}
	return type_object;
}
