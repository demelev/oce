// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_EdgeDivide_HeaderFile
#define _ShapeUpgrade_EdgeDivide_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_EdgeDivide_HeaderFile
#include <Handle_ShapeUpgrade_EdgeDivide.hxx>
#endif

#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfReal_HeaderFile
#include <Handle_TColStd_HSequenceOfReal.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_SplitCurve3d_HeaderFile
#include <Handle_ShapeUpgrade_SplitCurve3d.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_SplitCurve2d_HeaderFile
#include <Handle_ShapeUpgrade_SplitCurve2d.hxx>
#endif
#ifndef _ShapeUpgrade_Tool_HeaderFile
#include <ShapeUpgrade_Tool.hxx>
#endif
class TColStd_HSequenceOfReal;
class ShapeUpgrade_SplitCurve3d;
class ShapeUpgrade_SplitCurve2d;
class TopoDS_Face;
class TopoDS_Edge;



class ShapeUpgrade_EdgeDivide : public ShapeUpgrade_Tool {

public:

  //! Empty constructor <br>
  Standard_EXPORT   ShapeUpgrade_EdgeDivide();
  
  Standard_EXPORT     void Clear() ;
  //! Sets supporting surface by face <br>
        void SetFace(const TopoDS_Face& F) ;
  
  Standard_EXPORT   virtual  Standard_Boolean Compute(const TopoDS_Edge& E) ;
  
        Standard_Boolean HasCurve2d() const;
  
        Standard_Boolean HasCurve3d() const;
  
        Handle_TColStd_HSequenceOfReal Knots2d() const;
  
        Handle_TColStd_HSequenceOfReal Knots3d() const;
  //! Sets the tool for splitting pcurves. <br>
  Standard_EXPORT     void SetSplitCurve2dTool(const Handle(ShapeUpgrade_SplitCurve2d)& splitCurve2dTool) ;
  //! Sets the tool for splitting 3D curves. <br>
  Standard_EXPORT     void SetSplitCurve3dTool(const Handle(ShapeUpgrade_SplitCurve3d)& splitCurve3dTool) ;
  //! Returns the tool for splitting pcurves. <br>
  Standard_EXPORT   virtual  Handle_ShapeUpgrade_SplitCurve2d GetSplitCurve2dTool() const;
  //! Returns the tool for splitting 3D curves. <br>
  Standard_EXPORT   virtual  Handle_ShapeUpgrade_SplitCurve3d GetSplitCurve3dTool() const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_EdgeDivide)

protected:


TopoDS_Face myFace;
Standard_Boolean myHasCurve2d;
Standard_Boolean myHasCurve3d;
Handle_TColStd_HSequenceOfReal myKnots2d;
Handle_TColStd_HSequenceOfReal myKnots3d;


private: 


Handle_ShapeUpgrade_SplitCurve3d mySplitCurve3dTool;
Handle_ShapeUpgrade_SplitCurve2d mySplitCurve2dTool;


};


#include <ShapeUpgrade_EdgeDivide.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif