/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcHeatFluxDensityMeasure.h"

// TYPE IfcHeatFluxDensityMeasure = REAL;
IfcHeatFluxDensityMeasure::IfcHeatFluxDensityMeasure() {}
IfcHeatFluxDensityMeasure::IfcHeatFluxDensityMeasure( double value ) { m_value = value; }
IfcHeatFluxDensityMeasure::~IfcHeatFluxDensityMeasure() {}
shared_ptr<IfcPPObject> IfcHeatFluxDensityMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcHeatFluxDensityMeasure> copy_self( new IfcHeatFluxDensityMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcHeatFluxDensityMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCHEATFLUXDENSITYMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcHeatFluxDensityMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcHeatFluxDensityMeasure> IfcHeatFluxDensityMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcHeatFluxDensityMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcHeatFluxDensityMeasure>(); }
	shared_ptr<IfcHeatFluxDensityMeasure> type_object( new IfcHeatFluxDensityMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
