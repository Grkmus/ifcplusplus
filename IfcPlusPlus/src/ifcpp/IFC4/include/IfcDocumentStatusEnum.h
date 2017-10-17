/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcDocumentStatusEnum = ENUMERATION OF	(DRAFT	,FINALDRAFT	,FINAL	,REVISION	,NOTDEFINED);
class IFCPP_EXPORT IfcDocumentStatusEnum : virtual public IfcPPObject
{
public:
	enum IfcDocumentStatusEnumEnum
	{
		ENUM_DRAFT,
		ENUM_FINALDRAFT,
		ENUM_FINAL,
		ENUM_REVISION,
		ENUM_NOTDEFINED
	};

	IfcDocumentStatusEnum();
	IfcDocumentStatusEnum( IfcDocumentStatusEnumEnum e ) { m_enum = e; }
	~IfcDocumentStatusEnum();
	virtual const char* className() const { return "IfcDocumentStatusEnum"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcDocumentStatusEnum> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcDocumentStatusEnumEnum m_enum;
};

