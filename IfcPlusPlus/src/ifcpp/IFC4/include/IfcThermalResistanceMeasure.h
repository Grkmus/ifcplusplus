/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcDerivedMeasureValue.h"

// TYPE IfcThermalResistanceMeasure = REAL;
class IFCPP_EXPORT IfcThermalResistanceMeasure : public IfcDerivedMeasureValue
{
public:
	IfcThermalResistanceMeasure();
	IfcThermalResistanceMeasure( double value );
	~IfcThermalResistanceMeasure();
	virtual const char* className() const { return "IfcThermalResistanceMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcThermalResistanceMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

