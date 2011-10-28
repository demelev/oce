// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_GroupAssignment_HeaderFile
#define _StepBasic_GroupAssignment_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_GroupAssignment_HeaderFile
#include <Handle_StepBasic_GroupAssignment.hxx>
#endif

#ifndef _Handle_StepBasic_Group_HeaderFile
#include <Handle_StepBasic_Group.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_Group;


//! Representation of STEP entity GroupAssignment <br>
class StepBasic_GroupAssignment : public MMgt_TShared {

public:

  //! Empty constructor <br>
  Standard_EXPORT   StepBasic_GroupAssignment();
  //! Initialize all fields (own and inherited) <br>
  Standard_EXPORT     void Init(const Handle(StepBasic_Group)& aAssignedGroup) ;
  //! Returns field AssignedGroup <br>
  Standard_EXPORT     Handle_StepBasic_Group AssignedGroup() const;
  //! Set field AssignedGroup <br>
  Standard_EXPORT     void SetAssignedGroup(const Handle(StepBasic_Group)& AssignedGroup) ;




  DEFINE_STANDARD_RTTI(StepBasic_GroupAssignment)

protected:




private: 


Handle_StepBasic_Group theAssignedGroup;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif