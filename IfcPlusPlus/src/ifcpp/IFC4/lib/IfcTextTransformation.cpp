/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcTextTransformation.h"

// TYPE IfcTextTransformation = STRING;
IfcTextTransformation::IfcTextTransformation() {}
IfcTextTransformation::IfcTextTransformation( std::wstring value ) { m_value = value; }
IfcTextTransformation::~IfcTextTransformation() {}
shared_ptr<IfcPPObject> IfcTextTransformation::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTextTransformation> copy_self( new IfcTextTransformation() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcTextTransformation::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTEXTTRANSFORMATION("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcTextTransformation::toString() const
{
	return m_value;
}
shared_ptr<IfcTextTransformation> IfcTextTransformation::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcTextTransformation>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcTextTransformation>(); }
	shared_ptr<IfcTextTransformation> type_object( new IfcTextTransformation() );
	readString( arg, type_object->m_value );
	return type_object;
}
