
#include "LexicalData.h"
#include "Exception.h"
#include "StringBuffer.h"
//------------- int ---------------
//----------------------------------

//------------- string ---------------
//----------------------------------

//------------- StringArray ---------------
StringArray::StringArray() {
}
AnsiString StringArray::toXML() const {
  StringBuffer _xml;
  _xml += "<StringArray>";
  for (int _i=0;_i<Size();_i++)
    _xml += "<string><![CDATA[" + AnsiString((*this)[_i]) + "]]></string>";
    _xml += "</StringArray>";
    return _xml.get();
}
StringArray::~StringArray() {
}
//----------------------------------

//------------- IntArray ---------------
IntArray::IntArray() {
}
AnsiString IntArray::toXML() const {
  StringBuffer _xml;
  _xml += "<IntArray>";
  for (int _i=0;_i<Size();_i++)
    _xml += "<int><![CDATA[" + AnsiString((*this)[_i]) + "]]></int>";
    _xml += "</IntArray>";
    return _xml.get();
}
IntArray::~IntArray() {
}
//----------------------------------

//------------- Expressions ---------------
Expressions::Expressions() {
}
AnsiString Expressions::toXML() const {
  StringBuffer _xml;
  _xml += "<Expressions>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</Expressions>";
    return _xml.get();
}
Expressions::~Expressions() {
}
//----------------------------------

//------------- TestingExpressionFake ---------------
TestingExpressionFake::TestingExpressionFake() {
}
AnsiString TestingExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<TestingExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</TestingExpressionFake>";
    return _xml.get();
}
TestingExpressionFake::~TestingExpressionFake() {
}
//----------------------------------

//------------- NumericBinaryExpressionFake ---------------
NumericBinaryExpressionFake::NumericBinaryExpressionFake() {
}
AnsiString NumericBinaryExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<NumericBinaryExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</NumericBinaryExpressionFake>";
    return _xml.get();
}
NumericBinaryExpressionFake::~NumericBinaryExpressionFake() {
}
//----------------------------------

//------------- numericUnaryExpressionFake ---------------
numericUnaryExpressionFake::numericUnaryExpressionFake() {
}
AnsiString numericUnaryExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<numericUnaryExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</numericUnaryExpressionFake>";
    return _xml.get();
}
numericUnaryExpressionFake::~numericUnaryExpressionFake() {
}
//----------------------------------

//------------- MergeStatementFake ---------------
MergeStatementFake::MergeStatementFake() {
}
AnsiString MergeStatementFake::toXML() const {
  StringBuffer _xml;
  _xml += "<MergeStatementFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</MergeStatementFake>";
    return _xml.get();
}
MergeStatementFake::~MergeStatementFake() {
}
//----------------------------------

//------------- BlockStatementFake ---------------
BlockStatementFake::BlockStatementFake() {
}
AnsiString BlockStatementFake::toXML() const {
  StringBuffer _xml;
  _xml += "<BlockStatementFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</BlockStatementFake>";
    return _xml.get();
}
BlockStatementFake::~BlockStatementFake() {
}
//----------------------------------

//------------- ForStatementFake ---------------
ForStatementFake::ForStatementFake() {
}
AnsiString ForStatementFake::toXML() const {
  StringBuffer _xml;
  _xml += "<ForStatementFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</ForStatementFake>";
    return _xml.get();
}
ForStatementFake::~ForStatementFake() {
}
//----------------------------------

//------------- WhileStatementFake ---------------
WhileStatementFake::WhileStatementFake() {
}
AnsiString WhileStatementFake::toXML() const {
  StringBuffer _xml;
  _xml += "<WhileStatementFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</WhileStatementFake>";
    return _xml.get();
}
WhileStatementFake::~WhileStatementFake() {
}
//----------------------------------

//------------- MultiIdentifierFake ---------------
MultiIdentifierFake::MultiIdentifierFake() {
}
AnsiString MultiIdentifierFake::toXML() const {
  StringBuffer _xml;
  _xml += "<MultiIdentifierFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</MultiIdentifierFake>";
    return _xml.get();
}
MultiIdentifierFake::~MultiIdentifierFake() {
}
//----------------------------------

//------------- VariableAssigmentFake ---------------
VariableAssigmentFake::VariableAssigmentFake() {
}
AnsiString VariableAssigmentFake::toXML() const {
  StringBuffer _xml;
  _xml += "<VariableAssigmentFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</VariableAssigmentFake>";
    return _xml.get();
}
VariableAssigmentFake::~VariableAssigmentFake() {
}
//----------------------------------

//------------- CondOperatorExpressionFake ---------------
CondOperatorExpressionFake::CondOperatorExpressionFake() {
}
AnsiString CondOperatorExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<CondOperatorExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</CondOperatorExpressionFake>";
    return _xml.get();
}
CondOperatorExpressionFake::~CondOperatorExpressionFake() {
}
//----------------------------------

//------------- ArrayIdentifierExpression ---------------
ArrayIdentifierExpression::ArrayIdentifierExpression() {
}
AnsiString ArrayIdentifierExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<ArrayIdentifierExpression>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</ArrayIdentifierExpression>";
    return _xml.get();
}
ArrayIdentifierExpression::~ArrayIdentifierExpression() {
}
//----------------------------------

//------------- IfStatementFake ---------------
IfStatementFake::IfStatementFake() {
}
AnsiString IfStatementFake::toXML() const {
  StringBuffer _xml;
  _xml += "<IfStatementFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</IfStatementFake>";
    return _xml.get();
}
IfStatementFake::~IfStatementFake() {
}
//----------------------------------

//------------- FunctionCallExpressionFake ---------------
FunctionCallExpressionFake::FunctionCallExpressionFake() {
}
AnsiString FunctionCallExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<FunctionCallExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</FunctionCallExpressionFake>";
    return _xml.get();
}
FunctionCallExpressionFake::~FunctionCallExpressionFake() {
}
//----------------------------------

//------------- CreatingExpressionFake ---------------
CreatingExpressionFake::CreatingExpressionFake() {
}
AnsiString CreatingExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<CreatingExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</CreatingExpressionFake>";
    return _xml.get();
}
CreatingExpressionFake::~CreatingExpressionFake() {
}
//----------------------------------

//------------- TemplateIdentifierFake ---------------
TemplateIdentifierFake::TemplateIdentifierFake() {
}
AnsiString TemplateIdentifierFake::toXML() const {
  StringBuffer _xml;
  _xml += "<TemplateIdentifierFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</TemplateIdentifierFake>";
    return _xml.get();
}
TemplateIdentifierFake::~TemplateIdentifierFake() {
}
//----------------------------------

//------------- ArrayCreatingExpressionFake ---------------
ArrayCreatingExpressionFake::ArrayCreatingExpressionFake() {
}
AnsiString ArrayCreatingExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<ArrayCreatingExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</ArrayCreatingExpressionFake>";
    return _xml.get();
}
ArrayCreatingExpressionFake::~ArrayCreatingExpressionFake() {
}
//----------------------------------

//------------- AwaitExpressionFake ---------------
AwaitExpressionFake::AwaitExpressionFake() {
}
AnsiString AwaitExpressionFake::toXML() const {
  StringBuffer _xml;
  _xml += "<AwaitExpressionFake>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</AwaitExpressionFake>";
    return _xml.get();
}
AwaitExpressionFake::~AwaitExpressionFake() {
}
//----------------------------------

//------------- VariableInitializer ---------------
const int VariableInitializer::_TypeDefault = 0;
const int VariableInitializer::_TypeValue = 1;
void VariableInitializer::init(int type, void* ptr) {
  if (type==_TypeDefault) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeValue) {
    _type = type;
    _ptr = new Expression(*(Expression*) ptr);
  }
}
void VariableInitializer::clean() {
  if (_type==_TypeDefault) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("VariableInitializer::clean()");
  } else if (_type==_TypeValue) {
    _type = -1;
    delete (Expression*) _ptr;
    _ptr = 0;
  }
}
VariableInitializer::VariableInitializer() : _type(-1), _ptr(0) {
}
VariableInitializer::VariableInitializer(const VariableInitializer& _value) {
  init(_value._type, _value._ptr);
}
VariableInitializer& VariableInitializer::operator=(const VariableInitializer& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool VariableInitializer::isDefault() const {
  return _type==_TypeDefault;
}
bool VariableInitializer::isValue() const {
  return _type==_TypeValue;
}
const Expression& VariableInitializer::asValue() const {
  if (_type!=_TypeValue)
    throw Exception("VariableInitializer::asValue");
  return *(Expression*) _ptr;
}
Expression& VariableInitializer::asValue() {
  if (_type!=_TypeValue)
    throw Exception("VariableInitializer::asValue");
  return *(Expression*) _ptr;
}

AnsiString VariableInitializer::toXML() const {
  StringBuffer _xml;
   _xml += "<VariableInitializer>";
    if (_type==0)
      _xml += "<default/>";
    else if (_type==1)
    _xml += "<value>" + ((Expression*) _ptr)->toXML() + "</value>";
    else
      throw Exception("VariableInitializer::toXML(" + AnsiString(_type) + ")");
    _xml += "</VariableInitializer>";
    return _xml.get();
}

VariableInitializer::~VariableInitializer() {
  clean();
}
VariableInitializer VariableInitializer::createDefault() {
  VariableInitializer _value;
  _value._type = _TypeDefault;
  _value._ptr = 0;
  return _value;
}
VariableInitializer VariableInitializer::createValue(const Expression& _param) {
  VariableInitializer _value;
  _value._type = _TypeValue;
  _value._ptr = new Expression(_param);
  return _value;
}


//----------------------------------

//------------- IdentifierExpression ---------------
IdentifierExpression::IdentifierExpression(const AnsiString& _value) : value(_value) {
}
const AnsiString& IdentifierExpression::getValue() const {
  return value;
}
AnsiString& IdentifierExpression::getValue() {
  return value;
}
AnsiString IdentifierExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<IdentifierExpression>";
    _xml += "<value><![CDATA[" + AnsiString(value)+"]]></value>";
  _xml += "</IdentifierExpression>";
  return _xml.get();
}
IdentifierExpression::~IdentifierExpression() {
}
//----------------------------------

//------------- StringExpression ---------------
StringExpression::StringExpression(const AnsiString& _value) : value(_value) {
}
const AnsiString& StringExpression::getValue() const {
  return value;
}
AnsiString& StringExpression::getValue() {
  return value;
}
AnsiString StringExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<StringExpression>";
    _xml += "<value><![CDATA[" + AnsiString(value)+"]]></value>";
  _xml += "</StringExpression>";
  return _xml.get();
}
StringExpression::~StringExpression() {
}
//----------------------------------

//------------- FloatExpression ---------------
FloatExpression::FloatExpression(const AnsiString& _value) : value(_value) {
}
const AnsiString& FloatExpression::getValue() const {
  return value;
}
AnsiString& FloatExpression::getValue() {
  return value;
}
AnsiString FloatExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<FloatExpression>";
    _xml += "<value><![CDATA[" + AnsiString(value)+"]]></value>";
  _xml += "</FloatExpression>";
  return _xml.get();
}
FloatExpression::~FloatExpression() {
}
//----------------------------------

//------------- Expression ---------------
const int Expression::_TypeEmpty = 0;
const int Expression::_TypeVariableAssigment = 1;
const int Expression::_TypeCreatingExpression = 2;
const int Expression::_TypeIdentifier = 3;
const int Expression::_TypeArrayIdentifier = 4;
const int Expression::_TypeMultiIdentifier = 5;
const int Expression::_TypeTemplateIdentifier = 6;
const int Expression::_TypeFunctionCallExpression = 7;
const int Expression::_TypeTestingExpression = 8;
const int Expression::_TypeNumericBinaryExpression = 9;
const int Expression::_TypeNumericUnaryExpression = 10;
const int Expression::_TypeCondOperatorExpression = 11;
const int Expression::_TypeStringExpression = 12;
const int Expression::_TypeFloatExpression = 13;
const int Expression::_TypeArrayCreatingExpression = 14;
const int Expression::_TypeAwaitExpression = 15;
void Expression::init(int type, void* ptr) {
  if (type==_TypeEmpty) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeVariableAssigment) {
    _type = type;
    _ptr = new VariableAssigment(*(VariableAssigment*) ptr);
  } else if (type==_TypeCreatingExpression) {
    _type = type;
    _ptr = new CreatingExpression(*(CreatingExpression*) ptr);
  } else if (type==_TypeIdentifier) {
    _type = type;
    _ptr = new IdentifierExpression(*(IdentifierExpression*) ptr);
  } else if (type==_TypeArrayIdentifier) {
    _type = type;
    _ptr = new ArrayIdentifier(*(ArrayIdentifier*) ptr);
  } else if (type==_TypeMultiIdentifier) {
    _type = type;
    _ptr = new MultiIdentifier(*(MultiIdentifier*) ptr);
  } else if (type==_TypeTemplateIdentifier) {
    _type = type;
    _ptr = new TemplateIdentifier(*(TemplateIdentifier*) ptr);
  } else if (type==_TypeFunctionCallExpression) {
    _type = type;
    _ptr = new FunctionCallExpression(*(FunctionCallExpression*) ptr);
  } else if (type==_TypeTestingExpression) {
    _type = type;
    _ptr = new TestingExpression(*(TestingExpression*) ptr);
  } else if (type==_TypeNumericBinaryExpression) {
    _type = type;
    _ptr = new NumericBinaryExpression(*(NumericBinaryExpression*) ptr);
  } else if (type==_TypeNumericUnaryExpression) {
    _type = type;
    _ptr = new NumericUnaryExpression(*(NumericUnaryExpression*) ptr);
  } else if (type==_TypeCondOperatorExpression) {
    _type = type;
    _ptr = new CondOperatorExpression(*(CondOperatorExpression*) ptr);
  } else if (type==_TypeStringExpression) {
    _type = type;
    _ptr = new StringExpression(*(StringExpression*) ptr);
  } else if (type==_TypeFloatExpression) {
    _type = type;
    _ptr = new FloatExpression(*(FloatExpression*) ptr);
  } else if (type==_TypeArrayCreatingExpression) {
    _type = type;
    _ptr = new ArrayCreatingExpression(*(ArrayCreatingExpression*) ptr);
  } else if (type==_TypeAwaitExpression) {
    _type = type;
    _ptr = new AwaitExpression(*(AwaitExpression*) ptr);
  }
}
void Expression::clean() {
  if (_type==_TypeEmpty) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Expression::clean()");
  } else if (_type==_TypeVariableAssigment) {
    _type = -1;
    delete (VariableAssigment*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeCreatingExpression) {
    _type = -1;
    delete (CreatingExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeIdentifier) {
    _type = -1;
    delete (IdentifierExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeArrayIdentifier) {
    _type = -1;
    delete (ArrayIdentifier*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeMultiIdentifier) {
    _type = -1;
    delete (MultiIdentifier*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeTemplateIdentifier) {
    _type = -1;
    delete (TemplateIdentifier*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeFunctionCallExpression) {
    _type = -1;
    delete (FunctionCallExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeTestingExpression) {
    _type = -1;
    delete (TestingExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeNumericBinaryExpression) {
    _type = -1;
    delete (NumericBinaryExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeNumericUnaryExpression) {
    _type = -1;
    delete (NumericUnaryExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeCondOperatorExpression) {
    _type = -1;
    delete (CondOperatorExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeStringExpression) {
    _type = -1;
    delete (StringExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeFloatExpression) {
    _type = -1;
    delete (FloatExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeArrayCreatingExpression) {
    _type = -1;
    delete (ArrayCreatingExpression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeAwaitExpression) {
    _type = -1;
    delete (AwaitExpression*) _ptr;
    _ptr = 0;
  }
}
Expression::Expression() : _type(-1), _ptr(0) {
}
Expression::Expression(const Expression& _value) {
  init(_value._type, _value._ptr);
}
Expression& Expression::operator=(const Expression& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool Expression::isEmpty() const {
  return _type==_TypeEmpty;
}
bool Expression::isVariableAssigment() const {
  return _type==_TypeVariableAssigment;
}
bool Expression::isCreatingExpression() const {
  return _type==_TypeCreatingExpression;
}
bool Expression::isIdentifier() const {
  return _type==_TypeIdentifier;
}
bool Expression::isArrayIdentifier() const {
  return _type==_TypeArrayIdentifier;
}
bool Expression::isMultiIdentifier() const {
  return _type==_TypeMultiIdentifier;
}
bool Expression::isTemplateIdentifier() const {
  return _type==_TypeTemplateIdentifier;
}
bool Expression::isFunctionCallExpression() const {
  return _type==_TypeFunctionCallExpression;
}
bool Expression::isTestingExpression() const {
  return _type==_TypeTestingExpression;
}
bool Expression::isNumericBinaryExpression() const {
  return _type==_TypeNumericBinaryExpression;
}
bool Expression::isNumericUnaryExpression() const {
  return _type==_TypeNumericUnaryExpression;
}
bool Expression::isCondOperatorExpression() const {
  return _type==_TypeCondOperatorExpression;
}
bool Expression::isStringExpression() const {
  return _type==_TypeStringExpression;
}
bool Expression::isFloatExpression() const {
  return _type==_TypeFloatExpression;
}
bool Expression::isArrayCreatingExpression() const {
  return _type==_TypeArrayCreatingExpression;
}
bool Expression::isAwaitExpression() const {
  return _type==_TypeAwaitExpression;
}
const VariableAssigment& Expression::asVariableAssigment() const {
  if (_type!=_TypeVariableAssigment)
    throw Exception("Expression::asVariableAssigment");
  return *(VariableAssigment*) _ptr;
}
VariableAssigment& Expression::asVariableAssigment() {
  if (_type!=_TypeVariableAssigment)
    throw Exception("Expression::asVariableAssigment");
  return *(VariableAssigment*) _ptr;
}
const CreatingExpression& Expression::asCreatingExpression() const {
  if (_type!=_TypeCreatingExpression)
    throw Exception("Expression::asCreatingExpression");
  return *(CreatingExpression*) _ptr;
}
CreatingExpression& Expression::asCreatingExpression() {
  if (_type!=_TypeCreatingExpression)
    throw Exception("Expression::asCreatingExpression");
  return *(CreatingExpression*) _ptr;
}
const IdentifierExpression& Expression::asIdentifier() const {
  if (_type!=_TypeIdentifier)
    throw Exception("Expression::asIdentifier");
  return *(IdentifierExpression*) _ptr;
}
IdentifierExpression& Expression::asIdentifier() {
  if (_type!=_TypeIdentifier)
    throw Exception("Expression::asIdentifier");
  return *(IdentifierExpression*) _ptr;
}
const ArrayIdentifier& Expression::asArrayIdentifier() const {
  if (_type!=_TypeArrayIdentifier)
    throw Exception("Expression::asArrayIdentifier");
  return *(ArrayIdentifier*) _ptr;
}
ArrayIdentifier& Expression::asArrayIdentifier() {
  if (_type!=_TypeArrayIdentifier)
    throw Exception("Expression::asArrayIdentifier");
  return *(ArrayIdentifier*) _ptr;
}
const MultiIdentifier& Expression::asMultiIdentifier() const {
  if (_type!=_TypeMultiIdentifier)
    throw Exception("Expression::asMultiIdentifier");
  return *(MultiIdentifier*) _ptr;
}
MultiIdentifier& Expression::asMultiIdentifier() {
  if (_type!=_TypeMultiIdentifier)
    throw Exception("Expression::asMultiIdentifier");
  return *(MultiIdentifier*) _ptr;
}
const TemplateIdentifier& Expression::asTemplateIdentifier() const {
  if (_type!=_TypeTemplateIdentifier)
    throw Exception("Expression::asTemplateIdentifier");
  return *(TemplateIdentifier*) _ptr;
}
TemplateIdentifier& Expression::asTemplateIdentifier() {
  if (_type!=_TypeTemplateIdentifier)
    throw Exception("Expression::asTemplateIdentifier");
  return *(TemplateIdentifier*) _ptr;
}
const FunctionCallExpression& Expression::asFunctionCallExpression() const {
  if (_type!=_TypeFunctionCallExpression)
    throw Exception("Expression::asFunctionCallExpression");
  return *(FunctionCallExpression*) _ptr;
}
FunctionCallExpression& Expression::asFunctionCallExpression() {
  if (_type!=_TypeFunctionCallExpression)
    throw Exception("Expression::asFunctionCallExpression");
  return *(FunctionCallExpression*) _ptr;
}
const TestingExpression& Expression::asTestingExpression() const {
  if (_type!=_TypeTestingExpression)
    throw Exception("Expression::asTestingExpression");
  return *(TestingExpression*) _ptr;
}
TestingExpression& Expression::asTestingExpression() {
  if (_type!=_TypeTestingExpression)
    throw Exception("Expression::asTestingExpression");
  return *(TestingExpression*) _ptr;
}
const NumericBinaryExpression& Expression::asNumericBinaryExpression() const {
  if (_type!=_TypeNumericBinaryExpression)
    throw Exception("Expression::asNumericBinaryExpression");
  return *(NumericBinaryExpression*) _ptr;
}
NumericBinaryExpression& Expression::asNumericBinaryExpression() {
  if (_type!=_TypeNumericBinaryExpression)
    throw Exception("Expression::asNumericBinaryExpression");
  return *(NumericBinaryExpression*) _ptr;
}
const NumericUnaryExpression& Expression::asNumericUnaryExpression() const {
  if (_type!=_TypeNumericUnaryExpression)
    throw Exception("Expression::asNumericUnaryExpression");
  return *(NumericUnaryExpression*) _ptr;
}
NumericUnaryExpression& Expression::asNumericUnaryExpression() {
  if (_type!=_TypeNumericUnaryExpression)
    throw Exception("Expression::asNumericUnaryExpression");
  return *(NumericUnaryExpression*) _ptr;
}
const CondOperatorExpression& Expression::asCondOperatorExpression() const {
  if (_type!=_TypeCondOperatorExpression)
    throw Exception("Expression::asCondOperatorExpression");
  return *(CondOperatorExpression*) _ptr;
}
CondOperatorExpression& Expression::asCondOperatorExpression() {
  if (_type!=_TypeCondOperatorExpression)
    throw Exception("Expression::asCondOperatorExpression");
  return *(CondOperatorExpression*) _ptr;
}
const StringExpression& Expression::asStringExpression() const {
  if (_type!=_TypeStringExpression)
    throw Exception("Expression::asStringExpression");
  return *(StringExpression*) _ptr;
}
StringExpression& Expression::asStringExpression() {
  if (_type!=_TypeStringExpression)
    throw Exception("Expression::asStringExpression");
  return *(StringExpression*) _ptr;
}
const FloatExpression& Expression::asFloatExpression() const {
  if (_type!=_TypeFloatExpression)
    throw Exception("Expression::asFloatExpression");
  return *(FloatExpression*) _ptr;
}
FloatExpression& Expression::asFloatExpression() {
  if (_type!=_TypeFloatExpression)
    throw Exception("Expression::asFloatExpression");
  return *(FloatExpression*) _ptr;
}
const ArrayCreatingExpression& Expression::asArrayCreatingExpression() const {
  if (_type!=_TypeArrayCreatingExpression)
    throw Exception("Expression::asArrayCreatingExpression");
  return *(ArrayCreatingExpression*) _ptr;
}
ArrayCreatingExpression& Expression::asArrayCreatingExpression() {
  if (_type!=_TypeArrayCreatingExpression)
    throw Exception("Expression::asArrayCreatingExpression");
  return *(ArrayCreatingExpression*) _ptr;
}
const AwaitExpression& Expression::asAwaitExpression() const {
  if (_type!=_TypeAwaitExpression)
    throw Exception("Expression::asAwaitExpression");
  return *(AwaitExpression*) _ptr;
}
AwaitExpression& Expression::asAwaitExpression() {
  if (_type!=_TypeAwaitExpression)
    throw Exception("Expression::asAwaitExpression");
  return *(AwaitExpression*) _ptr;
}

AnsiString Expression::toXML() const {
  StringBuffer _xml;
   _xml += "<Expression>";
    if (_type==0)
      _xml += "<empty/>";
    else if (_type==1)
    _xml += "<variableAssigment>" + ((VariableAssigment*) _ptr)->toXML() + "</variableAssigment>";
    else if (_type==2)
    _xml += "<creatingExpression>" + ((CreatingExpression*) _ptr)->toXML() + "</creatingExpression>";
    else if (_type==3)
    _xml += "<identifier>" + ((IdentifierExpression*) _ptr)->toXML() + "</identifier>";
    else if (_type==4)
    _xml += "<arrayIdentifier>" + ((ArrayIdentifier*) _ptr)->toXML() + "</arrayIdentifier>";
    else if (_type==5)
    _xml += "<multiIdentifier>" + ((MultiIdentifier*) _ptr)->toXML() + "</multiIdentifier>";
    else if (_type==6)
    _xml += "<templateIdentifier>" + ((TemplateIdentifier*) _ptr)->toXML() + "</templateIdentifier>";
    else if (_type==7)
    _xml += "<functionCallExpression>" + ((FunctionCallExpression*) _ptr)->toXML() + "</functionCallExpression>";
    else if (_type==8)
    _xml += "<testingExpression>" + ((TestingExpression*) _ptr)->toXML() + "</testingExpression>";
    else if (_type==9)
    _xml += "<numericBinaryExpression>" + ((NumericBinaryExpression*) _ptr)->toXML() + "</numericBinaryExpression>";
    else if (_type==10)
    _xml += "<numericUnaryExpression>" + ((NumericUnaryExpression*) _ptr)->toXML() + "</numericUnaryExpression>";
    else if (_type==11)
    _xml += "<condOperatorExpression>" + ((CondOperatorExpression*) _ptr)->toXML() + "</condOperatorExpression>";
    else if (_type==12)
    _xml += "<stringExpression>" + ((StringExpression*) _ptr)->toXML() + "</stringExpression>";
    else if (_type==13)
    _xml += "<floatExpression>" + ((FloatExpression*) _ptr)->toXML() + "</floatExpression>";
    else if (_type==14)
    _xml += "<arrayCreatingExpression>" + ((ArrayCreatingExpression*) _ptr)->toXML() + "</arrayCreatingExpression>";
    else if (_type==15)
    _xml += "<awaitExpression>" + ((AwaitExpression*) _ptr)->toXML() + "</awaitExpression>";
    else
      throw Exception("Expression::toXML(" + AnsiString(_type) + ")");
    _xml += "</Expression>";
    return _xml.get();
}

Expression::~Expression() {
  clean();
}
Expression Expression::createEmpty() {
  Expression _value;
  _value._type = _TypeEmpty;
  _value._ptr = 0;
  return _value;
}
Expression Expression::createVariableAssigment(const VariableAssigment& _param) {
  Expression _value;
  _value._type = _TypeVariableAssigment;
  _value._ptr = new VariableAssigment(_param);
  return _value;
}
Expression Expression::createCreatingExpression(const CreatingExpression& _param) {
  Expression _value;
  _value._type = _TypeCreatingExpression;
  _value._ptr = new CreatingExpression(_param);
  return _value;
}
Expression Expression::createIdentifier(const IdentifierExpression& _param) {
  Expression _value;
  _value._type = _TypeIdentifier;
  _value._ptr = new IdentifierExpression(_param);
  return _value;
}
Expression Expression::createArrayIdentifier(const ArrayIdentifier& _param) {
  Expression _value;
  _value._type = _TypeArrayIdentifier;
  _value._ptr = new ArrayIdentifier(_param);
  return _value;
}
Expression Expression::createMultiIdentifier(const MultiIdentifier& _param) {
  Expression _value;
  _value._type = _TypeMultiIdentifier;
  _value._ptr = new MultiIdentifier(_param);
  return _value;
}
Expression Expression::createTemplateIdentifier(const TemplateIdentifier& _param) {
  Expression _value;
  _value._type = _TypeTemplateIdentifier;
  _value._ptr = new TemplateIdentifier(_param);
  return _value;
}
Expression Expression::createFunctionCallExpression(const FunctionCallExpression& _param) {
  Expression _value;
  _value._type = _TypeFunctionCallExpression;
  _value._ptr = new FunctionCallExpression(_param);
  return _value;
}
Expression Expression::createTestingExpression(const TestingExpression& _param) {
  Expression _value;
  _value._type = _TypeTestingExpression;
  _value._ptr = new TestingExpression(_param);
  return _value;
}
Expression Expression::createNumericBinaryExpression(const NumericBinaryExpression& _param) {
  Expression _value;
  _value._type = _TypeNumericBinaryExpression;
  _value._ptr = new NumericBinaryExpression(_param);
  return _value;
}
Expression Expression::createNumericUnaryExpression(const NumericUnaryExpression& _param) {
  Expression _value;
  _value._type = _TypeNumericUnaryExpression;
  _value._ptr = new NumericUnaryExpression(_param);
  return _value;
}
Expression Expression::createCondOperatorExpression(const CondOperatorExpression& _param) {
  Expression _value;
  _value._type = _TypeCondOperatorExpression;
  _value._ptr = new CondOperatorExpression(_param);
  return _value;
}
Expression Expression::createStringExpression(const StringExpression& _param) {
  Expression _value;
  _value._type = _TypeStringExpression;
  _value._ptr = new StringExpression(_param);
  return _value;
}
Expression Expression::createFloatExpression(const FloatExpression& _param) {
  Expression _value;
  _value._type = _TypeFloatExpression;
  _value._ptr = new FloatExpression(_param);
  return _value;
}
Expression Expression::createArrayCreatingExpression(const ArrayCreatingExpression& _param) {
  Expression _value;
  _value._type = _TypeArrayCreatingExpression;
  _value._ptr = new ArrayCreatingExpression(_param);
  return _value;
}
Expression Expression::createAwaitExpression(const AwaitExpression& _param) {
  Expression _value;
  _value._type = _TypeAwaitExpression;
  _value._ptr = new AwaitExpression(_param);
  return _value;
}


//----------------------------------

//------------- VariableDeclarator ---------------
VariableDeclarator::VariableDeclarator(const Expression& _type, const Expression& _name, const VariableInitializer& _value) : type(_type), name(_name), value(_value) {
}
const Expression& VariableDeclarator::getType() const {
  return type;
}
Expression& VariableDeclarator::getType() {
  return type;
}
const Expression& VariableDeclarator::getName() const {
  return name;
}
Expression& VariableDeclarator::getName() {
  return name;
}
const VariableInitializer& VariableDeclarator::getValue() const {
  return value;
}
VariableInitializer& VariableDeclarator::getValue() {
  return value;
}
AnsiString VariableDeclarator::toXML() const {
  StringBuffer _xml;
  _xml += "<VariableDeclarator>";
    _xml += "<type>" + type.toXML() + "</type>";
    _xml += "<name>" + name.toXML() + "</name>";
    _xml += "<value>" + value.toXML() + "</value>";
  _xml += "</VariableDeclarator>";
  return _xml.get();
}
VariableDeclarator::~VariableDeclarator() {
}
//----------------------------------

//------------- Params ---------------
Params::Params() {
}
AnsiString Params::toXML() const {
  StringBuffer _xml;
  _xml += "<Params>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</Params>";
    return _xml.get();
}
Params::~Params() {
}
//----------------------------------

//------------- CallParams ---------------
CallParams::CallParams() {
}
AnsiString CallParams::toXML() const {
  StringBuffer _xml;
  _xml += "<CallParams>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</CallParams>";
    return _xml.get();
}
CallParams::~CallParams() {
}
//----------------------------------

//------------- TemplateIdentifier ---------------
TemplateIdentifier::TemplateIdentifier(const Expression& _type, const Expressions& _params) : type(_type), params(_params) {
}
const Expression& TemplateIdentifier::getType() const {
  return type;
}
Expression& TemplateIdentifier::getType() {
  return type;
}
const Expressions& TemplateIdentifier::getParams() const {
  return params;
}
Expressions& TemplateIdentifier::getParams() {
  return params;
}
AnsiString TemplateIdentifier::toXML() const {
  StringBuffer _xml;
  _xml += "<TemplateIdentifier>";
    _xml += "<type>" + type.toXML() + "</type>";
    _xml += "<params>" + params.toXML() + "</params>";
  _xml += "</TemplateIdentifier>";
  return _xml.get();
}
TemplateIdentifier::~TemplateIdentifier() {
}
//----------------------------------

//------------- AwaitExpression ---------------
AwaitExpression::AwaitExpression(const Expression& _exp) : exp(_exp) {
}
const Expression& AwaitExpression::getExp() const {
  return exp;
}
Expression& AwaitExpression::getExp() {
  return exp;
}
AnsiString AwaitExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<AwaitExpression>";
    _xml += "<exp>" + exp.toXML() + "</exp>";
  _xml += "</AwaitExpression>";
  return _xml.get();
}
AwaitExpression::~AwaitExpression() {
}
//----------------------------------

//------------- CreatingExpression ---------------
CreatingExpression::CreatingExpression(const Expression& _type, const CallParams& _params) : type(_type), params(_params) {
}
const Expression& CreatingExpression::getType() const {
  return type;
}
Expression& CreatingExpression::getType() {
  return type;
}
const CallParams& CreatingExpression::getParams() const {
  return params;
}
CallParams& CreatingExpression::getParams() {
  return params;
}
AnsiString CreatingExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<CreatingExpression>";
    _xml += "<type>" + type.toXML() + "</type>";
    _xml += "<params>" + params.toXML() + "</params>";
  _xml += "</CreatingExpression>";
  return _xml.get();
}
CreatingExpression::~CreatingExpression() {
}
//----------------------------------

//------------- ArrayCreatingExpression ---------------
ArrayCreatingExpression::ArrayCreatingExpression(const Expression& _arr, const Expression& _size) : arr(_arr), size(_size) {
}
const Expression& ArrayCreatingExpression::getArr() const {
  return arr;
}
Expression& ArrayCreatingExpression::getArr() {
  return arr;
}
const Expression& ArrayCreatingExpression::getSize() const {
  return size;
}
Expression& ArrayCreatingExpression::getSize() {
  return size;
}
AnsiString ArrayCreatingExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<ArrayCreatingExpression>";
    _xml += "<arr>" + arr.toXML() + "</arr>";
    _xml += "<size>" + size.toXML() + "</size>";
  _xml += "</ArrayCreatingExpression>";
  return _xml.get();
}
ArrayCreatingExpression::~ArrayCreatingExpression() {
}
//----------------------------------

//------------- FunctionCallExpression ---------------
FunctionCallExpression::FunctionCallExpression(const Expression& _name, const CallParams& _params) : name(_name), params(_params) {
}
const Expression& FunctionCallExpression::getName() const {
  return name;
}
Expression& FunctionCallExpression::getName() {
  return name;
}
const CallParams& FunctionCallExpression::getParams() const {
  return params;
}
CallParams& FunctionCallExpression::getParams() {
  return params;
}
AnsiString FunctionCallExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<FunctionCallExpression>";
    _xml += "<name>" + name.toXML() + "</name>";
    _xml += "<params>" + params.toXML() + "</params>";
  _xml += "</FunctionCallExpression>";
  return _xml.get();
}
FunctionCallExpression::~FunctionCallExpression() {
}
//----------------------------------

//------------- ArrayIdentifier ---------------
ArrayIdentifier::ArrayIdentifier(const Expression& _array, const Expression& _index) : array(_array), index(_index) {
}
const Expression& ArrayIdentifier::getArray() const {
  return array;
}
Expression& ArrayIdentifier::getArray() {
  return array;
}
const Expression& ArrayIdentifier::getIndex() const {
  return index;
}
Expression& ArrayIdentifier::getIndex() {
  return index;
}
AnsiString ArrayIdentifier::toXML() const {
  StringBuffer _xml;
  _xml += "<ArrayIdentifier>";
    _xml += "<array>" + array.toXML() + "</array>";
    _xml += "<index>" + index.toXML() + "</index>";
  _xml += "</ArrayIdentifier>";
  return _xml.get();
}
ArrayIdentifier::~ArrayIdentifier() {
}
//----------------------------------

//------------- CondOperatorExpression ---------------
CondOperatorExpression::CondOperatorExpression(const Expression& _cond, const Expression& _trueExp, const Expression& _falseExp) : cond(_cond), trueExp(_trueExp), falseExp(_falseExp) {
}
const Expression& CondOperatorExpression::getCond() const {
  return cond;
}
Expression& CondOperatorExpression::getCond() {
  return cond;
}
const Expression& CondOperatorExpression::getTrueExp() const {
  return trueExp;
}
Expression& CondOperatorExpression::getTrueExp() {
  return trueExp;
}
const Expression& CondOperatorExpression::getFalseExp() const {
  return falseExp;
}
Expression& CondOperatorExpression::getFalseExp() {
  return falseExp;
}
AnsiString CondOperatorExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<CondOperatorExpression>";
    _xml += "<cond>" + cond.toXML() + "</cond>";
    _xml += "<trueExp>" + trueExp.toXML() + "</trueExp>";
    _xml += "<falseExp>" + falseExp.toXML() + "</falseExp>";
  _xml += "</CondOperatorExpression>";
  return _xml.get();
}
CondOperatorExpression::~CondOperatorExpression() {
}
//----------------------------------

//------------- VariableAssigment ---------------
VariableAssigment::VariableAssigment(const Expression& _obj, const Expression& _value) : obj(_obj), value(_value) {
}
const Expression& VariableAssigment::getObj() const {
  return obj;
}
Expression& VariableAssigment::getObj() {
  return obj;
}
const Expression& VariableAssigment::getValue() const {
  return value;
}
Expression& VariableAssigment::getValue() {
  return value;
}
AnsiString VariableAssigment::toXML() const {
  StringBuffer _xml;
  _xml += "<VariableAssigment>";
    _xml += "<obj>" + obj.toXML() + "</obj>";
    _xml += "<value>" + value.toXML() + "</value>";
  _xml += "</VariableAssigment>";
  return _xml.get();
}
VariableAssigment::~VariableAssigment() {
}
//----------------------------------

//------------- MultiIdentifier ---------------
MultiIdentifier::MultiIdentifier(const Expression& _lex, const Expression& _rex) : lex(_lex), rex(_rex) {
}
const Expression& MultiIdentifier::getLex() const {
  return lex;
}
Expression& MultiIdentifier::getLex() {
  return lex;
}
const Expression& MultiIdentifier::getRex() const {
  return rex;
}
Expression& MultiIdentifier::getRex() {
  return rex;
}
AnsiString MultiIdentifier::toXML() const {
  StringBuffer _xml;
  _xml += "<MultiIdentifier>";
    _xml += "<lex>" + lex.toXML() + "</lex>";
    _xml += "<rex>" + rex.toXML() + "</rex>";
  _xml += "</MultiIdentifier>";
  return _xml.get();
}
MultiIdentifier::~MultiIdentifier() {
}
//----------------------------------

//------------- TestingOperator ---------------
const int TestingOperator::_TypeGr = 0;
const int TestingOperator::_TypeSm = 1;
const int TestingOperator::_TypeEgr = 2;
const int TestingOperator::_TypeEsm = 3;
const int TestingOperator::_TypeEq = 4;
const int TestingOperator::_TypeNeq = 5;
void TestingOperator::init(int type, void* ptr) {
  if (type==_TypeGr) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeSm) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeEgr) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeEsm) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeEq) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeNeq) {
    _type = type;
    _ptr = 0;
  }
}
void TestingOperator::clean() {
  if (_type==_TypeGr) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  } else if (_type==_TypeSm) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  } else if (_type==_TypeEgr) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  } else if (_type==_TypeEsm) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  } else if (_type==_TypeEq) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  } else if (_type==_TypeNeq) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("TestingOperator::clean()");
  }
}
TestingOperator::TestingOperator() : _type(-1), _ptr(0) {
}
TestingOperator::TestingOperator(const TestingOperator& _value) {
  init(_value._type, _value._ptr);
}
TestingOperator& TestingOperator::operator=(const TestingOperator& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool TestingOperator::isGr() const {
  return _type==_TypeGr;
}
bool TestingOperator::isSm() const {
  return _type==_TypeSm;
}
bool TestingOperator::isEgr() const {
  return _type==_TypeEgr;
}
bool TestingOperator::isEsm() const {
  return _type==_TypeEsm;
}
bool TestingOperator::isEq() const {
  return _type==_TypeEq;
}
bool TestingOperator::isNeq() const {
  return _type==_TypeNeq;
}

AnsiString TestingOperator::toXML() const {
  StringBuffer _xml;
   _xml += "<TestingOperator>";
    if (_type==0)
      _xml += "<gr/>";
    else if (_type==1)
      _xml += "<sm/>";
    else if (_type==2)
      _xml += "<egr/>";
    else if (_type==3)
      _xml += "<esm/>";
    else if (_type==4)
      _xml += "<eq/>";
    else if (_type==5)
      _xml += "<neq/>";
    else
      throw Exception("TestingOperator::toXML(" + AnsiString(_type) + ")");
    _xml += "</TestingOperator>";
    return _xml.get();
}

TestingOperator::~TestingOperator() {
  clean();
}
TestingOperator TestingOperator::createGr() {
  TestingOperator _value;
  _value._type = _TypeGr;
  _value._ptr = 0;
  return _value;
}
TestingOperator TestingOperator::createSm() {
  TestingOperator _value;
  _value._type = _TypeSm;
  _value._ptr = 0;
  return _value;
}
TestingOperator TestingOperator::createEgr() {
  TestingOperator _value;
  _value._type = _TypeEgr;
  _value._ptr = 0;
  return _value;
}
TestingOperator TestingOperator::createEsm() {
  TestingOperator _value;
  _value._type = _TypeEsm;
  _value._ptr = 0;
  return _value;
}
TestingOperator TestingOperator::createEq() {
  TestingOperator _value;
  _value._type = _TypeEq;
  _value._ptr = 0;
  return _value;
}
TestingOperator TestingOperator::createNeq() {
  TestingOperator _value;
  _value._type = _TypeNeq;
  _value._ptr = 0;
  return _value;
}


//----------------------------------

//------------- NumericOperator ---------------
const int NumericOperator::_TypeInc = 0;
const int NumericOperator::_TypeDec = 1;
const int NumericOperator::_TypeAdd = 2;
const int NumericOperator::_TypeSub = 3;
const int NumericOperator::_TypeMul = 4;
const int NumericOperator::_TypeDiv = 5;
const int NumericOperator::_TypeSas = 6;
const int NumericOperator::_TypeAas = 7;
void NumericOperator::init(int type, void* ptr) {
  if (type==_TypeInc) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeDec) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeAdd) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeSub) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeMul) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeDiv) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeSas) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeAas) {
    _type = type;
    _ptr = 0;
  }
}
void NumericOperator::clean() {
  if (_type==_TypeInc) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeDec) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeAdd) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeSub) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeMul) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeDiv) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeSas) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  } else if (_type==_TypeAas) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericOperator::clean()");
  }
}
NumericOperator::NumericOperator() : _type(-1), _ptr(0) {
}
NumericOperator::NumericOperator(const NumericOperator& _value) {
  init(_value._type, _value._ptr);
}
NumericOperator& NumericOperator::operator=(const NumericOperator& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool NumericOperator::isInc() const {
  return _type==_TypeInc;
}
bool NumericOperator::isDec() const {
  return _type==_TypeDec;
}
bool NumericOperator::isAdd() const {
  return _type==_TypeAdd;
}
bool NumericOperator::isSub() const {
  return _type==_TypeSub;
}
bool NumericOperator::isMul() const {
  return _type==_TypeMul;
}
bool NumericOperator::isDiv() const {
  return _type==_TypeDiv;
}
bool NumericOperator::isSas() const {
  return _type==_TypeSas;
}
bool NumericOperator::isAas() const {
  return _type==_TypeAas;
}

AnsiString NumericOperator::toXML() const {
  StringBuffer _xml;
   _xml += "<NumericOperator>";
    if (_type==0)
      _xml += "<inc/>";
    else if (_type==1)
      _xml += "<dec/>";
    else if (_type==2)
      _xml += "<add/>";
    else if (_type==3)
      _xml += "<sub/>";
    else if (_type==4)
      _xml += "<mul/>";
    else if (_type==5)
      _xml += "<div/>";
    else if (_type==6)
      _xml += "<sas/>";
    else if (_type==7)
      _xml += "<aas/>";
    else
      throw Exception("NumericOperator::toXML(" + AnsiString(_type) + ")");
    _xml += "</NumericOperator>";
    return _xml.get();
}

NumericOperator::~NumericOperator() {
  clean();
}
NumericOperator NumericOperator::createInc() {
  NumericOperator _value;
  _value._type = _TypeInc;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createDec() {
  NumericOperator _value;
  _value._type = _TypeDec;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createAdd() {
  NumericOperator _value;
  _value._type = _TypeAdd;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createSub() {
  NumericOperator _value;
  _value._type = _TypeSub;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createMul() {
  NumericOperator _value;
  _value._type = _TypeMul;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createDiv() {
  NumericOperator _value;
  _value._type = _TypeDiv;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createSas() {
  NumericOperator _value;
  _value._type = _TypeSas;
  _value._ptr = 0;
  return _value;
}
NumericOperator NumericOperator::createAas() {
  NumericOperator _value;
  _value._type = _TypeAas;
  _value._ptr = 0;
  return _value;
}


//----------------------------------

//------------- TestingExpression ---------------
TestingExpression::TestingExpression(const Expression& _lex, const Expression& _rex, const TestingOperator& _op) : lex(_lex), rex(_rex), op(_op) {
}
const Expression& TestingExpression::getLex() const {
  return lex;
}
Expression& TestingExpression::getLex() {
  return lex;
}
const Expression& TestingExpression::getRex() const {
  return rex;
}
Expression& TestingExpression::getRex() {
  return rex;
}
const TestingOperator& TestingExpression::getOp() const {
  return op;
}
TestingOperator& TestingExpression::getOp() {
  return op;
}
AnsiString TestingExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<TestingExpression>";
    _xml += "<lex>" + lex.toXML() + "</lex>";
    _xml += "<rex>" + rex.toXML() + "</rex>";
    _xml += "<op>" + op.toXML() + "</op>";
  _xml += "</TestingExpression>";
  return _xml.get();
}
TestingExpression::~TestingExpression() {
}
//----------------------------------

//------------- NumericBinaryExpression ---------------
NumericBinaryExpression::NumericBinaryExpression(const Expression& _lex, const Expression& _rex, const NumericOperator& _op) : lex(_lex), rex(_rex), op(_op) {
}
const Expression& NumericBinaryExpression::getLex() const {
  return lex;
}
Expression& NumericBinaryExpression::getLex() {
  return lex;
}
const Expression& NumericBinaryExpression::getRex() const {
  return rex;
}
Expression& NumericBinaryExpression::getRex() {
  return rex;
}
const NumericOperator& NumericBinaryExpression::getOp() const {
  return op;
}
NumericOperator& NumericBinaryExpression::getOp() {
  return op;
}
AnsiString NumericBinaryExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<NumericBinaryExpression>";
    _xml += "<lex>" + lex.toXML() + "</lex>";
    _xml += "<rex>" + rex.toXML() + "</rex>";
    _xml += "<op>" + op.toXML() + "</op>";
  _xml += "</NumericBinaryExpression>";
  return _xml.get();
}
NumericBinaryExpression::~NumericBinaryExpression() {
}
//----------------------------------

//------------- NumericUnaryExpressionKind ---------------
const int NumericUnaryExpressionKind::_TypePrefix = 0;
const int NumericUnaryExpressionKind::_TypeSufix = 1;
void NumericUnaryExpressionKind::init(int type, void* ptr) {
  if (type==_TypePrefix) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeSufix) {
    _type = type;
    _ptr = 0;
  }
}
void NumericUnaryExpressionKind::clean() {
  if (_type==_TypePrefix) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericUnaryExpressionKind::clean()");
  } else if (_type==_TypeSufix) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("NumericUnaryExpressionKind::clean()");
  }
}
NumericUnaryExpressionKind::NumericUnaryExpressionKind() : _type(-1), _ptr(0) {
}
NumericUnaryExpressionKind::NumericUnaryExpressionKind(const NumericUnaryExpressionKind& _value) {
  init(_value._type, _value._ptr);
}
NumericUnaryExpressionKind& NumericUnaryExpressionKind::operator=(const NumericUnaryExpressionKind& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool NumericUnaryExpressionKind::isPrefix() const {
  return _type==_TypePrefix;
}
bool NumericUnaryExpressionKind::isSufix() const {
  return _type==_TypeSufix;
}

AnsiString NumericUnaryExpressionKind::toXML() const {
  StringBuffer _xml;
   _xml += "<NumericUnaryExpressionKind>";
    if (_type==0)
      _xml += "<prefix/>";
    else if (_type==1)
      _xml += "<sufix/>";
    else
      throw Exception("NumericUnaryExpressionKind::toXML(" + AnsiString(_type) + ")");
    _xml += "</NumericUnaryExpressionKind>";
    return _xml.get();
}

NumericUnaryExpressionKind::~NumericUnaryExpressionKind() {
  clean();
}
NumericUnaryExpressionKind NumericUnaryExpressionKind::createPrefix() {
  NumericUnaryExpressionKind _value;
  _value._type = _TypePrefix;
  _value._ptr = 0;
  return _value;
}
NumericUnaryExpressionKind NumericUnaryExpressionKind::createSufix() {
  NumericUnaryExpressionKind _value;
  _value._type = _TypeSufix;
  _value._ptr = 0;
  return _value;
}


//----------------------------------

//------------- NumericUnaryExpression ---------------
NumericUnaryExpression::NumericUnaryExpression(const Expression& _exp, const NumericOperator& _op, const NumericUnaryExpressionKind& _kind) : exp(_exp), op(_op), kind(_kind) {
}
const Expression& NumericUnaryExpression::getExp() const {
  return exp;
}
Expression& NumericUnaryExpression::getExp() {
  return exp;
}
const NumericOperator& NumericUnaryExpression::getOp() const {
  return op;
}
NumericOperator& NumericUnaryExpression::getOp() {
  return op;
}
const NumericUnaryExpressionKind& NumericUnaryExpression::getKind() const {
  return kind;
}
NumericUnaryExpressionKind& NumericUnaryExpression::getKind() {
  return kind;
}
AnsiString NumericUnaryExpression::toXML() const {
  StringBuffer _xml;
  _xml += "<NumericUnaryExpression>";
    _xml += "<exp>" + exp.toXML() + "</exp>";
    _xml += "<op>" + op.toXML() + "</op>";
    _xml += "<kind>" + kind.toXML() + "</kind>";
  _xml += "</NumericUnaryExpression>";
  return _xml.get();
}
NumericUnaryExpression::~NumericUnaryExpression() {
}
//----------------------------------

//------------- Statement ---------------
const int Statement::_TypeEmpty = 0;
const int Statement::_TypeVariableDeclaration = 1;
const int Statement::_TypeExpressionStatement = 2;
const int Statement::_TypeBlockStatement = 3;
const int Statement::_TypeMergeStatement = 4;
const int Statement::_TypeReturnStatement = 5;
const int Statement::_TypeForStatement = 6;
const int Statement::_TypeWhileStatement = 7;
const int Statement::_TypeIfStatement = 8;
void Statement::init(int type, void* ptr) {
  if (type==_TypeEmpty) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeVariableDeclaration) {
    _type = type;
    _ptr = new VariableDeclarator(*(VariableDeclarator*) ptr);
  } else if (type==_TypeExpressionStatement) {
    _type = type;
    _ptr = new Expression(*(Expression*) ptr);
  } else if (type==_TypeBlockStatement) {
    _type = type;
    _ptr = new BlockStatement(*(BlockStatement*) ptr);
  } else if (type==_TypeMergeStatement) {
    _type = type;
    _ptr = new MergeStatement(*(MergeStatement*) ptr);
  } else if (type==_TypeReturnStatement) {
    _type = type;
    _ptr = new Expression(*(Expression*) ptr);
  } else if (type==_TypeForStatement) {
    _type = type;
    _ptr = new ForStatement(*(ForStatement*) ptr);
  } else if (type==_TypeWhileStatement) {
    _type = type;
    _ptr = new WhileStatement(*(WhileStatement*) ptr);
  } else if (type==_TypeIfStatement) {
    _type = type;
    _ptr = new IfStatement(*(IfStatement*) ptr);
  }
}
void Statement::clean() {
  if (_type==_TypeEmpty) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Statement::clean()");
  } else if (_type==_TypeVariableDeclaration) {
    _type = -1;
    delete (VariableDeclarator*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeExpressionStatement) {
    _type = -1;
    delete (Expression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeBlockStatement) {
    _type = -1;
    delete (BlockStatement*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeMergeStatement) {
    _type = -1;
    delete (MergeStatement*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeReturnStatement) {
    _type = -1;
    delete (Expression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeForStatement) {
    _type = -1;
    delete (ForStatement*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeWhileStatement) {
    _type = -1;
    delete (WhileStatement*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeIfStatement) {
    _type = -1;
    delete (IfStatement*) _ptr;
    _ptr = 0;
  }
}
Statement::Statement() : _type(-1), _ptr(0) {
}
Statement::Statement(const Statement& _value) {
  init(_value._type, _value._ptr);
}
Statement& Statement::operator=(const Statement& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool Statement::isEmpty() const {
  return _type==_TypeEmpty;
}
bool Statement::isVariableDeclaration() const {
  return _type==_TypeVariableDeclaration;
}
bool Statement::isExpressionStatement() const {
  return _type==_TypeExpressionStatement;
}
bool Statement::isBlockStatement() const {
  return _type==_TypeBlockStatement;
}
bool Statement::isMergeStatement() const {
  return _type==_TypeMergeStatement;
}
bool Statement::isReturnStatement() const {
  return _type==_TypeReturnStatement;
}
bool Statement::isForStatement() const {
  return _type==_TypeForStatement;
}
bool Statement::isWhileStatement() const {
  return _type==_TypeWhileStatement;
}
bool Statement::isIfStatement() const {
  return _type==_TypeIfStatement;
}
const VariableDeclarator& Statement::asVariableDeclaration() const {
  if (_type!=_TypeVariableDeclaration)
    throw Exception("Statement::asVariableDeclaration");
  return *(VariableDeclarator*) _ptr;
}
VariableDeclarator& Statement::asVariableDeclaration() {
  if (_type!=_TypeVariableDeclaration)
    throw Exception("Statement::asVariableDeclaration");
  return *(VariableDeclarator*) _ptr;
}
const Expression& Statement::asExpressionStatement() const {
  if (_type!=_TypeExpressionStatement)
    throw Exception("Statement::asExpressionStatement");
  return *(Expression*) _ptr;
}
Expression& Statement::asExpressionStatement() {
  if (_type!=_TypeExpressionStatement)
    throw Exception("Statement::asExpressionStatement");
  return *(Expression*) _ptr;
}
const BlockStatement& Statement::asBlockStatement() const {
  if (_type!=_TypeBlockStatement)
    throw Exception("Statement::asBlockStatement");
  return *(BlockStatement*) _ptr;
}
BlockStatement& Statement::asBlockStatement() {
  if (_type!=_TypeBlockStatement)
    throw Exception("Statement::asBlockStatement");
  return *(BlockStatement*) _ptr;
}
const MergeStatement& Statement::asMergeStatement() const {
  if (_type!=_TypeMergeStatement)
    throw Exception("Statement::asMergeStatement");
  return *(MergeStatement*) _ptr;
}
MergeStatement& Statement::asMergeStatement() {
  if (_type!=_TypeMergeStatement)
    throw Exception("Statement::asMergeStatement");
  return *(MergeStatement*) _ptr;
}
const Expression& Statement::asReturnStatement() const {
  if (_type!=_TypeReturnStatement)
    throw Exception("Statement::asReturnStatement");
  return *(Expression*) _ptr;
}
Expression& Statement::asReturnStatement() {
  if (_type!=_TypeReturnStatement)
    throw Exception("Statement::asReturnStatement");
  return *(Expression*) _ptr;
}
const ForStatement& Statement::asForStatement() const {
  if (_type!=_TypeForStatement)
    throw Exception("Statement::asForStatement");
  return *(ForStatement*) _ptr;
}
ForStatement& Statement::asForStatement() {
  if (_type!=_TypeForStatement)
    throw Exception("Statement::asForStatement");
  return *(ForStatement*) _ptr;
}
const WhileStatement& Statement::asWhileStatement() const {
  if (_type!=_TypeWhileStatement)
    throw Exception("Statement::asWhileStatement");
  return *(WhileStatement*) _ptr;
}
WhileStatement& Statement::asWhileStatement() {
  if (_type!=_TypeWhileStatement)
    throw Exception("Statement::asWhileStatement");
  return *(WhileStatement*) _ptr;
}
const IfStatement& Statement::asIfStatement() const {
  if (_type!=_TypeIfStatement)
    throw Exception("Statement::asIfStatement");
  return *(IfStatement*) _ptr;
}
IfStatement& Statement::asIfStatement() {
  if (_type!=_TypeIfStatement)
    throw Exception("Statement::asIfStatement");
  return *(IfStatement*) _ptr;
}

AnsiString Statement::toXML() const {
  StringBuffer _xml;
   _xml += "<Statement>";
    if (_type==0)
      _xml += "<empty/>";
    else if (_type==1)
    _xml += "<variableDeclaration>" + ((VariableDeclarator*) _ptr)->toXML() + "</variableDeclaration>";
    else if (_type==2)
    _xml += "<expressionStatement>" + ((Expression*) _ptr)->toXML() + "</expressionStatement>";
    else if (_type==3)
    _xml += "<blockStatement>" + ((BlockStatement*) _ptr)->toXML() + "</blockStatement>";
    else if (_type==4)
    _xml += "<mergeStatement>" + ((MergeStatement*) _ptr)->toXML() + "</mergeStatement>";
    else if (_type==5)
    _xml += "<returnStatement>" + ((Expression*) _ptr)->toXML() + "</returnStatement>";
    else if (_type==6)
    _xml += "<forStatement>" + ((ForStatement*) _ptr)->toXML() + "</forStatement>";
    else if (_type==7)
    _xml += "<whileStatement>" + ((WhileStatement*) _ptr)->toXML() + "</whileStatement>";
    else if (_type==8)
    _xml += "<ifStatement>" + ((IfStatement*) _ptr)->toXML() + "</ifStatement>";
    else
      throw Exception("Statement::toXML(" + AnsiString(_type) + ")");
    _xml += "</Statement>";
    return _xml.get();
}

Statement::~Statement() {
  clean();
}
Statement Statement::createEmpty() {
  Statement _value;
  _value._type = _TypeEmpty;
  _value._ptr = 0;
  return _value;
}
Statement Statement::createVariableDeclaration(const VariableDeclarator& _param) {
  Statement _value;
  _value._type = _TypeVariableDeclaration;
  _value._ptr = new VariableDeclarator(_param);
  return _value;
}
Statement Statement::createExpressionStatement(const Expression& _param) {
  Statement _value;
  _value._type = _TypeExpressionStatement;
  _value._ptr = new Expression(_param);
  return _value;
}
Statement Statement::createBlockStatement(const BlockStatement& _param) {
  Statement _value;
  _value._type = _TypeBlockStatement;
  _value._ptr = new BlockStatement(_param);
  return _value;
}
Statement Statement::createMergeStatement(const MergeStatement& _param) {
  Statement _value;
  _value._type = _TypeMergeStatement;
  _value._ptr = new MergeStatement(_param);
  return _value;
}
Statement Statement::createReturnStatement(const Expression& _param) {
  Statement _value;
  _value._type = _TypeReturnStatement;
  _value._ptr = new Expression(_param);
  return _value;
}
Statement Statement::createForStatement(const ForStatement& _param) {
  Statement _value;
  _value._type = _TypeForStatement;
  _value._ptr = new ForStatement(_param);
  return _value;
}
Statement Statement::createWhileStatement(const WhileStatement& _param) {
  Statement _value;
  _value._type = _TypeWhileStatement;
  _value._ptr = new WhileStatement(_param);
  return _value;
}
Statement Statement::createIfStatement(const IfStatement& _param) {
  Statement _value;
  _value._type = _TypeIfStatement;
  _value._ptr = new IfStatement(_param);
  return _value;
}


//----------------------------------

//------------- BlockStatement ---------------
BlockStatement::BlockStatement(const Statement& _body) : body(_body) {
}
const Statement& BlockStatement::getBody() const {
  return body;
}
Statement& BlockStatement::getBody() {
  return body;
}
AnsiString BlockStatement::toXML() const {
  StringBuffer _xml;
  _xml += "<BlockStatement>";
    _xml += "<body>" + body.toXML() + "</body>";
  _xml += "</BlockStatement>";
  return _xml.get();
}
BlockStatement::~BlockStatement() {
}
//----------------------------------

//------------- MergeStatement ---------------
MergeStatement::MergeStatement(const Statement& _first, const Statement& _second) : first(_first), second(_second) {
}
const Statement& MergeStatement::getFirst() const {
  return first;
}
Statement& MergeStatement::getFirst() {
  return first;
}
const Statement& MergeStatement::getSecond() const {
  return second;
}
Statement& MergeStatement::getSecond() {
  return second;
}
AnsiString MergeStatement::toXML() const {
  StringBuffer _xml;
  _xml += "<MergeStatement>";
    _xml += "<first>" + first.toXML() + "</first>";
    _xml += "<second>" + second.toXML() + "</second>";
  _xml += "</MergeStatement>";
  return _xml.get();
}
MergeStatement::~MergeStatement() {
}
//----------------------------------

//------------- ForInit ---------------
const int ForInit::_TypeExpr = 0;
const int ForInit::_TypeDecl = 1;
void ForInit::init(int type, void* ptr) {
  if (type==_TypeExpr) {
    _type = type;
    _ptr = new Expression(*(Expression*) ptr);
  } else if (type==_TypeDecl) {
    _type = type;
    _ptr = new VariableDeclarator(*(VariableDeclarator*) ptr);
  }
}
void ForInit::clean() {
  if (_type==_TypeExpr) {
    _type = -1;
    delete (Expression*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeDecl) {
    _type = -1;
    delete (VariableDeclarator*) _ptr;
    _ptr = 0;
  }
}
ForInit::ForInit() : _type(-1), _ptr(0) {
}
ForInit::ForInit(const ForInit& _value) {
  init(_value._type, _value._ptr);
}
ForInit& ForInit::operator=(const ForInit& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool ForInit::isExpr() const {
  return _type==_TypeExpr;
}
bool ForInit::isDecl() const {
  return _type==_TypeDecl;
}
const Expression& ForInit::asExpr() const {
  if (_type!=_TypeExpr)
    throw Exception("ForInit::asExpr");
  return *(Expression*) _ptr;
}
Expression& ForInit::asExpr() {
  if (_type!=_TypeExpr)
    throw Exception("ForInit::asExpr");
  return *(Expression*) _ptr;
}
const VariableDeclarator& ForInit::asDecl() const {
  if (_type!=_TypeDecl)
    throw Exception("ForInit::asDecl");
  return *(VariableDeclarator*) _ptr;
}
VariableDeclarator& ForInit::asDecl() {
  if (_type!=_TypeDecl)
    throw Exception("ForInit::asDecl");
  return *(VariableDeclarator*) _ptr;
}

AnsiString ForInit::toXML() const {
  StringBuffer _xml;
   _xml += "<ForInit>";
    if (_type==0)
    _xml += "<expr>" + ((Expression*) _ptr)->toXML() + "</expr>";
    else if (_type==1)
    _xml += "<decl>" + ((VariableDeclarator*) _ptr)->toXML() + "</decl>";
    else
      throw Exception("ForInit::toXML(" + AnsiString(_type) + ")");
    _xml += "</ForInit>";
    return _xml.get();
}

ForInit::~ForInit() {
  clean();
}
ForInit ForInit::createExpr(const Expression& _param) {
  ForInit _value;
  _value._type = _TypeExpr;
  _value._ptr = new Expression(_param);
  return _value;
}
ForInit ForInit::createDecl(const VariableDeclarator& _param) {
  ForInit _value;
  _value._type = _TypeDecl;
  _value._ptr = new VariableDeclarator(_param);
  return _value;
}


//----------------------------------

//------------- ForStatement ---------------
ForStatement::ForStatement(const ForInit& _init, const Expression& _condition, const Expression& _after, const Statement& _body) : init(_init), condition(_condition), after(_after), body(_body) {
}
const ForInit& ForStatement::getInit() const {
  return init;
}
ForInit& ForStatement::getInit() {
  return init;
}
const Expression& ForStatement::getCondition() const {
  return condition;
}
Expression& ForStatement::getCondition() {
  return condition;
}
const Expression& ForStatement::getAfter() const {
  return after;
}
Expression& ForStatement::getAfter() {
  return after;
}
const Statement& ForStatement::getBody() const {
  return body;
}
Statement& ForStatement::getBody() {
  return body;
}
AnsiString ForStatement::toXML() const {
  StringBuffer _xml;
  _xml += "<ForStatement>";
    _xml += "<init>" + init.toXML() + "</init>";
    _xml += "<condition>" + condition.toXML() + "</condition>";
    _xml += "<after>" + after.toXML() + "</after>";
    _xml += "<body>" + body.toXML() + "</body>";
  _xml += "</ForStatement>";
  return _xml.get();
}
ForStatement::~ForStatement() {
}
//----------------------------------

//------------- WhileStatement ---------------
WhileStatement::WhileStatement(const Expression& _condition, const Statement& _body) : condition(_condition), body(_body) {
}
const Expression& WhileStatement::getCondition() const {
  return condition;
}
Expression& WhileStatement::getCondition() {
  return condition;
}
const Statement& WhileStatement::getBody() const {
  return body;
}
Statement& WhileStatement::getBody() {
  return body;
}
AnsiString WhileStatement::toXML() const {
  StringBuffer _xml;
  _xml += "<WhileStatement>";
    _xml += "<condition>" + condition.toXML() + "</condition>";
    _xml += "<body>" + body.toXML() + "</body>";
  _xml += "</WhileStatement>";
  return _xml.get();
}
WhileStatement::~WhileStatement() {
}
//----------------------------------

//------------- IfElse ---------------
const int IfElse::_TypeEmpty = 0;
const int IfElse::_TypeValue = 1;
void IfElse::init(int type, void* ptr) {
  if (type==_TypeEmpty) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeValue) {
    _type = type;
    _ptr = new Statement(*(Statement*) ptr);
  }
}
void IfElse::clean() {
  if (_type==_TypeEmpty) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("IfElse::clean()");
  } else if (_type==_TypeValue) {
    _type = -1;
    delete (Statement*) _ptr;
    _ptr = 0;
  }
}
IfElse::IfElse() : _type(-1), _ptr(0) {
}
IfElse::IfElse(const IfElse& _value) {
  init(_value._type, _value._ptr);
}
IfElse& IfElse::operator=(const IfElse& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool IfElse::isEmpty() const {
  return _type==_TypeEmpty;
}
bool IfElse::isValue() const {
  return _type==_TypeValue;
}
const Statement& IfElse::asValue() const {
  if (_type!=_TypeValue)
    throw Exception("IfElse::asValue");
  return *(Statement*) _ptr;
}
Statement& IfElse::asValue() {
  if (_type!=_TypeValue)
    throw Exception("IfElse::asValue");
  return *(Statement*) _ptr;
}

AnsiString IfElse::toXML() const {
  StringBuffer _xml;
   _xml += "<IfElse>";
    if (_type==0)
      _xml += "<empty/>";
    else if (_type==1)
    _xml += "<value>" + ((Statement*) _ptr)->toXML() + "</value>";
    else
      throw Exception("IfElse::toXML(" + AnsiString(_type) + ")");
    _xml += "</IfElse>";
    return _xml.get();
}

IfElse::~IfElse() {
  clean();
}
IfElse IfElse::createEmpty() {
  IfElse _value;
  _value._type = _TypeEmpty;
  _value._ptr = 0;
  return _value;
}
IfElse IfElse::createValue(const Statement& _param) {
  IfElse _value;
  _value._type = _TypeValue;
  _value._ptr = new Statement(_param);
  return _value;
}


//----------------------------------

//------------- IfStatement ---------------
IfStatement::IfStatement(const Expression& _condition, const Statement& _body, const IfElse& _ifElse) : condition(_condition), body(_body), ifElse(_ifElse) {
}
const Expression& IfStatement::getCondition() const {
  return condition;
}
Expression& IfStatement::getCondition() {
  return condition;
}
const Statement& IfStatement::getBody() const {
  return body;
}
Statement& IfStatement::getBody() {
  return body;
}
const IfElse& IfStatement::getIfElse() const {
  return ifElse;
}
IfElse& IfStatement::getIfElse() {
  return ifElse;
}
AnsiString IfStatement::toXML() const {
  StringBuffer _xml;
  _xml += "<IfStatement>";
    _xml += "<condition>" + condition.toXML() + "</condition>";
    _xml += "<body>" + body.toXML() + "</body>";
    _xml += "<ifElse>" + ifElse.toXML() + "</ifElse>";
  _xml += "</IfStatement>";
  return _xml.get();
}
IfStatement::~IfStatement() {
}
//----------------------------------

//------------- Modifier ---------------
const int Modifier::_TypePublic = 0;
const int Modifier::_TypeStatic = 1;
const int Modifier::_TypePrivate = 2;
const int Modifier::_TypeAsync = 3;
void Modifier::init(int type, void* ptr) {
  if (type==_TypePublic) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeStatic) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypePrivate) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeAsync) {
    _type = type;
    _ptr = 0;
  }
}
void Modifier::clean() {
  if (_type==_TypePublic) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Modifier::clean()");
  } else if (_type==_TypeStatic) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Modifier::clean()");
  } else if (_type==_TypePrivate) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Modifier::clean()");
  } else if (_type==_TypeAsync) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Modifier::clean()");
  }
}
Modifier::Modifier() : _type(-1), _ptr(0) {
}
Modifier::Modifier(const Modifier& _value) {
  init(_value._type, _value._ptr);
}
Modifier& Modifier::operator=(const Modifier& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool Modifier::isPublic() const {
  return _type==_TypePublic;
}
bool Modifier::isStatic() const {
  return _type==_TypeStatic;
}
bool Modifier::isPrivate() const {
  return _type==_TypePrivate;
}
bool Modifier::isAsync() const {
  return _type==_TypeAsync;
}

AnsiString Modifier::toXML() const {
  StringBuffer _xml;
   _xml += "<Modifier>";
    if (_type==0)
      _xml += "<public/>";
    else if (_type==1)
      _xml += "<static/>";
    else if (_type==2)
      _xml += "<private/>";
    else if (_type==3)
      _xml += "<async/>";
    else
      throw Exception("Modifier::toXML(" + AnsiString(_type) + ")");
    _xml += "</Modifier>";
    return _xml.get();
}

Modifier::~Modifier() {
  clean();
}
Modifier Modifier::createPublic() {
  Modifier _value;
  _value._type = _TypePublic;
  _value._ptr = 0;
  return _value;
}
Modifier Modifier::createStatic() {
  Modifier _value;
  _value._type = _TypeStatic;
  _value._ptr = 0;
  return _value;
}
Modifier Modifier::createPrivate() {
  Modifier _value;
  _value._type = _TypePrivate;
  _value._ptr = 0;
  return _value;
}
Modifier Modifier::createAsync() {
  Modifier _value;
  _value._type = _TypeAsync;
  _value._ptr = 0;
  return _value;
}


//----------------------------------

//------------- Modifiers ---------------
Modifiers::Modifiers() {
}
AnsiString Modifiers::toXML() const {
  StringBuffer _xml;
  _xml += "<Modifiers>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</Modifiers>";
    return _xml.get();
}
Modifiers::~Modifiers() {
}
//----------------------------------

//------------- MethodDeclarator ---------------
MethodDeclarator::MethodDeclarator(const Modifiers& _modifiers, const Expression& _type, const AnsiString& _name, const Params& _params, const Statement& _statement) : modifiers(_modifiers), type(_type), name(_name), params(_params), statement(_statement) {
}
const Modifiers& MethodDeclarator::getModifiers() const {
  return modifiers;
}
Modifiers& MethodDeclarator::getModifiers() {
  return modifiers;
}
const Expression& MethodDeclarator::getType() const {
  return type;
}
Expression& MethodDeclarator::getType() {
  return type;
}
const AnsiString& MethodDeclarator::getName() const {
  return name;
}
AnsiString& MethodDeclarator::getName() {
  return name;
}
const Params& MethodDeclarator::getParams() const {
  return params;
}
Params& MethodDeclarator::getParams() {
  return params;
}
const Statement& MethodDeclarator::getStatement() const {
  return statement;
}
Statement& MethodDeclarator::getStatement() {
  return statement;
}
AnsiString MethodDeclarator::toXML() const {
  StringBuffer _xml;
  _xml += "<MethodDeclarator>";
    _xml += "<modifiers>" + modifiers.toXML() + "</modifiers>";
    _xml += "<type>" + type.toXML() + "</type>";
    _xml += "<name><![CDATA[" + AnsiString(name)+"]]></name>";
    _xml += "<params>" + params.toXML() + "</params>";
    _xml += "<statement>" + statement.toXML() + "</statement>";
  _xml += "</MethodDeclarator>";
  return _xml.get();
}
MethodDeclarator::~MethodDeclarator() {
}
//----------------------------------

//------------- ClassElem ---------------
const int ClassElem::_TypeVariableDeclarator = 0;
const int ClassElem::_TypeMethodDeclarator = 1;
void ClassElem::init(int type, void* ptr) {
  if (type==_TypeVariableDeclarator) {
    _type = type;
    _ptr = new VariableDeclarator(*(VariableDeclarator*) ptr);
  } else if (type==_TypeMethodDeclarator) {
    _type = type;
    _ptr = new MethodDeclarator(*(MethodDeclarator*) ptr);
  }
}
void ClassElem::clean() {
  if (_type==_TypeVariableDeclarator) {
    _type = -1;
    delete (VariableDeclarator*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeMethodDeclarator) {
    _type = -1;
    delete (MethodDeclarator*) _ptr;
    _ptr = 0;
  }
}
ClassElem::ClassElem() : _type(-1), _ptr(0) {
}
ClassElem::ClassElem(const ClassElem& _value) {
  init(_value._type, _value._ptr);
}
ClassElem& ClassElem::operator=(const ClassElem& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool ClassElem::isVariableDeclarator() const {
  return _type==_TypeVariableDeclarator;
}
bool ClassElem::isMethodDeclarator() const {
  return _type==_TypeMethodDeclarator;
}
const VariableDeclarator& ClassElem::asVariableDeclarator() const {
  if (_type!=_TypeVariableDeclarator)
    throw Exception("ClassElem::asVariableDeclarator");
  return *(VariableDeclarator*) _ptr;
}
VariableDeclarator& ClassElem::asVariableDeclarator() {
  if (_type!=_TypeVariableDeclarator)
    throw Exception("ClassElem::asVariableDeclarator");
  return *(VariableDeclarator*) _ptr;
}
const MethodDeclarator& ClassElem::asMethodDeclarator() const {
  if (_type!=_TypeMethodDeclarator)
    throw Exception("ClassElem::asMethodDeclarator");
  return *(MethodDeclarator*) _ptr;
}
MethodDeclarator& ClassElem::asMethodDeclarator() {
  if (_type!=_TypeMethodDeclarator)
    throw Exception("ClassElem::asMethodDeclarator");
  return *(MethodDeclarator*) _ptr;
}

AnsiString ClassElem::toXML() const {
  StringBuffer _xml;
   _xml += "<ClassElem>";
    if (_type==0)
    _xml += "<variableDeclarator>" + ((VariableDeclarator*) _ptr)->toXML() + "</variableDeclarator>";
    else if (_type==1)
    _xml += "<methodDeclarator>" + ((MethodDeclarator*) _ptr)->toXML() + "</methodDeclarator>";
    else
      throw Exception("ClassElem::toXML(" + AnsiString(_type) + ")");
    _xml += "</ClassElem>";
    return _xml.get();
}

ClassElem::~ClassElem() {
  clean();
}
ClassElem ClassElem::createVariableDeclarator(const VariableDeclarator& _param) {
  ClassElem _value;
  _value._type = _TypeVariableDeclarator;
  _value._ptr = new VariableDeclarator(_param);
  return _value;
}
ClassElem ClassElem::createMethodDeclarator(const MethodDeclarator& _param) {
  ClassElem _value;
  _value._type = _TypeMethodDeclarator;
  _value._ptr = new MethodDeclarator(_param);
  return _value;
}


//----------------------------------

//------------- ClassElems ---------------
ClassElems::ClassElems() {
}
AnsiString ClassElems::toXML() const {
  StringBuffer _xml;
  _xml += "<ClassElems>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</ClassElems>";
    return _xml.get();
}
ClassElems::~ClassElems() {
}
//----------------------------------

//------------- Class ---------------
Class::Class(const Modifiers& _modifiers, const AnsiString& _name, const ClassElems& _classElems) : modifiers(_modifiers), name(_name), classElems(_classElems) {
}
const Modifiers& Class::getModifiers() const {
  return modifiers;
}
Modifiers& Class::getModifiers() {
  return modifiers;
}
const AnsiString& Class::getName() const {
  return name;
}
AnsiString& Class::getName() {
  return name;
}
const ClassElems& Class::getClassElems() const {
  return classElems;
}
ClassElems& Class::getClassElems() {
  return classElems;
}
AnsiString Class::toXML() const {
  StringBuffer _xml;
  _xml += "<Class>";
    _xml += "<modifiers>" + modifiers.toXML() + "</modifiers>";
    _xml += "<name><![CDATA[" + AnsiString(name)+"]]></name>";
    _xml += "<classElems>" + classElems.toXML() + "</classElems>";
  _xml += "</Class>";
  return _xml.get();
}
Class::~Class() {
}
//----------------------------------

//------------- EnviromentElement ---------------
const int EnviromentElement::_TypeMethod = 0;
const int EnviromentElement::_TypeVariable = 1;
void EnviromentElement::init(int type, void* ptr) {
  if (type==_TypeMethod) {
    _type = type;
    _ptr = new MethodDeclarator(*(MethodDeclarator*) ptr);
  } else if (type==_TypeVariable) {
    _type = type;
    _ptr = new VariableDeclarator(*(VariableDeclarator*) ptr);
  }
}
void EnviromentElement::clean() {
  if (_type==_TypeMethod) {
    _type = -1;
    delete (MethodDeclarator*) _ptr;
    _ptr = 0;
  } else if (_type==_TypeVariable) {
    _type = -1;
    delete (VariableDeclarator*) _ptr;
    _ptr = 0;
  }
}
EnviromentElement::EnviromentElement() : _type(-1), _ptr(0) {
}
EnviromentElement::EnviromentElement(const EnviromentElement& _value) {
  init(_value._type, _value._ptr);
}
EnviromentElement& EnviromentElement::operator=(const EnviromentElement& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool EnviromentElement::isMethod() const {
  return _type==_TypeMethod;
}
bool EnviromentElement::isVariable() const {
  return _type==_TypeVariable;
}
const MethodDeclarator& EnviromentElement::asMethod() const {
  if (_type!=_TypeMethod)
    throw Exception("EnviromentElement::asMethod");
  return *(MethodDeclarator*) _ptr;
}
MethodDeclarator& EnviromentElement::asMethod() {
  if (_type!=_TypeMethod)
    throw Exception("EnviromentElement::asMethod");
  return *(MethodDeclarator*) _ptr;
}
const VariableDeclarator& EnviromentElement::asVariable() const {
  if (_type!=_TypeVariable)
    throw Exception("EnviromentElement::asVariable");
  return *(VariableDeclarator*) _ptr;
}
VariableDeclarator& EnviromentElement::asVariable() {
  if (_type!=_TypeVariable)
    throw Exception("EnviromentElement::asVariable");
  return *(VariableDeclarator*) _ptr;
}

AnsiString EnviromentElement::toXML() const {
  StringBuffer _xml;
   _xml += "<EnviromentElement>";
    if (_type==0)
    _xml += "<method>" + ((MethodDeclarator*) _ptr)->toXML() + "</method>";
    else if (_type==1)
    _xml += "<variable>" + ((VariableDeclarator*) _ptr)->toXML() + "</variable>";
    else
      throw Exception("EnviromentElement::toXML(" + AnsiString(_type) + ")");
    _xml += "</EnviromentElement>";
    return _xml.get();
}

EnviromentElement::~EnviromentElement() {
  clean();
}
EnviromentElement EnviromentElement::createMethod(const MethodDeclarator& _param) {
  EnviromentElement _value;
  _value._type = _TypeMethod;
  _value._ptr = new MethodDeclarator(_param);
  return _value;
}
EnviromentElement EnviromentElement::createVariable(const VariableDeclarator& _param) {
  EnviromentElement _value;
  _value._type = _TypeVariable;
  _value._ptr = new VariableDeclarator(_param);
  return _value;
}


//----------------------------------

//------------- Enviroment ---------------
Enviroment::Enviroment() {
}
AnsiString Enviroment::toXML() const {
  StringBuffer _xml;
  _xml += "<Enviroment>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</Enviroment>";
    return _xml.get();
}
Enviroment::~Enviroment() {
}
//----------------------------------

//------------- Classes ---------------
Classes::Classes() {
}
AnsiString Classes::toXML() const {
  StringBuffer _xml;
  _xml += "<Classes>";
  for (int _i=0;_i<Size();_i++)
    _xml += (*this)[_i].toXML();
    _xml += "</Classes>";
    return _xml.get();
}
Classes::~Classes() {
}
//----------------------------------

//------------- Packages ---------------
Packages::Packages() {
}
AnsiString Packages::toXML() const {
  StringBuffer _xml;
  _xml += "<Packages>";
  for (int _i=0;_i<Size();_i++)
    _xml += "<string><![CDATA[" + AnsiString((*this)[_i]) + "]]></string>";
    _xml += "</Packages>";
    return _xml.get();
}
Packages::~Packages() {
}
//----------------------------------

//------------- Imports ---------------
Imports::Imports() {
}
AnsiString Imports::toXML() const {
  StringBuffer _xml;
  _xml += "<Imports>";
  for (int _i=0;_i<Size();_i++)
    _xml += "<string><![CDATA[" + AnsiString((*this)[_i]) + "]]></string>";
    _xml += "</Imports>";
    return _xml.get();
}
Imports::~Imports() {
}
//----------------------------------

//------------- JavaFile ---------------
JavaFile::JavaFile(const Packages& _packages, const Imports& _imports, const Classes& _classes) : packages(_packages), imports(_imports), classes(_classes) {
}
const Packages& JavaFile::getPackages() const {
  return packages;
}
Packages& JavaFile::getPackages() {
  return packages;
}
const Imports& JavaFile::getImports() const {
  return imports;
}
Imports& JavaFile::getImports() {
  return imports;
}
const Classes& JavaFile::getClasses() const {
  return classes;
}
Classes& JavaFile::getClasses() {
  return classes;
}
AnsiString JavaFile::toXML() const {
  StringBuffer _xml;
  _xml += "<JavaFile>";
    _xml += "<packages>" + packages.toXML() + "</packages>";
    _xml += "<imports>" + imports.toXML() + "</imports>";
    _xml += "<classes>" + classes.toXML() + "</classes>";
  _xml += "</JavaFile>";
  return _xml.get();
}
JavaFile::~JavaFile() {
}
//----------------------------------

//------------- Lang ---------------
const int Lang::_TypeCpp = 0;
const int Lang::_TypePhp = 1;
const int Lang::_TypeCs = 2;
void Lang::init(int type, void* ptr) {
  if (type==_TypeCpp) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypePhp) {
    _type = type;
    _ptr = 0;
  } else if (type==_TypeCs) {
    _type = type;
    _ptr = 0;
  }
}
void Lang::clean() {
  if (_type==_TypeCpp) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Lang::clean()");
  } else if (_type==_TypePhp) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Lang::clean()");
  } else if (_type==_TypeCs) {
    _type = -1;
    if (_ptr!=0)
      throw Exception("Lang::clean()");
  }
}
Lang::Lang() : _type(-1), _ptr(0) {
}
Lang::Lang(const Lang& _value) {
  init(_value._type, _value._ptr);
}
Lang& Lang::operator=(const Lang& _value) {
  clean();
  init(_value._type, _value._ptr);
  return *this;
}
bool Lang::isCpp() const {
  return _type==_TypeCpp;
}
bool Lang::isPhp() const {
  return _type==_TypePhp;
}
bool Lang::isCs() const {
  return _type==_TypeCs;
}

AnsiString Lang::toXML() const {
  StringBuffer _xml;
   _xml += "<Lang>";
    if (_type==0)
      _xml += "<cpp/>";
    else if (_type==1)
      _xml += "<php/>";
    else if (_type==2)
      _xml += "<cs/>";
    else
      throw Exception("Lang::toXML(" + AnsiString(_type) + ")");
    _xml += "</Lang>";
    return _xml.get();
}

Lang::~Lang() {
  clean();
}
Lang Lang::createCpp() {
  Lang _value;
  _value._type = _TypeCpp;
  _value._ptr = 0;
  return _value;
}
Lang Lang::createPhp() {
  Lang _value;
  _value._type = _TypePhp;
  _value._ptr = 0;
  return _value;
}
Lang Lang::createCs() {
  Lang _value;
  _value._type = _TypeCs;
  _value._ptr = 0;
  return _value;
}


//----------------------------------

