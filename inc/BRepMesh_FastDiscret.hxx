// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_FastDiscret_HeaderFile
#define _BRepMesh_FastDiscret_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_FastDiscret_HeaderFile
#include <Handle_BRepMesh_FastDiscret.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _BRepMesh_DataMapOfVertexInteger_HeaderFile
#include <BRepMesh_DataMapOfVertexInteger.hxx>
#endif
#ifndef _BRepMesh_DataMapOfShapePairOfPolygon_HeaderFile
#include <BRepMesh_DataMapOfShapePairOfPolygon.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRepMesh_DataMapOfIntegerPnt_HeaderFile
#include <BRepMesh_DataMapOfIntegerPnt.hxx>
#endif
#ifndef _Handle_BRepMesh_DataStructureOfDelaun_HeaderFile
#include <Handle_BRepMesh_DataStructureOfDelaun.hxx>
#endif
#ifndef _BRepMesh_DataMapOfFaceAttribute_HeaderFile
#include <BRepMesh_DataMapOfFaceAttribute.hxx>
#endif
#ifndef _TColStd_IndexedMapOfInteger_HeaderFile
#include <TColStd_IndexedMapOfInteger.hxx>
#endif
#ifndef _BRepMesh_DataMapOfIntegerListOfXY_HeaderFile
#include <BRepMesh_DataMapOfIntegerListOfXY.hxx>
#endif
#ifndef _BRepMesh_Status_HeaderFile
#include <BRepMesh_Status.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeReal_HeaderFile
#include <TopTools_DataMapOfShapeReal.hxx>
#endif
#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _BRepMesh_BaseAllocator_HeaderFile
#include <BRepMesh_BaseAllocator.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_BRepAdaptor_HSurface_HeaderFile
#include <Handle_BRepAdaptor_HSurface.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _BRepMesh_ClassifierPtr_HeaderFile
#include <BRepMesh_ClassifierPtr.hxx>
#endif
#ifndef _BRepMesh_MapOfInteger_HeaderFile
#include <BRepMesh_MapOfInteger.hxx>
#endif
#ifndef _Handle_BRepMesh_FaceAttribute_HeaderFile
#include <Handle_BRepMesh_FaceAttribute.hxx>
#endif
class BRepMesh_DataStructureOfDelaun;
class Bnd_Box;
class TopoDS_Shape;
class TopoDS_Face;
class TopTools_IndexedDataMapOfShapeListOfShape;
class TopoDS_Edge;
class BRepAdaptor_HSurface;
class Geom2d_Curve;
class TopoDS_Vertex;
class BRepMesh_ListOfVertex;
class TColStd_ListOfInteger;
class BRepMesh_Delaun;
class BRepMesh_Triangle;
class BRepMesh_Edge;
class BRepMesh_Vertex;
class gp_Pnt;
class BRepMesh_FaceAttribute;
class TopTools_DataMapOfShapeReal;


//! Algorithm  to mesh  a shape  with  respect of  the <br>
//!          frontier the deflection  and by option the  shared <br>
//!          components. <br>
class BRepMesh_FastDiscret : public MMgt_TShared {

public:

  
  Standard_EXPORT   BRepMesh_FastDiscret(const Standard_Real defle,const Standard_Real angle,const Bnd_Box& B,const Standard_Boolean withShare = Standard_True,const Standard_Boolean inshape = Standard_False,const Standard_Boolean relative = Standard_False,const Standard_Boolean shapetrigu = Standard_False);
  //! if the  boolean    <relative>   is  True,    the <br>
//!          deflection used   for the polygonalisation   of <br>
//!          each edge will be <defle> * Size of Edge. <br>
//!          the deflection used for the faces will be the maximum <br>
//!          deflection of their edges. <br>
//! <br>
//!          if <shapetrigu> is True, the triangulation, if exists <br>
//!          with a correct deflection, can be used to re-triangulate <br>
//!          the shape. <br>
//! <br>
//!          if   <inshape>   is   True, the      calculated <br>
//!          triangulation will be stored in the shape. <br>
  Standard_EXPORT   BRepMesh_FastDiscret(const Standard_Real defle,const TopoDS_Shape& shape,const Bnd_Box& B,const Standard_Real angle,const Standard_Boolean withShare = Standard_True,const Standard_Boolean inshape = Standard_False,const Standard_Boolean relative = Standard_False,const Standard_Boolean shapetrigu = Standard_False);
  //! Build triangulation on the whole shape <br>
  Standard_EXPORT     void Perform(const TopoDS_Shape& shape) ;
  //! Record a face for further processing. <br>
  Standard_EXPORT     void Add(const TopoDS_Face& face,const TopTools_IndexedDataMapOfShapeListOfShape& ancestor) ;
  //! Triangulate a face previously recorded for <br>
//!          processing by call to Add(). Can be executed in <br>
//!          parallel threads. <br>
  Standard_EXPORT     void Process(const TopoDS_Face& face) const;
    void operator ()(const TopoDS_Face& face) const
{
  Process(face);
}
  
  Standard_EXPORT     BRepMesh_Status CurrentFaceStatus() const;
  //! Returns computed relative deflection for edge <br>
  Standard_EXPORT   static  Standard_Real RelativeEdgeDeflection(const TopoDS_Edge& edge,const Standard_Real defle,const Standard_Real dtotale,Standard_Real& cdef) ;
  //! Returns the maximal dimension of Bnd_Box <br>
  Standard_EXPORT   static  void BoxMaxDimension(const Bnd_Box& box,Standard_Real& maxdim) ;
  
//! Request algorithm to launch in multiple threads <br>
//! to improve performance (should be supported by plugin). <br>
  Standard_EXPORT     void SetParallel(const Standard_Boolean theInParallel) ;
  
//! Returns the multi-threading usage flag. <br>
  Standard_EXPORT     Standard_Boolean IsParallel() const;
  //! Gives the number of built triangles. <br>
  Standard_EXPORT     Standard_Integer NbTriangles() const;
  //! Gives the triangle of <Index>. <br>
  Standard_EXPORT    const BRepMesh_Triangle& Triangle(const Standard_Integer Index) const;
  //! Gives the number of built Edges <br>
  Standard_EXPORT     Standard_Integer NbEdges() const;
  //! Gives the edge of index <Index>. <br>
  Standard_EXPORT    const BRepMesh_Edge& Edge(const Standard_Integer Index) const;
  //! Gives the number of built Vertices. <br>
  Standard_EXPORT     Standard_Integer NbVertices() const;
  //! Gives the vertex of <Index>. <br>
  Standard_EXPORT    const BRepMesh_Vertex& Vertex(const Standard_Integer Index) const;
  //! Gives the location3d of the vertex of <Index>. <br>
  Standard_EXPORT    const gp_Pnt& Pnt(const Standard_Integer Index) const;
  //! Gives the list of indices of the vertices <br>
  Standard_EXPORT     void VerticesOfDomain(BRepMesh_MapOfInteger& Indices) const;
  //! Gives the list of indices of the edges <br>
        void EdgesOfDomain(BRepMesh_MapOfInteger& Indices) const;
  //! Gives the list of indices of the triangles <br>
        void TrianglesOfDomain(BRepMesh_MapOfInteger& Indices) const;
  //! Gives the  number of different  location in 3d <br>
//!          space.  It  is  different    of the number  of <br>
//!          vertices if there is more than one surface. <br>
//!          Even for one surface, the number can be different <br>
//!          if an edge is shared. <br>
        Standard_Integer NbPoint3d() const;
  //! Gives the 3d space location of the vertex <Index>. <br>
       const gp_Pnt& Point3d(const Standard_Integer Index) const;
  //! returns the deflection value. <br>
        Standard_Real GetDeflection() const;
  //! returns the deflection value. <br>
        Standard_Real GetAngle() const;
  
        Standard_Boolean WithShare() const;
  
        Standard_Boolean InShape() const;
  
        Standard_Boolean ShapeTrigu() const;
  //! returns the face deflection value. <br>
  Standard_EXPORT     Standard_Boolean GetFaceAttribute(const TopoDS_Face& face,Handle(BRepMesh_FaceAttribute)& fattrib) const;
  //! remove face attribute as useless to free locate memory <br>
  Standard_EXPORT     void RemoveFaceAttribute(const TopoDS_Face& face) ;
  
       const TopTools_DataMapOfShapeReal& GetMapOfDefEdge() const;




  DEFINE_STANDARD_RTTI(BRepMesh_FastDiscret)

protected:




private: 

  
  Standard_EXPORT     void Add(const TopoDS_Edge& edge,const TopoDS_Face& face,const Handle(BRepAdaptor_HSurface)& S,const Handle(Geom2d_Curve)& C,const TopTools_IndexedDataMapOfShapeListOfShape& ancestor,const Standard_Real defedge,const Standard_Real first,const Standard_Real last) ;
  
  Standard_EXPORT     void Add(const TopoDS_Vertex& theVert,const TopoDS_Face& face,const Handle(BRepAdaptor_HSurface)& S) ;
  
  Standard_EXPORT     Standard_Boolean Update(const TopoDS_Edge& Edge,const TopoDS_Face& Face,const Handle(Geom2d_Curve)& C,const Standard_Real defedge,const Standard_Real first,const Standard_Real last) ;
  
  Standard_EXPORT     void InternalVertices(const Handle(BRepAdaptor_HSurface)& caro,BRepMesh_ListOfVertex& inter,const Standard_Real defedge,const BRepMesh_ClassifierPtr& classifier) ;
  
  Standard_EXPORT     Standard_Real Control(const Handle(BRepAdaptor_HSurface)& caro,const Standard_Real defface,BRepMesh_ListOfVertex& inter,TColStd_ListOfInteger& badTri,TColStd_ListOfInteger& nulTri,BRepMesh_Delaun& trigu,const Standard_Boolean isfirst) ;
  
  Standard_EXPORT     void AddInShape(const TopoDS_Face& face,const Standard_Real defedge) ;

Standard_Real myAngle;
Standard_Real myDeflection;
Standard_Real myDtotale;
Standard_Boolean myWithShare;
Standard_Boolean myInParallel;
BRepMesh_DataMapOfVertexInteger myVertices;
BRepMesh_DataMapOfShapePairOfPolygon myEdges;
BRepMesh_DataMapOfShapePairOfPolygon myInternaledges;
Standard_Integer myNbLocat;
BRepMesh_DataMapOfIntegerPnt myLocation3d;
Handle_BRepMesh_DataStructureOfDelaun myStructure;
BRepMesh_DataMapOfFaceAttribute myMapattrib;
TColStd_IndexedMapOfInteger myVemap;
BRepMesh_DataMapOfIntegerListOfXY myLocation2d;
Standard_Boolean myRelative;
Standard_Boolean myShapetrigu;
Standard_Boolean myInshape;
BRepMesh_Status myFacestate;
TopTools_DataMapOfShapeReal myMapdefle;
TopTools_ListOfShape myNottriangulated;
BRepMesh_BaseAllocator myAllocator;


};


#include <BRepMesh_FastDiscret.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
