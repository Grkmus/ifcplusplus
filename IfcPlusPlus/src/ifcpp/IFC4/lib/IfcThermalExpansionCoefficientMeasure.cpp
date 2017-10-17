/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#include <sstream>
#include <limits>
#include <map>
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/IFC4/include/IfcDerivedMeasureValue.h"
#include "ifcpp/IFC4/include/IfcThermalExpansionCoefficientMeasure.h"

// TYPE IfcThermalExpansionCoefficientMeasure = REAL;
IfcThermalExpansionCoefficientMeasure::IfcThermalExpansionCoefficientMeasure() {}
IfcThermalExpansionCoefficientMeasure::IfcThermalExpansionCoefficientMeasure( double value ) { m_value = value; }
IfcThermalExpansionCoefficientMeasure::~IfcThermalExpansionCoefficientMeasure() {}
shared_ptr<IfcPPObject> IfcThermalExpansionCoefficientMeasure::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcThermalExpansionCoefficientMeasure> copy_self( new IfcThermalExpansionCoefficientMeasure() );
	copy_self->m_value = m_value;
	return copy_self;
}
void IfcThermalExpansionCoefficientMeasure::getStepParameter( std::stringstream& stream, bool is_select_type ) const
{
	if( is_select_type ) { stream << "IFCTHERMALEXPANSIONCOEFFICIENTMEASURE("; }
	stream << m_value;
	if( is_select_type ) { stream << ")"; }
}
const std::wstring IfcThermalExpansionCoefficientMeasure::toString() const
{
	std::wstringstream strs;
	strs << m_value;
	return strs.str();
}
shared_ptr<IfcThermalExpansionCoefficientMeasure> IfcThermalExpansionCoefficientMeasure::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.compare( L"$" ) == 0 ) { return shared_ptr<IfcThermalExpansionCoefficientMeasure>(); }
	else if( arg.compare( L"*" ) == 0 ) { return shared_ptr<IfcThermalExpansionCoefficientMeasure>(); }
	shared_ptr<IfcThermalExpansionCoefficientMeasure> type_object( new IfcThermalExpansionCoefficientMeasure() );
	readReal( arg, type_object->m_value );
	return type_object;
}
