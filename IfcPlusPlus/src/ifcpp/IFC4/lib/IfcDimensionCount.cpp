/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDimensionCount.h"

// TYPE IfcDimensionCount = INTEGER;
IfcDimensionCount::IfcDimensionCount() {}
IfcDimensionCount::IfcDimensionCount( int value ) { m_value = value; }
IfcDimensionCount::~IfcDimensionCount() {}
shared_ptr<IfcPPObject> IfcDimensionCount::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDimensionCount> copy_self( new IfcDimensionCount() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcDimensionCount::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCDIMENSIONCOUNT("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcDimensionCount::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcDimensionCount> IfcDimensionCount::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcDimensionCount>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcDimensionCount>(); }
	shared_ptr<IfcDimensionCount> type_object( new IfcDimensionCount() );
	readInt( arg, type_object->m_value );
	return type_object;
}
