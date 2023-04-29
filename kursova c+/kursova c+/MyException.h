#pragma once
#include<iostream>
#include<string>

using namespace std;

class MyException : public std::exception
{
private:
    string ex;

public:
    MyException(const string& msg);

    ~MyException();

    string getMessage() const;
};