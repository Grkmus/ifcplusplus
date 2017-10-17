/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcLuminousFluxMeasure.h"

// TYPE IfcLuminousFluxMeasure = REAL;
IfcLuminousFluxMeasure::IfcLuminousFluxMeasure() {}
IfcLuminousFluxMeasure::IfcLuminousFluxMeasure( double value ) { m_value = value; }
IfcLuminousFluxMeasure::~IfcLuminousFluxMeasure() {}
shared_ptr<IfcPPObject> IfcLuminousFluxMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcLuminousFluxMeasure> copy_self( new IfcLuminousFluxMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcLuminousFluxMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCLUMINOUSFLUXMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcLuminousFluxMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcLuminousFluxMeasure> IfcLuminousFluxMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcLuminousFluxMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcLuminousFluxMeasure>(); }
	shared_ptr<IfcLuminousFluxMeasure> type_object( new IfcLuminousFluxMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
