/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDayInMonthNumber = INTEGER;
class IFCPP_EXPORT IfcDayInMonthNumber : public IfcPPObject
{
public:
	IfcDayInMonthNumber();
	IfcDayInMonthNumber( int value );
	~IfcDayInMonthNumber();
	virtual const char* className() const { return "IfcDayInMonthNumber"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDayInMonthNumber> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	int m_value;
};

