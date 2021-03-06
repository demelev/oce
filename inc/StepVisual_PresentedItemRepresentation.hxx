// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_PresentedItemRepresentation_HeaderFile
#define _StepVisual_PresentedItemRepresentation_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepVisual_PresentedItemRepresentation.hxx>

#include <StepVisual_PresentationRepresentationSelect.hxx>
#include <Handle_StepVisual_PresentedItem.hxx>
#include <MMgt_TShared.hxx>
class StepVisual_PresentedItem;
class StepVisual_PresentationRepresentationSelect;


//! Added from StepVisual Rev2 to Rev4
class StepVisual_PresentedItemRepresentation : public MMgt_TShared
{

public:

  
  Standard_EXPORT StepVisual_PresentedItemRepresentation();
  
  Standard_EXPORT   void Init (const StepVisual_PresentationRepresentationSelect& aPresentation, const Handle(StepVisual_PresentedItem)& aItem) ;
  
  Standard_EXPORT   void SetPresentation (const StepVisual_PresentationRepresentationSelect& aPresentation) ;
  
  Standard_EXPORT   StepVisual_PresentationRepresentationSelect Presentation()  const;
  
  Standard_EXPORT   void SetItem (const Handle(StepVisual_PresentedItem)& aItem) ;
  
  Standard_EXPORT   Handle(StepVisual_PresentedItem) Item()  const;




  DEFINE_STANDARD_RTTI(StepVisual_PresentedItemRepresentation)

protected:




private: 


  StepVisual_PresentationRepresentationSelect thePresentation;
  Handle(StepVisual_PresentedItem) theItem;


};







#endif // _StepVisual_PresentedItemRepresentation_HeaderFile
