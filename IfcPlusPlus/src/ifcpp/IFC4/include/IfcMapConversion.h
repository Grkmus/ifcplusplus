/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#pragma once
#include <vector>
#include <map>
#include <sstream>
#include <string>
#include "ifcpp/model/IfcPPBasicTypes.h"
#include "ifcpp/model/IfcPPObject.h"
#include "ifcpp/model/IfcPPGlobal.h"
#include "IfcCoordinateOperation.h"
class IFCPP_EXPORT IfcLengthMeasure;
class IFCPP_EXPORT IfcReal;
//ENTITY
class IFCPP_EXPORT IfcMapConversion : public IfcCoordinateOperation
{ 
public:
	IfcMapConversion();
	IfcMapConversion( int id );
	~IfcMapConversion();
	virtual shared_ptr<IfcPPObject> getDeepCopy( IfcPPCopyOptions& options );
	virtual void getStepLine( std::stringstream& stream ) const;
	virtual void getStepParameter( std::stringstream& stream, bool is_select_type = false ) const;
	virtual void readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map );
	virtual void setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self );
	virtual size_t getNumAttributes() { return 8; }
	virtual void getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes );
	virtual void unlinkFromInverseCounterparts();
	virtual const char* className() const { return "IfcMapConversion"; }
	virtual const std::wstring toString() const;


	// IfcCoordinateOperation -----------------------------------------------------------
	// attributes:
	//  shared_ptr<IfcCoordinateReferenceSystemSelect>	m_SourceCRS;
	//  shared_ptr<IfcCoordinateReferenceSystem>		m_TargetCRS;

	// IfcMapConversion -----------------------------------------------------------
	// attributes:
	shared_ptr<IfcLengthMeasure>					m_Eastings;
	shared_ptr<IfcLengthMeasure>					m_Northings;
	shared_ptr<IfcLengthMeasure>					m_OrthogonalHeight;
	shared_ptr<IfcReal>								m_XAxisAbscissa;			//optional
	shared_ptr<IfcReal>								m_XAxisOrdinate;			//optional
	shared_ptr<IfcReal>								m_Scale;					//optional
};

