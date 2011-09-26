// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_SiUnitAndMassUnit_HeaderFile
#define _StepBasic_SiUnitAndMassUnit_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_SiUnitAndMassUnit_HeaderFile
#include <Handle_StepBasic_SiUnitAndMassUnit.hxx>
#endif

#ifndef _Handle_StepBasic_MassUnit_HeaderFile
#include <Handle_StepBasic_MassUnit.hxx>
#endif
#ifndef _StepBasic_SiUnit_HeaderFile
#include <StepBasic_SiUnit.hxx>
#endif
#ifndef _Handle_StepBasic_DimensionalExponents_HeaderFile
#include <Handle_StepBasic_DimensionalExponents.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _StepBasic_SiPrefix_HeaderFile
#include <StepBasic_SiPrefix.hxx>
#endif
#ifndef _StepBasic_SiUnitName_HeaderFile
#include <StepBasic_SiUnitName.hxx>
#endif
class StepBasic_MassUnit;
class StepBasic_DimensionalExponents;



class StepBasic_SiUnitAndMassUnit : public StepBasic_SiUnit {

public:

  //! Returns a SiUnitAndMassUnit <br>
  Standard_EXPORT   StepBasic_SiUnitAndMassUnit();
  
  Standard_EXPORT   virtual  void Init(const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT   virtual  void Init(const Standard_Boolean hasAprefix,const StepBasic_SiPrefix aPrefix,const StepBasic_SiUnitName aName) ;
  
  Standard_EXPORT     void SetMassUnit(const Handle(StepBasic_MassUnit)& aMassUnit) ;
  
  Standard_EXPORT     Handle_StepBasic_MassUnit MassUnit() const;




  DEFINE_STANDARD_RTTI(StepBasic_SiUnitAndMassUnit)

protected:




private: 


Handle_StepBasic_MassUnit massUnit;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif