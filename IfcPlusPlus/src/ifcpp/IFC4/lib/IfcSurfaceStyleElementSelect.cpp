/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <map>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/IFC4/include/IfcSurfaceStyleElementSelect.h"

// TYPE IfcSurfaceStyleElementSelect = SELECT	(IfcExternallyDefinedSurfaceStyle	,IfcSurfaceStyleLighting	,IfcSurfaceStyleRefraction	,IfcSurfaceStyleShading	,IfcSurfaceStyleWithTextures);
shared_ptr<IfcSurfaceStyleElementSelect> IfcSurfaceStyleElementSelect::createObjectFromSTEP( const std::wstring& arg, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	if( arg.size() == 0 ){ return shared_ptr<IfcSurfaceStyleElementSelect>(); }
	if( arg.compare(L"$")==0 )
	{
		return shared_ptr<IfcSurfaceStyleElementSelect>();
	}
	if( arg.compare(L"*")==0 )
	{
		return shared_ptr<IfcSurfaceStyleElementSelect>();
	}
	shared_ptr<IfcSurfaceStyleElementSelect> result_object;
	readSelectType( arg, result_object, map );
	return result_object;
}
