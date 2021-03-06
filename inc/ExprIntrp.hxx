// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_HeaderFile
#define _ExprIntrp_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Handle_ExprIntrp_Generator.hxx>
class ExprIntrp_Generator;
class TCollection_AsciiString;
class ExprIntrp_Generator;
class ExprIntrp_GenExp;
class ExprIntrp_GenFct;
class ExprIntrp_GenRel;
class ExprIntrp_Analysis;
class ExprIntrp_SequenceOfNamedFunction;
class ExprIntrp_SequenceOfNamedExpression;
class ExprIntrp_StackOfGeneralExpression;
class ExprIntrp_StackOfGeneralRelation;
class ExprIntrp_StackOfGeneralFunction;
class ExprIntrp_SequenceNodeOfSequenceOfNamedFunction;
class ExprIntrp_SequenceNodeOfSequenceOfNamedExpression;
class ExprIntrp_ListNodeOfStackOfGeneralExpression;
class ExprIntrp_ListIteratorOfStackOfGeneralExpression;
class ExprIntrp_ListNodeOfStackOfGeneralRelation;
class ExprIntrp_ListIteratorOfStackOfGeneralRelation;
class ExprIntrp_ListNodeOfStackOfGeneralFunction;
class ExprIntrp_ListIteratorOfStackOfGeneralFunction;


//! Describes an interpreter for GeneralExpressions,
//! GeneralFunctions, and GeneralRelations defined in
//! package Expr.
class ExprIntrp 
{
public:

  DEFINE_STANDARD_ALLOC





protected:





private:

  
  Standard_EXPORT static   Standard_Boolean Parse (const Handle(ExprIntrp_Generator)& gen, const TCollection_AsciiString& str) ;



friend class ExprIntrp_Generator;
friend class ExprIntrp_GenExp;
friend class ExprIntrp_GenFct;
friend class ExprIntrp_GenRel;
friend class ExprIntrp_Analysis;
friend class ExprIntrp_SequenceOfNamedFunction;
friend class ExprIntrp_SequenceOfNamedExpression;
friend class ExprIntrp_StackOfGeneralExpression;
friend class ExprIntrp_StackOfGeneralRelation;
friend class ExprIntrp_StackOfGeneralFunction;
friend class ExprIntrp_SequenceNodeOfSequenceOfNamedFunction;
friend class ExprIntrp_SequenceNodeOfSequenceOfNamedExpression;
friend class ExprIntrp_ListNodeOfStackOfGeneralExpression;
friend class ExprIntrp_ListIteratorOfStackOfGeneralExpression;
friend class ExprIntrp_ListNodeOfStackOfGeneralRelation;
friend class ExprIntrp_ListIteratorOfStackOfGeneralRelation;
friend class ExprIntrp_ListNodeOfStackOfGeneralFunction;
friend class ExprIntrp_ListIteratorOfStackOfGeneralFunction;

};







#endif // _ExprIntrp_HeaderFile
