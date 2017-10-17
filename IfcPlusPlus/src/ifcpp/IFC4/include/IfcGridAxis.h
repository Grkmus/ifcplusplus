/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
class IFCPP_EXPORT IfcLabel;
class IFCPP_EXPORT IfcCurve;
class IFCPP_EXPORT IfcBoolean;
class IFCPP_EXPORT IfcGrid;
class IFCPP_EXPORT IfcVirtualGridIntersection;
//ENTITY
class IFCPP_EXPORT IfcGridAxis : public IfcPPEntity
{ 
public:
	IfcGridAxis();
	IfcGridAxis( int id );
	~IfcGridAxis();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 3; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcGridAxis"; }
	virtual const std::wstring toString() const;


	// IfcGridAxis -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLabel>								m_AxisTag;					//optional
	shared_ptr<IfcCurve>								m_AxisCurve;
	shared_ptr<IfcBoolean>								m_SameSense;
	// inverse attributes:
	std::vector<weak_ptr<IfcGrid> >						m_PartOfW_inverse;
	std::vector<weak_ptr<IfcGrid> >						m_PartOfV_inverse;
	std::vector<weak_ptr<IfcGrid> >						m_PartOfU_inverse;
	std::vector<weak_ptr<IfcVirtualGridIntersection> >	m_HasIntersections_inverse;
};

