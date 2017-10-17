/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcCsgSelect.h"
#include "ifcpp/IFC4/include/IfcCsgSolid.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcCsgSolid 
IfcCsgSolid::IfcCsgSolid() {}
IfcCsgSolid::IfcCsgSolid( int id ) { m_id = id; }
IfcCsgSolid::~IfcCsgSolid() {}
shared_ptr<IfcPPObject> IfcCsgSolid::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcCsgSolid> copy_self( new IfcCsgSolid() );
	if( m_TreeRootExpression ) { copy_self->m_TreeRootExpression = dynamic_pointer_cast<IfcCsgSelect>( m_TreeRootExpression->getDeepCopy(options) ); }
	return copy_self;
}
void IfcCsgSolid::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCCSGSOLID" << "(";
	if( m_TreeRootExpression ) { m_TreeRootExpression->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcCsgSolid::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcCsgSolid::toString() const { return L"IfcCsgSolid"; }
void IfcCsgSolid::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcCsgSolid, expecting 1, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_TreeRootExpression = IfcCsgSelect::createObjectFromSTEP( args[0], map );
}
void IfcCsgSolid::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSolidModel::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "TreeRootExpression", m_TreeRootExpression ) );
}
void IfcCsgSolid::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSolidModel::getAttributesInverse( vec_attributes_inverse );
}
void IfcCsgSolid::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSolidModel::setInverseCounterparts( ptr_self_entity );
}
void IfcCsgSolid::unlinkFromInverseCounterparts()
{
	IfcSolidModel::unlinkFromInverseCounterparts();
}
