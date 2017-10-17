/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcMeasureValue.h"

// TYPE IfcLuminousIntensityMeasure = REAL;
class IFCPP_EXPORT IfcLuminousIntensityMeasure : public IfcMeasureValue
{
public:
	IfcLuminousIntensityMeasure();
	IfcLuminousIntensityMeasure( double value );
	~IfcLuminousIntensityMeasure();
	virtual const char* className() const { return "IfcLuminousIntensityMeasure"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcLuminousIntensityMeasure> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	double m_value;
};

