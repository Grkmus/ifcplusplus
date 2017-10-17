/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcPresentationStyleSelect.h"

// TYPE IfcNullStyle = ENUMERATION OF	(NULL);
class IFCPP_EXPORT IfcNullStyle : public IfcPresentationStyleSelect
{
public:
	enum IfcNullStyleEnum
	{
		ENUM_ENUM_NULL
	};

	IfcNullStyle();
	IfcNullStyle( IfcNullStyleEnum e ) { m_enum = e; }
	~IfcNullStyle();
	virtual const char* className() const { return "IfcNullStyle"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcNullStyle> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcNullStyleEnum m_enum;
};

