#ifndef _LEXICALDATA_GEN_H_
#define _LEXICALDATA_GEN_H_
#include "DynSet.h"
//------------- int ---------------
//----------------------------------

//------------- string ---------------
#include "AnsiString.h"
//----------------------------------

//------------- StringArray ---------------
#include "DynSet.h"


class StringArray : public DynSet<AnsiString> {
public:
  StringArray();

  virtual AnsiString toXML() const;

  virtual ~StringArray();

};
//----------------------------------

//------------- IntArray ---------------
#include "DynSet.h"


class IntArray : public DynSet<int> {
public:
  IntArray();

  virtual AnsiString toXML() const;

  virtual ~IntArray();

};
//----------------------------------

//------------- Expressions ---------------
#include "DynSet.h"

class Expression;

class Expressions : public DynSet<Expression> {
public:
  Expressions();

  virtual AnsiString toXML() const;

  virtual ~Expressions();

};
//----------------------------------

//------------- TestingExpressionFake ---------------
#include "DynSet.h"

class TestingExpression;

class TestingExpressionFake : public DynSet<TestingExpression> {
public:
  TestingExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~TestingExpressionFake();

};
//----------------------------------

//------------- NumericBinaryExpressionFake ---------------
#include "DynSet.h"

class NumericBinaryExpression;

class NumericBinaryExpressionFake : public DynSet<NumericBinaryExpression> {
public:
  NumericBinaryExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~NumericBinaryExpressionFake();

};
//----------------------------------

//------------- numericUnaryExpressionFake ---------------
#include "DynSet.h"

class NumericUnaryExpression;

class numericUnaryExpressionFake : public DynSet<NumericUnaryExpression> {
public:
  numericUnaryExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~numericUnaryExpressionFake();

};
//----------------------------------

//------------- MergeStatementFake ---------------
#include "DynSet.h"

class MergeStatement;

class MergeStatementFake : public DynSet<MergeStatement> {
public:
  MergeStatementFake();

  virtual AnsiString toXML() const;

  virtual ~MergeStatementFake();

};
//----------------------------------

//------------- BlockStatementFake ---------------
#include "DynSet.h"

class BlockStatement;

class BlockStatementFake : public DynSet<BlockStatement> {
public:
  BlockStatementFake();

  virtual AnsiString toXML() const;

  virtual ~BlockStatementFake();

};
//----------------------------------

//------------- ForStatementFake ---------------
#include "DynSet.h"

class ForStatement;

class ForStatementFake : public DynSet<ForStatement> {
public:
  ForStatementFake();

  virtual AnsiString toXML() const;

  virtual ~ForStatementFake();

};
//----------------------------------

//------------- WhileStatementFake ---------------
#include "DynSet.h"

class WhileStatement;

class WhileStatementFake : public DynSet<WhileStatement> {
public:
  WhileStatementFake();

  virtual AnsiString toXML() const;

  virtual ~WhileStatementFake();

};
//----------------------------------

//------------- MultiIdentifierFake ---------------
#include "DynSet.h"

class MultiIdentifier;

class MultiIdentifierFake : public DynSet<MultiIdentifier> {
public:
  MultiIdentifierFake();

  virtual AnsiString toXML() const;

  virtual ~MultiIdentifierFake();

};
//----------------------------------

//------------- VariableAssigmentFake ---------------
#include "DynSet.h"

class VariableAssigment;

class VariableAssigmentFake : public DynSet<VariableAssigment> {
public:
  VariableAssigmentFake();

  virtual AnsiString toXML() const;

  virtual ~VariableAssigmentFake();

};
//----------------------------------

//------------- CondOperatorExpressionFake ---------------
#include "DynSet.h"

class CondOperatorExpression;

class CondOperatorExpressionFake : public DynSet<CondOperatorExpression> {
public:
  CondOperatorExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~CondOperatorExpressionFake();

};
//----------------------------------

//------------- ArrayIdentifierExpression ---------------
#include "DynSet.h"

class ArrayIdentifier;

class ArrayIdentifierExpression : public DynSet<ArrayIdentifier> {
public:
  ArrayIdentifierExpression();

  virtual AnsiString toXML() const;

  virtual ~ArrayIdentifierExpression();

};
//----------------------------------

//------------- IfStatementFake ---------------
#include "DynSet.h"

class IfStatement;

class IfStatementFake : public DynSet<IfStatement> {
public:
  IfStatementFake();

  virtual AnsiString toXML() const;

  virtual ~IfStatementFake();

};
//----------------------------------

//------------- FunctionCallExpressionFake ---------------
#include "DynSet.h"

class FunctionCallExpression;

class FunctionCallExpressionFake : public DynSet<FunctionCallExpression> {
public:
  FunctionCallExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~FunctionCallExpressionFake();

};
//----------------------------------

//------------- CreatingExpressionFake ---------------
#include "DynSet.h"

class CreatingExpression;

class CreatingExpressionFake : public DynSet<CreatingExpression> {
public:
  CreatingExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~CreatingExpressionFake();

};
//----------------------------------

//------------- TemplateIdentifierFake ---------------
#include "DynSet.h"

class TemplateIdentifier;

class TemplateIdentifierFake : public DynSet<TemplateIdentifier> {
public:
  TemplateIdentifierFake();

  virtual AnsiString toXML() const;

  virtual ~TemplateIdentifierFake();

};
//----------------------------------

//------------- ArrayCreatingExpressionFake ---------------
#include "DynSet.h"

class ArrayCreatingExpression;

class ArrayCreatingExpressionFake : public DynSet<ArrayCreatingExpression> {
public:
  ArrayCreatingExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~ArrayCreatingExpressionFake();

};
//----------------------------------

//------------- AwaitExpressionFake ---------------
#include "DynSet.h"

class AwaitExpression;

class AwaitExpressionFake : public DynSet<AwaitExpression> {
public:
  AwaitExpressionFake();

  virtual AnsiString toXML() const;

  virtual ~AwaitExpressionFake();

};
//----------------------------------

//------------- VariableInitializer ---------------
class VariableInitializer {
  int _type;
  void* _ptr;

  static const int _TypeDefault;
  static const int _TypeValue;

  virtual void init(int, void*);
  virtual void clean();
  VariableInitializer();
public:
  VariableInitializer(const VariableInitializer&);
  virtual VariableInitializer& operator=(const VariableInitializer&);

  virtual bool isDefault() const;
  virtual bool isValue() const;

  virtual const Expression& asValue() const;
  virtual Expression& asValue();

  virtual AnsiString toXML() const;

  virtual ~VariableInitializer();

  static VariableInitializer createDefault();
  static VariableInitializer createValue(const Expression&);

};
//----------------------------------

//------------- IdentifierExpression ---------------
class IdentifierExpression {
  AnsiString value;
public:
  IdentifierExpression(const AnsiString&);
  virtual const AnsiString& getValue() const;
  virtual AnsiString& getValue();

  virtual AnsiString toXML() const;

  virtual ~IdentifierExpression();

};
//----------------------------------

//------------- StringExpression ---------------
class StringExpression {
  AnsiString value;
public:
  StringExpression(const AnsiString&);
  virtual const AnsiString& getValue() const;
  virtual AnsiString& getValue();

  virtual AnsiString toXML() const;

  virtual ~StringExpression();

};
//----------------------------------

//------------- FloatExpression ---------------
class FloatExpression {
  AnsiString value;
public:
  FloatExpression(const AnsiString&);
  virtual const AnsiString& getValue() const;
  virtual AnsiString& getValue();

  virtual AnsiString toXML() const;

  virtual ~FloatExpression();

};
//----------------------------------

//------------- Expression ---------------
class Expression {
  int _type;
  void* _ptr;

  static const int _TypeEmpty;
  static const int _TypeVariableAssigment;
  static const int _TypeCreatingExpression;
  static const int _TypeIdentifier;
  static const int _TypeArrayIdentifier;
  static const int _TypeMultiIdentifier;
  static const int _TypeTemplateIdentifier;
  static const int _TypeFunctionCallExpression;
  static const int _TypeTestingExpression;
  static const int _TypeNumericBinaryExpression;
  static const int _TypeNumericUnaryExpression;
  static const int _TypeCondOperatorExpression;
  static const int _TypeStringExpression;
  static const int _TypeFloatExpression;
  static const int _TypeArrayCreatingExpression;
  static const int _TypeAwaitExpression;

  virtual void init(int, void*);
  virtual void clean();
  Expression();
public:
  Expression(const Expression&);
  virtual Expression& operator=(const Expression&);

  virtual bool isEmpty() const;
  virtual bool isVariableAssigment() const;
  virtual bool isCreatingExpression() const;
  virtual bool isIdentifier() const;
  virtual bool isArrayIdentifier() const;
  virtual bool isMultiIdentifier() const;
  virtual bool isTemplateIdentifier() const;
  virtual bool isFunctionCallExpression() const;
  virtual bool isTestingExpression() const;
  virtual bool isNumericBinaryExpression() const;
  virtual bool isNumericUnaryExpression() const;
  virtual bool isCondOperatorExpression() const;
  virtual bool isStringExpression() const;
  virtual bool isFloatExpression() const;
  virtual bool isArrayCreatingExpression() const;
  virtual bool isAwaitExpression() const;

  virtual const VariableAssigment& asVariableAssigment() const;
  virtual VariableAssigment& asVariableAssigment();
  virtual const CreatingExpression& asCreatingExpression() const;
  virtual CreatingExpression& asCreatingExpression();
  virtual const IdentifierExpression& asIdentifier() const;
  virtual IdentifierExpression& asIdentifier();
  virtual const ArrayIdentifier& asArrayIdentifier() const;
  virtual ArrayIdentifier& asArrayIdentifier();
  virtual const MultiIdentifier& asMultiIdentifier() const;
  virtual MultiIdentifier& asMultiIdentifier();
  virtual const TemplateIdentifier& asTemplateIdentifier() const;
  virtual TemplateIdentifier& asTemplateIdentifier();
  virtual const FunctionCallExpression& asFunctionCallExpression() const;
  virtual FunctionCallExpression& asFunctionCallExpression();
  virtual const TestingExpression& asTestingExpression() const;
  virtual TestingExpression& asTestingExpression();
  virtual const NumericBinaryExpression& asNumericBinaryExpression() const;
  virtual NumericBinaryExpression& asNumericBinaryExpression();
  virtual const NumericUnaryExpression& asNumericUnaryExpression() const;
  virtual NumericUnaryExpression& asNumericUnaryExpression();
  virtual const CondOperatorExpression& asCondOperatorExpression() const;
  virtual CondOperatorExpression& asCondOperatorExpression();
  virtual const StringExpression& asStringExpression() const;
  virtual StringExpression& asStringExpression();
  virtual const FloatExpression& asFloatExpression() const;
  virtual FloatExpression& asFloatExpression();
  virtual const ArrayCreatingExpression& asArrayCreatingExpression() const;
  virtual ArrayCreatingExpression& asArrayCreatingExpression();
  virtual const AwaitExpression& asAwaitExpression() const;
  virtual AwaitExpression& asAwaitExpression();

  virtual AnsiString toXML() const;

  virtual ~Expression();

  static Expression createEmpty();
  static Expression createVariableAssigment(const VariableAssigment&);
  static Expression createCreatingExpression(const CreatingExpression&);
  static Expression createIdentifier(const IdentifierExpression&);
  static Expression createArrayIdentifier(const ArrayIdentifier&);
  static Expression createMultiIdentifier(const MultiIdentifier&);
  static Expression createTemplateIdentifier(const TemplateIdentifier&);
  static Expression createFunctionCallExpression(const FunctionCallExpression&);
  static Expression createTestingExpression(const TestingExpression&);
  static Expression createNumericBinaryExpression(const NumericBinaryExpression&);
  static Expression createNumericUnaryExpression(const NumericUnaryExpression&);
  static Expression createCondOperatorExpression(const CondOperatorExpression&);
  static Expression createStringExpression(const StringExpression&);
  static Expression createFloatExpression(const FloatExpression&);
  static Expression createArrayCreatingExpression(const ArrayCreatingExpression&);
  static Expression createAwaitExpression(const AwaitExpression&);

};
//----------------------------------

//------------- VariableDeclarator ---------------
class VariableDeclarator {
  Expression type;
  Expression name;
  VariableInitializer value;
public:
  VariableDeclarator(const Expression&, const Expression&, const VariableInitializer&);
  virtual const Expression& getType() const;
  virtual const Expression& getName() const;
  virtual const VariableInitializer& getValue() const;
  virtual Expression& getType();
  virtual Expression& getName();
  virtual VariableInitializer& getValue();

  virtual AnsiString toXML() const;

  virtual ~VariableDeclarator();

};
//----------------------------------

//------------- Params ---------------
#include "DynSet.h"


class Params : public DynSet<VariableDeclarator> {
public:
  Params();

  virtual AnsiString toXML() const;

  virtual ~Params();

};
//----------------------------------

//------------- CallParams ---------------
#include "DynSet.h"


class CallParams : public DynSet<Expression> {
public:
  CallParams();

  virtual AnsiString toXML() const;

  virtual ~CallParams();

};
//----------------------------------

//------------- TemplateIdentifier ---------------
class TemplateIdentifier {
  Expression type;
  Expressions params;
public:
  TemplateIdentifier(const Expression&, const Expressions&);
  virtual const Expression& getType() const;
  virtual const Expressions& getParams() const;
  virtual Expression& getType();
  virtual Expressions& getParams();

  virtual AnsiString toXML() const;

  virtual ~TemplateIdentifier();

};
//----------------------------------

//------------- AwaitExpression ---------------
class AwaitExpression {
  Expression exp;
public:
  AwaitExpression(const Expression&);
  virtual const Expression& getExp() const;
  virtual Expression& getExp();

  virtual AnsiString toXML() const;

  virtual ~AwaitExpression();

};
//----------------------------------

//------------- CreatingExpression ---------------
class CreatingExpression {
  Expression type;
  CallParams params;
public:
  CreatingExpression(const Expression&, const CallParams&);
  virtual const Expression& getType() const;
  virtual const CallParams& getParams() const;
  virtual Expression& getType();
  virtual CallParams& getParams();

  virtual AnsiString toXML() const;

  virtual ~CreatingExpression();

};
//----------------------------------

//------------- ArrayCreatingExpression ---------------
class ArrayCreatingExpression {
  Expression arr;
  Expression size;
public:
  ArrayCreatingExpression(const Expression&, const Expression&);
  virtual const Expression& getArr() const;
  virtual const Expression& getSize() const;
  virtual Expression& getArr();
  virtual Expression& getSize();

  virtual AnsiString toXML() const;

  virtual ~ArrayCreatingExpression();

};
//----------------------------------

//------------- FunctionCallExpression ---------------
class FunctionCallExpression {
  Expression name;
  CallParams params;
public:
  FunctionCallExpression(const Expression&, const CallParams&);
  virtual const Expression& getName() const;
  virtual const CallParams& getParams() const;
  virtual Expression& getName();
  virtual CallParams& getParams();

  virtual AnsiString toXML() const;

  virtual ~FunctionCallExpression();

};
//----------------------------------

//------------- ArrayIdentifier ---------------
class ArrayIdentifier {
  Expression array;
  Expression index;
public:
  ArrayIdentifier(const Expression&, const Expression&);
  virtual const Expression& getArray() const;
  virtual const Expression& getIndex() const;
  virtual Expression& getArray();
  virtual Expression& getIndex();

  virtual AnsiString toXML() const;

  virtual ~ArrayIdentifier();

};
//----------------------------------

//------------- CondOperatorExpression ---------------
class CondOperatorExpression {
  Expression cond;
  Expression trueExp;
  Expression falseExp;
public:
  CondOperatorExpression(const Expression&, const Expression&, const Expression&);
  virtual const Expression& getCond() const;
  virtual const Expression& getTrueExp() const;
  virtual const Expression& getFalseExp() const;
  virtual Expression& getCond();
  virtual Expression& getTrueExp();
  virtual Expression& getFalseExp();

  virtual AnsiString toXML() const;

  virtual ~CondOperatorExpression();

};
//----------------------------------

//------------- VariableAssigment ---------------
class VariableAssigment {
  Expression obj;
  Expression value;
public:
  VariableAssigment(const Expression&, const Expression&);
  virtual const Expression& getObj() const;
  virtual const Expression& getValue() const;
  virtual Expression& getObj();
  virtual Expression& getValue();

  virtual AnsiString toXML() const;

  virtual ~VariableAssigment();

};
//----------------------------------

//------------- MultiIdentifier ---------------
class MultiIdentifier {
  Expression lex;
  Expression rex;
public:
  MultiIdentifier(const Expression&, const Expression&);
  virtual const Expression& getLex() const;
  virtual const Expression& getRex() const;
  virtual Expression& getLex();
  virtual Expression& getRex();

  virtual AnsiString toXML() const;

  virtual ~MultiIdentifier();

};
//----------------------------------

//------------- TestingOperator ---------------
class TestingOperator {
  int _type;
  void* _ptr;

  static const int _TypeGr;
  static const int _TypeSm;
  static const int _TypeEgr;
  static const int _TypeEsm;
  static const int _TypeEq;
  static const int _TypeNeq;

  virtual void init(int, void*);
  virtual void clean();
  TestingOperator();
public:
  TestingOperator(const TestingOperator&);
  virtual TestingOperator& operator=(const TestingOperator&);

  virtual bool isGr() const;
  virtual bool isSm() const;
  virtual bool isEgr() const;
  virtual bool isEsm() const;
  virtual bool isEq() const;
  virtual bool isNeq() const;


  virtual AnsiString toXML() const;

  virtual ~TestingOperator();

  static TestingOperator createGr();
  static TestingOperator createSm();
  static TestingOperator createEgr();
  static TestingOperator createEsm();
  static TestingOperator createEq();
  static TestingOperator createNeq();

};
//----------------------------------

//------------- NumericOperator ---------------
class NumericOperator {
  int _type;
  void* _ptr;

  static const int _TypeInc;
  static const int _TypeDec;
  static const int _TypeAdd;
  static const int _TypeSub;
  static const int _TypeMul;
  static const int _TypeDiv;
  static const int _TypeSas;
  static const int _TypeAas;

  virtual void init(int, void*);
  virtual void clean();
  NumericOperator();
public:
  NumericOperator(const NumericOperator&);
  virtual NumericOperator& operator=(const NumericOperator&);

  virtual bool isInc() const;
  virtual bool isDec() const;
  virtual bool isAdd() const;
  virtual bool isSub() const;
  virtual bool isMul() const;
  virtual bool isDiv() const;
  virtual bool isSas() const;
  virtual bool isAas() const;


  virtual AnsiString toXML() const;

  virtual ~NumericOperator();

  static NumericOperator createInc();
  static NumericOperator createDec();
  static NumericOperator createAdd();
  static NumericOperator createSub();
  static NumericOperator createMul();
  static NumericOperator createDiv();
  static NumericOperator createSas();
  static NumericOperator createAas();

};
//----------------------------------

//------------- TestingExpression ---------------
class TestingExpression {
  Expression lex;
  Expression rex;
  TestingOperator op;
public:
  TestingExpression(const Expression&, const Expression&, const TestingOperator&);
  virtual const Expression& getLex() const;
  virtual const Expression& getRex() const;
  virtual const TestingOperator& getOp() const;
  virtual Expression& getLex();
  virtual Expression& getRex();
  virtual TestingOperator& getOp();

  virtual AnsiString toXML() const;

  virtual ~TestingExpression();

};
//----------------------------------

//------------- NumericBinaryExpression ---------------
class NumericBinaryExpression {
  Expression lex;
  Expression rex;
  NumericOperator op;
public:
  NumericBinaryExpression(const Expression&, const Expression&, const NumericOperator&);
  virtual const Expression& getLex() const;
  virtual const Expression& getRex() const;
  virtual const NumericOperator& getOp() const;
  virtual Expression& getLex();
  virtual Expression& getRex();
  virtual NumericOperator& getOp();

  virtual AnsiString toXML() const;

  virtual ~NumericBinaryExpression();

};
//----------------------------------

//------------- NumericUnaryExpressionKind ---------------
class NumericUnaryExpressionKind {
  int _type;
  void* _ptr;

  static const int _TypePrefix;
  static const int _TypeSufix;

  virtual void init(int, void*);
  virtual void clean();
  NumericUnaryExpressionKind();
public:
  NumericUnaryExpressionKind(const NumericUnaryExpressionKind&);
  virtual NumericUnaryExpressionKind& operator=(const NumericUnaryExpressionKind&);

  virtual bool isPrefix() const;
  virtual bool isSufix() const;


  virtual AnsiString toXML() const;

  virtual ~NumericUnaryExpressionKind();

  static NumericUnaryExpressionKind createPrefix();
  static NumericUnaryExpressionKind createSufix();

};
//----------------------------------

//------------- NumericUnaryExpression ---------------
class NumericUnaryExpression {
  Expression exp;
  NumericOperator op;
  NumericUnaryExpressionKind kind;
public:
  NumericUnaryExpression(const Expression&, const NumericOperator&, const NumericUnaryExpressionKind&);
  virtual const Expression& getExp() const;
  virtual const NumericOperator& getOp() const;
  virtual const NumericUnaryExpressionKind& getKind() const;
  virtual Expression& getExp();
  virtual NumericOperator& getOp();
  virtual NumericUnaryExpressionKind& getKind();

  virtual AnsiString toXML() const;

  virtual ~NumericUnaryExpression();

};
//----------------------------------

//------------- Statement ---------------
class Statement {
  int _type;
  void* _ptr;

  static const int _TypeEmpty;
  static const int _TypeVariableDeclaration;
  static const int _TypeExpressionStatement;
  static const int _TypeBlockStatement;
  static const int _TypeMergeStatement;
  static const int _TypeReturnStatement;
  static const int _TypeForStatement;
  static const int _TypeWhileStatement;
  static const int _TypeIfStatement;

  virtual void init(int, void*);
  virtual void clean();
  Statement();
public:
  Statement(const Statement&);
  virtual Statement& operator=(const Statement&);

  virtual bool isEmpty() const;
  virtual bool isVariableDeclaration() const;
  virtual bool isExpressionStatement() const;
  virtual bool isBlockStatement() const;
  virtual bool isMergeStatement() const;
  virtual bool isReturnStatement() const;
  virtual bool isForStatement() const;
  virtual bool isWhileStatement() const;
  virtual bool isIfStatement() const;

  virtual const VariableDeclarator& asVariableDeclaration() const;
  virtual VariableDeclarator& asVariableDeclaration();
  virtual const Expression& asExpressionStatement() const;
  virtual Expression& asExpressionStatement();
  virtual const BlockStatement& asBlockStatement() const;
  virtual BlockStatement& asBlockStatement();
  virtual const MergeStatement& asMergeStatement() const;
  virtual MergeStatement& asMergeStatement();
  virtual const Expression& asReturnStatement() const;
  virtual Expression& asReturnStatement();
  virtual const ForStatement& asForStatement() const;
  virtual ForStatement& asForStatement();
  virtual const WhileStatement& asWhileStatement() const;
  virtual WhileStatement& asWhileStatement();
  virtual const IfStatement& asIfStatement() const;
  virtual IfStatement& asIfStatement();

  virtual AnsiString toXML() const;

  virtual ~Statement();

  static Statement createEmpty();
  static Statement createVariableDeclaration(const VariableDeclarator&);
  static Statement createExpressionStatement(const Expression&);
  static Statement createBlockStatement(const BlockStatement&);
  static Statement createMergeStatement(const MergeStatement&);
  static Statement createReturnStatement(const Expression&);
  static Statement createForStatement(const ForStatement&);
  static Statement createWhileStatement(const WhileStatement&);
  static Statement createIfStatement(const IfStatement&);

};
//----------------------------------

//------------- BlockStatement ---------------
class BlockStatement {
  Statement body;
public:
  BlockStatement(const Statement&);
  virtual const Statement& getBody() const;
  virtual Statement& getBody();

  virtual AnsiString toXML() const;

  virtual ~BlockStatement();

};
//----------------------------------

//------------- MergeStatement ---------------
class MergeStatement {
  Statement first;
  Statement second;
public:
  MergeStatement(const Statement&, const Statement&);
  virtual const Statement& getFirst() const;
  virtual const Statement& getSecond() const;
  virtual Statement& getFirst();
  virtual Statement& getSecond();

  virtual AnsiString toXML() const;

  virtual ~MergeStatement();

};
//----------------------------------

//------------- ForInit ---------------
class ForInit {
  int _type;
  void* _ptr;

  static const int _TypeExpr;
  static const int _TypeDecl;

  virtual void init(int, void*);
  virtual void clean();
  ForInit();
public:
  ForInit(const ForInit&);
  virtual ForInit& operator=(const ForInit&);

  virtual bool isExpr() const;
  virtual bool isDecl() const;

  virtual const Expression& asExpr() const;
  virtual Expression& asExpr();
  virtual const VariableDeclarator& asDecl() const;
  virtual VariableDeclarator& asDecl();

  virtual AnsiString toXML() const;

  virtual ~ForInit();

  static ForInit createExpr(const Expression&);
  static ForInit createDecl(const VariableDeclarator&);

};
//----------------------------------

//------------- ForStatement ---------------
class ForStatement {
  ForInit init;
  Expression condition;
  Expression after;
  Statement body;
public:
  ForStatement(const ForInit&, const Expression&, const Expression&, const Statement&);
  virtual const ForInit& getInit() const;
  virtual const Expression& getCondition() const;
  virtual const Expression& getAfter() const;
  virtual const Statement& getBody() const;
  virtual ForInit& getInit();
  virtual Expression& getCondition();
  virtual Expression& getAfter();
  virtual Statement& getBody();

  virtual AnsiString toXML() const;

  virtual ~ForStatement();

};
//----------------------------------

//------------- WhileStatement ---------------
class WhileStatement {
  Expression condition;
  Statement body;
public:
  WhileStatement(const Expression&, const Statement&);
  virtual const Expression& getCondition() const;
  virtual const Statement& getBody() const;
  virtual Expression& getCondition();
  virtual Statement& getBody();

  virtual AnsiString toXML() const;

  virtual ~WhileStatement();

};
//----------------------------------

//------------- IfElse ---------------
class IfElse {
  int _type;
  void* _ptr;

  static const int _TypeEmpty;
  static const int _TypeValue;

  virtual void init(int, void*);
  virtual void clean();
  IfElse();
public:
  IfElse(const IfElse&);
  virtual IfElse& operator=(const IfElse&);

  virtual bool isEmpty() const;
  virtual bool isValue() const;

  virtual const Statement& asValue() const;
  virtual Statement& asValue();

  virtual AnsiString toXML() const;

  virtual ~IfElse();

  static IfElse createEmpty();
  static IfElse createValue(const Statement&);

};
//----------------------------------

//------------- IfStatement ---------------
class IfStatement {
  Expression condition;
  Statement body;
  IfElse ifElse;
public:
  IfStatement(const Expression&, const Statement&, const IfElse&);
  virtual const Expression& getCondition() const;
  virtual const Statement& getBody() const;
  virtual const IfElse& getIfElse() const;
  virtual Expression& getCondition();
  virtual Statement& getBody();
  virtual IfElse& getIfElse();

  virtual AnsiString toXML() const;

  virtual ~IfStatement();

};
//----------------------------------

//------------- Modifier ---------------
class Modifier {
  int _type;
  void* _ptr;

  static const int _TypePublic;
  static const int _TypeStatic;
  static const int _TypePrivate;
  static const int _TypeAsync;

  virtual void init(int, void*);
  virtual void clean();
  Modifier();
public:
  Modifier(const Modifier&);
  virtual Modifier& operator=(const Modifier&);

  virtual bool isPublic() const;
  virtual bool isStatic() const;
  virtual bool isPrivate() const;
  virtual bool isAsync() const;


  virtual AnsiString toXML() const;

  virtual ~Modifier();

  static Modifier createPublic();
  static Modifier createStatic();
  static Modifier createPrivate();
  static Modifier createAsync();

};
//----------------------------------

//------------- Modifiers ---------------
#include "DynSet.h"


class Modifiers : public DynSet<Modifier> {
public:
  Modifiers();

  virtual AnsiString toXML() const;

  virtual ~Modifiers();

};
//----------------------------------

//------------- MethodDeclarator ---------------
class MethodDeclarator {
  Modifiers modifiers;
  Expression type;
  AnsiString name;
  Params params;
  Statement statement;
public:
  MethodDeclarator(const Modifiers&, const Expression&, const AnsiString&, const Params&, const Statement&);
  virtual const Modifiers& getModifiers() const;
  virtual const Expression& getType() const;
  virtual const AnsiString& getName() const;
  virtual const Params& getParams() const;
  virtual const Statement& getStatement() const;
  virtual Modifiers& getModifiers();
  virtual Expression& getType();
  virtual AnsiString& getName();
  virtual Params& getParams();
  virtual Statement& getStatement();

  virtual AnsiString toXML() const;

  virtual ~MethodDeclarator();

};
//----------------------------------

//------------- ClassElem ---------------
class ClassElem {
  int _type;
  void* _ptr;

  static const int _TypeVariableDeclarator;
  static const int _TypeMethodDeclarator;

  virtual void init(int, void*);
  virtual void clean();
  ClassElem();
public:
  ClassElem(const ClassElem&);
  virtual ClassElem& operator=(const ClassElem&);

  virtual bool isVariableDeclarator() const;
  virtual bool isMethodDeclarator() const;

  virtual const VariableDeclarator& asVariableDeclarator() const;
  virtual VariableDeclarator& asVariableDeclarator();
  virtual const MethodDeclarator& asMethodDeclarator() const;
  virtual MethodDeclarator& asMethodDeclarator();

  virtual AnsiString toXML() const;

  virtual ~ClassElem();

  static ClassElem createVariableDeclarator(const VariableDeclarator&);
  static ClassElem createMethodDeclarator(const MethodDeclarator&);

};
//----------------------------------

//------------- ClassElems ---------------
#include "DynSet.h"


class ClassElems : public DynSet<ClassElem> {
public:
  ClassElems();

  virtual AnsiString toXML() const;

  virtual ~ClassElems();

};
//----------------------------------

//------------- Class ---------------
class Class {
  Modifiers modifiers;
  AnsiString name;
  ClassElems classElems;
public:
  Class(const Modifiers&, const AnsiString&, const ClassElems&);
  virtual const Modifiers& getModifiers() const;
  virtual const AnsiString& getName() const;
  virtual const ClassElems& getClassElems() const;
  virtual Modifiers& getModifiers();
  virtual AnsiString& getName();
  virtual ClassElems& getClassElems();

  virtual AnsiString toXML() const;

  virtual ~Class();

};
//----------------------------------

//------------- EnviromentElement ---------------
class EnviromentElement {
  int _type;
  void* _ptr;

  static const int _TypeMethod;
  static const int _TypeVariable;

  virtual void init(int, void*);
  virtual void clean();
  EnviromentElement();
public:
  EnviromentElement(const EnviromentElement&);
  virtual EnviromentElement& operator=(const EnviromentElement&);

  virtual bool isMethod() const;
  virtual bool isVariable() const;

  virtual const MethodDeclarator& asMethod() const;
  virtual MethodDeclarator& asMethod();
  virtual const VariableDeclarator& asVariable() const;
  virtual VariableDeclarator& asVariable();

  virtual AnsiString toXML() const;

  virtual ~EnviromentElement();

  static EnviromentElement createMethod(const MethodDeclarator&);
  static EnviromentElement createVariable(const VariableDeclarator&);

};
//----------------------------------

//------------- Enviroment ---------------
#include "DynSet.h"


class Enviroment : public DynSet<EnviromentElement> {
public:
  Enviroment();

  virtual AnsiString toXML() const;

  virtual ~Enviroment();

};
//----------------------------------

//------------- Classes ---------------
#include "DynSet.h"


class Classes : public DynSet<Class> {
public:
  Classes();

  virtual AnsiString toXML() const;

  virtual ~Classes();

};
//----------------------------------

//------------- Packages ---------------
#include "DynSet.h"


class Packages : public DynSet<AnsiString> {
public:
  Packages();

  virtual AnsiString toXML() const;

  virtual ~Packages();

};
//----------------------------------

//------------- Imports ---------------
#include "DynSet.h"


class Imports : public DynSet<AnsiString> {
public:
  Imports();

  virtual AnsiString toXML() const;

  virtual ~Imports();

};
//----------------------------------

//------------- JavaFile ---------------
class JavaFile {
  Packages packages;
  Imports imports;
  Classes classes;
public:
  JavaFile(const Packages&, const Imports&, const Classes&);
  virtual const Packages& getPackages() const;
  virtual const Imports& getImports() const;
  virtual const Classes& getClasses() const;
  virtual Packages& getPackages();
  virtual Imports& getImports();
  virtual Classes& getClasses();

  virtual AnsiString toXML() const;

  virtual ~JavaFile();

};
//----------------------------------

//------------- Lang ---------------
class Lang {
  int _type;
  void* _ptr;

  static const int _TypeCpp;
  static const int _TypePhp;
  static const int _TypeCs;

  virtual void init(int, void*);
  virtual void clean();
  Lang();
public:
  Lang(const Lang&);
  virtual Lang& operator=(const Lang&);

  virtual bool isCpp() const;
  virtual bool isPhp() const;
  virtual bool isCs() const;


  virtual AnsiString toXML() const;

  virtual ~Lang();

  static Lang createCpp();
  static Lang createPhp();
  static Lang createCs();

};
//----------------------------------

#endif
