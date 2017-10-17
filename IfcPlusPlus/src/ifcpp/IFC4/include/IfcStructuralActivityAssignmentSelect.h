/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <iostream>
#include <sstream>
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"

// TYPE IfcStructuralActivityAssignmentSelect = SELECT	(IfcElement	,IfcStructuralItem);
class IFCPP_EXPORT IfcStructuralActivityAssignmentSelect : virtual public IfcPPObject
{
public:
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options ) = 0;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const = 0;
	virtual const std::wstring toString() const = 0;
	static shared_ptr<IfcStructuralActivityAssignmentSelect> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
};

