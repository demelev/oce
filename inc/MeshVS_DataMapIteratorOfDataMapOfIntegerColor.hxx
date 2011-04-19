// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_HeaderFile
#define _MeshVS_DataMapIteratorOfDataMapOfIntegerColor_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerColor.hxx>
#endif
class Standard_NoSuchObject;
class Quantity_Color;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapOfIntegerColor;
class MeshVS_DataMapNodeOfDataMapOfIntegerColor;



class MeshVS_DataMapIteratorOfDataMapOfIntegerColor  : public TCollection_BasicMapIterator {
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

  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfIntegerColor();
  
  Standard_EXPORT   MeshVS_DataMapIteratorOfDataMapOfIntegerColor(const MeshVS_DataMapOfIntegerColor& aMap);
  
  Standard_EXPORT     void Initialize(const MeshVS_DataMapOfIntegerColor& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const Quantity_Color& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif