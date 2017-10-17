/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcBoxAlignment.h"

// TYPE IfcBoxAlignment = IfcLabel;
IfcBoxAlignment::IfcBoxAlignment() {}
IfcBoxAlignment::~IfcBoxAlignment() {}
shared_ptr<IfcPPObject> IfcBoxAlignment::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcBoxAlignment> copy_self( new IfcBoxAlignment() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcBoxAlignment::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCBOXALIGNMENT("; }
	stream << "'" << encodeStepString( m_value ) << "'";
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcBoxAlignment::toString() const
{
	return m_value;
}
shared_ptr<IfcBoxAlignment> IfcBoxAlignment::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcBoxAlignment>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcBoxAlignment>(); }
	shared_ptr<IfcBoxAlignment> type_object( new IfcBoxAlignment() );
	readString( arg, type_object->m_value );
	return type_object;
}
