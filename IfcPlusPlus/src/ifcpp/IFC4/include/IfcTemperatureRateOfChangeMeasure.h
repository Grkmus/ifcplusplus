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

// TYPE IfcTemperatureRateOfChangeMeasure = REAL;
class IFCPP_EXPORT IfcTemperatureRateOfChangeMeasure : public IfcDerivedMeasureValue
{
public:
	IfcTemperatureRateOfChangeMeasure();
	IfcTemperatureRateOfChangeMeasure( double value );
	~IfcTemperatureRateOfChangeMeasure();
	virtual const char* className() const { return "IfcTemperatureRateOfChangeMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTemperatureRateOfChangeMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

