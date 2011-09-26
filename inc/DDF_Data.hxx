// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _DDF_Data_HeaderFile
#define _DDF_Data_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_DDF_Data_HeaderFile
#include <Handle_DDF_Data.hxx>
#endif

#ifndef _Handle_TDF_Data_HeaderFile
#include <Handle_TDF_Data.hxx>
#endif
#ifndef _Draw_Drawable3D_HeaderFile
#include <Draw_Drawable3D.hxx>
#endif
#ifndef _Handle_Draw_Drawable3D_HeaderFile
#include <Handle_Draw_Drawable3D.hxx>
#endif
#ifndef _Standard_OStream_HeaderFile
#include <Standard_OStream.hxx>
#endif
class TDF_Data;
class Draw_Display;
class Draw_Drawable3D;
class Draw_Interpretor;


//! Encapsulates a data framework in a drawable object <br>
class DDF_Data : public Draw_Drawable3D {

public:

  
  Standard_EXPORT   DDF_Data(const Handle(TDF_Data)& aDF);
  
  Standard_EXPORT     void DrawOn(Draw_Display& dis) const;
  
  Standard_EXPORT   virtual  Handle_Draw_Drawable3D Copy() const;
  
  Standard_EXPORT   virtual  void Dump(Standard_OStream& S) const;
  
  Standard_EXPORT     void DataFramework(const Handle(TDF_Data)& aDF) ;
  
  Standard_EXPORT     Handle_TDF_Data DataFramework() const;
  
  Standard_EXPORT   virtual  void Whatis(Draw_Interpretor& I) const;




  DEFINE_STANDARD_RTTI(DDF_Data)

protected:




private: 


Handle_TDF_Data myDF;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif