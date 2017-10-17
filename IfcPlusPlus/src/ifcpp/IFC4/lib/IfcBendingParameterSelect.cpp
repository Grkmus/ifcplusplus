/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcBendingParameterSelect.h"

// TYPE IfcBendingParameterSelect = SELECT	(IfcLengthMeasure	,IfcPlaneAngleMeasure);
shared_ptr<IfcBendingParameterSelect> IfcBendingParameterSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcBendingParameterSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcBendingParameterSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcBendingParameterSelect>();
	}
	shared_ptr<IfcBendingParameterSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
