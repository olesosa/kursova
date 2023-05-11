#pragma once
#include <iostream>
#include <string>
#include "MyException.h"

using namespace std;

class Auto // клас АВТОМОБІЛЬ
{
protected:
    string number; // державний номер автомобіля
    string brand; // марка автомобіля
    double loadCapacity; // вантажопідйомність
    double fuel; // норма витрат пального
    string location; // місце приписки

public:
    Auto(); // конструктор без параметрів

    // конструктор з параметрами
    Auto(string number, string brand, double loadCapacity, double fuel,string location);

    ~Auto(); // деструктор

    // методи встановлення значень полів
    void setNumber(string number);
    void setBrand(string brand);
    void setLoadCapacity(double loadCapacity);
    void setFuel(double fuel);
    void setLocation(string location);

    // методи виведення значень полів
    string getNumber() const;
    string getBrand() const;
    double getLoadCapacity() const;
    double getFuel() const;
    string getLocation() const;

    // перевантаження операцій
    void operator() (string number, string brand, double loadCapacity, double fuel, string location);

    Auto operator= (const Auto& other);

    friend std::istream& operator>> (istream& in, Auto& automobile);

    friend std::ostream& operator<< (ostream& out, const Auto& automobile);

    virtual void Print();
};