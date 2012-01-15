// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepFEA_HSequenceOfElementRepresentation_HeaderFile
#define _StepFEA_HSequenceOfElementRepresentation_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepFEA_HSequenceOfElementRepresentation_HeaderFile
#include <Handle_StepFEA_HSequenceOfElementRepresentation.hxx>
#endif

#ifndef _StepFEA_SequenceOfElementRepresentation_HeaderFile
#include <StepFEA_SequenceOfElementRepresentation.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
#ifndef _Handle_StepFEA_ElementRepresentation_HeaderFile
#include <Handle_StepFEA_ElementRepresentation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class StepFEA_ElementRepresentation;
class StepFEA_SequenceOfElementRepresentation;



class StepFEA_HSequenceOfElementRepresentation : public MMgt_TShared {

public:

  
      StepFEA_HSequenceOfElementRepresentation();
  
        Standard_Boolean IsEmpty() const;
  
        Standard_Integer Length() const;
  
  Standard_EXPORT     void Clear() ;
  
  Standard_EXPORT     void Append(const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT     void Append(const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT     void Prepend(const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT     void Reverse() ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT     void InsertBefore(const Standard_Integer anIndex,const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer anIndex,const Handle(StepFEA_HSequenceOfElementRepresentation)& aSequence) ;
  
  Standard_EXPORT     void Exchange(const Standard_Integer anIndex,const Standard_Integer anOtherIndex) ;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation Split(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void SetValue(const Standard_Integer anIndex,const Handle(StepFEA_ElementRepresentation)& anItem) ;
  
  Standard_EXPORT    const Handle_StepFEA_ElementRepresentation& Value(const Standard_Integer anIndex) const;
  
  Standard_EXPORT     Handle_StepFEA_ElementRepresentation& ChangeValue(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer anIndex) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer fromIndex,const Standard_Integer toIndex) ;
  
       const StepFEA_SequenceOfElementRepresentation& Sequence() const;
  
        StepFEA_SequenceOfElementRepresentation& ChangeSequence() ;
  
  Standard_EXPORT     Handle_StepFEA_HSequenceOfElementRepresentation ShallowCopy() const;




  DEFINE_STANDARD_RTTI(StepFEA_HSequenceOfElementRepresentation)

protected:




private: 


StepFEA_SequenceOfElementRepresentation mySequence;


};

#define Item Handle_StepFEA_ElementRepresentation
#define Item_hxx <StepFEA_ElementRepresentation.hxx>
#define TheSequence StepFEA_SequenceOfElementRepresentation
#define TheSequence_hxx <StepFEA_SequenceOfElementRepresentation.hxx>
#define TCollection_HSequence StepFEA_HSequenceOfElementRepresentation
#define TCollection_HSequence_hxx <StepFEA_HSequenceOfElementRepresentation.hxx>
#define Handle_TCollection_HSequence Handle_StepFEA_HSequenceOfElementRepresentation
#define TCollection_HSequence_Type_() StepFEA_HSequenceOfElementRepresentation_Type_()

#include <TCollection_HSequence.lxx>

#undef Item
#undef Item_hxx
#undef TheSequence
#undef TheSequence_hxx
#undef TCollection_HSequence
#undef TCollection_HSequence_hxx
#undef Handle_TCollection_HSequence
#undef TCollection_HSequence_Type_


// other Inline functions and methods (like "C++: function call" methods)
inline Handle_StepFEA_HSequenceOfElementRepresentation ShallowCopy(const Handle_StepFEA_HSequenceOfElementRepresentation& me) {
 return me->ShallowCopy();
}



#endif