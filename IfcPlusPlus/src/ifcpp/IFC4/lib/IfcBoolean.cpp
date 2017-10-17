/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcModulusOfRotationalSubgradeReactionSelect.h"
#include "ifcpp/IFC4/include/IfcModulusOfSubgradeReactionSelect.h"
#include "ifcpp/IFC4/include/IfcModulusOfTranslationalSubgradeReactionSelect.h"
#include "ifcpp/IFC4/include/IfcRotationalStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcTranslationalStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcWarpingStiffnessSelect.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"

// TYPE IfcBoolean = BOOLEAN;
IfcBoolean::IfcBoolean() {}
IfcBoolean::IfcBoolean( bool value ) { m_value = value; }
IfcBoolean::~IfcBoolean() {}
shared_ptr<IfcPPObject> IfcBoolean::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcBoolean> copy_self( new IfcBoolean() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcBoolean::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBOOLEAN("; }
	if( m_value == false )
	{
		stream << ".F.";
	}
	else if( m_value == true )
	{
		stream << ".T.";
	}
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBoolean::toString() const
{
	if( m_value == false )
	{
		return L"false";
	}
	else if( m_value == true )
	{
		return L"true";
	}
	return L"";
}
shared_ptr<IfcBoolean> IfcBoolean::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBoolean>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBoolean>(); }
	shared_ptr<IfcBoolean> type_object( new IfcBoolean() );
	readBool( arg, type_object->m_value );
	return type_object;
}
