/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcTrimmingPreference = ENUMERATION OF	(CARTESIAN	,PARAMETER	,UNSPECIFIED);
class IFCPP_EXPORT IfcTrimmingPreference : virtual public IfcPPObject
{
public:
	enum IfcTrimmingPreferenceEnum
	{
		ENUM_CARTESIAN,
		ENUM_PARAMETER,
		ENUM_UNSPECIFIED
	};

	IfcTrimmingPreference();
	IfcTrimmingPreference( IfcTrimmingPreferenceEnum e ) { m_enum = e; }
	~IfcTrimmingPreference();
	virtual const char* className() const { return "IfcTrimmingPreference"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcTrimmingPreference> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcTrimmingPreferenceEnum m_enum;
};

