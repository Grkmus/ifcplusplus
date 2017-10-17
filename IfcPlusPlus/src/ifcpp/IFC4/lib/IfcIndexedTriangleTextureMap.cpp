/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcIndexedTriangleTextureMap.h"
#include "ifcpp/IFC4/include/IfcPositiveInteger.h"
#include "ifcpp/IFC4/include/IfcSurfaceTexture.h"
#include "ifcpp/IFC4/include/IfcTessellatedFaceSet.h"
#include "ifcpp/IFC4/include/IfcTextureVertexList.h"

// ENTITY IfcIndexedTriangleTextureMap 
IfcIndexedTriangleTextureMap::IfcIndexedTriangleTextureMap() {}
IfcIndexedTriangleTextureMap::IfcIndexedTriangleTextureMap( int id ) { m_id = id; }
IfcIndexedTriangleTextureMap::~IfcIndexedTriangleTextureMap() {}
shared_ptr<IfcPPObject> IfcIndexedTriangleTextureMap::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcIndexedTriangleTextureMap> copy_self( new IfcIndexedTriangleTextureMap() );
	for( size_t ii=0; ii<m_Maps.size(); ++ii )
	{
		auto item_ii = m_Maps[ii];
		if( item_ii )
		{
			copy_self->m_Maps.push_back( dynamic_pointer_cast<IfcSurfaceTexture>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_MappedTo ) { copy_self->m_MappedTo = dynamic_pointer_cast<IfcTessellatedFaceSet>( m_MappedTo->getDeepCopy(options) ); }
	if( m_TexCoords ) { copy_self->m_TexCoords = dynamic_pointer_cast<IfcTextureVertexList>( m_TexCoords->getDeepCopy(options) ); }
	copy_self->m_TexCoordIndex.resize( m_TexCoordIndex.size() );
	for( size_t ii=0; ii<m_TexCoordIndex.size(); ++ii )
	{
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii = m_TexCoordIndex[ii];
		std::vector<shared_ptr<IfcPositiveInteger> >& vec_ii_target = copy_self->m_TexCoordIndex[ii];
		for( size_t jj=0; jj<vec_ii.size(); ++jj )
		{
			shared_ptr<IfcPositiveInteger>& item_jj = vec_ii[jj];
			if( item_jj )
			{
				vec_ii_target.push_back( dynamic_pointer_cast<IfcPositiveInteger>( item_jj->getDeepCopy(options) ) );
			}
		}
	}
	return copy_self;
}
void IfcIndexedTriangleTextureMap::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_id << "= IFCINDEXEDTRIANGLETEXTUREMAP" << "(";
	writeEntityList( stream, m_Maps );
	stream << ",";
	if( m_MappedTo ) { stream << "#" << m_MappedTo->m_id; } else { stream << "*"; }
	stream << ",";
	if( m_TexCoords ) { stream << "#" << m_TexCoords->m_id; } else { stream << "*"; }
	stream << ",";
	stream << "("; 
	for( size_t ii = 0; ii < m_TexCoordIndex.size(); ++ii )
	{
		const std::vector<shared_ptr<IfcPositiveInteger> >&inner_vec = m_TexCoordIndex[ii];
		if( ii > 0 )
		{
			stream << "), (";
		}
		for( size_t jj = 0; jj < inner_vec.size(); ++jj )
		{
			if( jj > 0 )
			{
				stream << ", ";
			}
			const shared_ptr<IfcPositiveInteger>& type_object = inner_vec[jj];
			if( type_object )
			{
				type_object->getStepParameter( stream, false );
			}
			else
			{
				stream << "$";
			}
		}
	}
	stream << ")"; 
	stream << ");";
}
void IfcIndexedTriangleTextureMap::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_id; }
const std::wstring IfcIndexedTriangleTextureMap::toString() const { return L"IfcIndexedTriangleTextureMap"; }
void IfcIndexedTriangleTextureMap::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcIndexedTriangleTextureMap, expecting 4, having " << num_args << ". Entity ID: " << m_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReferenceList( args[0], m_Maps, map );
	readEntityReference( args[1], m_MappedTo, map );
	readEntityReference( args[2], m_TexCoords, map );
	readEntityReferenceList2D( args[3], m_TexCoordIndex, map );
}
void IfcIndexedTriangleTextureMap::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcIndexedTextureMap::getAttributes( vec_attributes );
}
void IfcIndexedTriangleTextureMap::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcIndexedTextureMap::getAttributesInverse( vec_attributes_inverse );
}
void IfcIndexedTriangleTextureMap::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcIndexedTextureMap::setInverseCounterparts( ptr_self_entity );
}
void IfcIndexedTriangleTextureMap::unlinkFromInverseCounterparts()
{
	IfcIndexedTextureMap::unlinkFromInverseCounterparts();
}
