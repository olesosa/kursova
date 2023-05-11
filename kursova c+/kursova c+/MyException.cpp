#include "MyException.h"

MyException::MyException(const string& msg) : ex(msg) 
{ }

MyException::~MyException() {}

string MyException::getMessage() const { return(ex); }

