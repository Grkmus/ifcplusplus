/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */

#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"

// TYPE IfcSIUnitName = ENUMERATION OF	(AMPERE	,BECQUEREL	,CANDELA	,COULOMB	,CUBIC_METRE	,DEGREE_CELSIUS	,FARAD	,GRAM	,GRAY	,HENRY	,HERTZ	,JOULE	,KELVIN	,LUMEN	,LUX	,METRE	,MOLE	,NEWTON	,OHM	,PASCAL	,RADIAN	,SECOND	,SIEMENS	,SIEVERT	,SQUARE_METRE	,STERADIAN	,TESLA	,VOLT	,WATT	,WEBER);
class IFCPP_EXPORT IfcSIUnitName : virtual public IfcPPObject
{
public:
	enum IfcSIUnitNameEnum
	{
		ENUM_AMPERE,
		ENUM_BECQUEREL,
		ENUM_CANDELA,
		ENUM_COULOMB,
		ENUM_CUBIC_METRE,
		ENUM_DEGREE_CELSIUS,
		ENUM_FARAD,
		ENUM_GRAM,
		ENUM_GRAY,
		ENUM_HENRY,
		ENUM_HERTZ,
		ENUM_JOULE,
		ENUM_KELVIN,
		ENUM_LUMEN,
		ENUM_LUX,
		ENUM_METRE,
		ENUM_MOLE,
		ENUM_NEWTON,
		ENUM_OHM,
		ENUM_PASCAL,
		ENUM_RADIAN,
		ENUM_SECOND,
		ENUM_SIEMENS,
		ENUM_SIEVERT,
		ENUM_SQUARE_METRE,
		ENUM_STERADIAN,
		ENUM_TESLA,
		ENUM_VOLT,
		ENUM_WATT,
		ENUM_WEBER
	};

	IfcSIUnitName();
	IfcSIUnitName( IfcSIUnitNameEnum e ) { m_enum = e; }
	~IfcSIUnitName();
	virtual const char* className() const { return "IfcSIUnitName"; }
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual const std::wstring toString() const;
	static shared_ptr<IfcSIUnitName> createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	IfcSIUnitNameEnum m_enum;
};

