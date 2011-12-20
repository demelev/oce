// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_TransferMapOfProcessForTransient_HeaderFile
#define _Transfer_TransferMapOfProcessForTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Transfer_Binder_HeaderFile
#include <Handle_Transfer_Binder.hxx>
#endif
#ifndef _Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient_HeaderFile
#include <Handle_Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_Transient;
class Transfer_Binder;
class TColStd_MapTransientHasher;
class Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient;



class Transfer_TransferMapOfProcessForTransient  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   Transfer_TransferMapOfProcessForTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Transfer_TransferMapOfProcessForTransient& Assign(const Transfer_TransferMapOfProcessForTransient& Other) ;
    Transfer_TransferMapOfProcessForTransient& operator =(const Transfer_TransferMapOfProcessForTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Transfer_TransferMapOfProcessForTransient()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const Handle(Standard_Transient)& K,const Handle(Transfer_Binder)& I) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const Handle(Standard_Transient)& K,const Handle(Transfer_Binder)& T) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT    const Handle_Standard_Transient& FindKey(const Standard_Integer I) const;
  
  Standard_EXPORT    const Handle_Transfer_Binder& FindFromIndex(const Standard_Integer I) const;
   const Handle_Transfer_Binder& operator ()(const Standard_Integer I) const
{
  return FindFromIndex(I);
}
  
  Standard_EXPORT     Handle_Transfer_Binder& ChangeFromIndex(const Standard_Integer I) ;
    Handle_Transfer_Binder& operator ()(const Standard_Integer I) 
{
  return ChangeFromIndex(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT    const Handle_Transfer_Binder& FindFromKey(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT     Handle_Transfer_Binder& ChangeFromKey(const Handle(Standard_Transient)& K) ;
  
  Standard_EXPORT     Standard_Address FindFromKey1(const Handle(Standard_Transient)& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFromKey1(const Handle(Standard_Transient)& K) ;





protected:





private:

  
  Standard_EXPORT   Transfer_TransferMapOfProcessForTransient(const Transfer_TransferMapOfProcessForTransient& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
