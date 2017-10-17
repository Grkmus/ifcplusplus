/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcSimpleValue.h"
#include "ifcpp/IFC4/include/IfcText.h"

// TYPE IfcText = STRING;
IfcText::IfcText() {}
IfcText::IfcText( std::wstring value ) { m_value = value; }
IfcText::~IfcText() {}
shared_ptr<IfcPPObject> IfcText::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcText> copy_self( new IfcText() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcText::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEXT("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcText::toString() const
{
	return m_value;
}
shared_ptr<IfcText> IfcText::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcText>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcText>(); }
	shared_ptr<IfcText> type_object( new IfcText() );
	readString( arg, type_object->m_value );
	return type_object;
}
