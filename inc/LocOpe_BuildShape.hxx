// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_BuildShape_HeaderFile
#define _LocOpe_BuildShape_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
class TopTools_ListOfShape;
class TopoDS_Shape;



class LocOpe_BuildShape  {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
      LocOpe_BuildShape();
  //! Builds shape(s) from  the list <L>.  Uses only the <br>
//!          faces of <L>. <br>
      LocOpe_BuildShape(const TopTools_ListOfShape& L);
  //! Builds shape(s) from  the list <L>.  Uses only the <br>
//!          faces of <L>. <br>
  Standard_EXPORT     void Perform(const TopTools_ListOfShape& L) ;
  
       const TopoDS_Shape& Shape() const;





protected:





private:



TopoDS_Shape myRes;


};


#include <LocOpe_BuildShape.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif