#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto // клас АВТОМОБІЛЬ
{
protected:
    string number; // державний номер автомобіля
    string brand; // марка автомобіля
    int loadCapacity; // вантажопідйомність
    float fuel; // норма витрат пального
    string location; // місце приписки

public:
    Auto(); // конструктор без параметрів

    // конструктор з параметрами
    Auto(string number, string brand, int loadCapacity, float fuel,string location);

    ~Auto(); // деструктор

    // методи встановлення значень полів
    void setNumber(string number);
    void setBrand(string brand);
    void setLoadCapacity(int loadCapacity);
    void setFuel(float fuel);
    void setLocation(string location);

    // методи виведення значень полів
    string getNumber() const;
    string getBrand() const;
    int getLoadCapacity() const;
    float getFuel() const;
    string getLocation() const;

    // перевантаження операцій
    void operator() (string number, string brand, int loadCapacity, float fuel, string location);

    Auto operator= (const Auto& other);

    friend std::istream& operator>> (istream& in, Auto& automobile);

    friend std::ostream& operator<< (ostream& out, const Auto& automobile);

    virtual void Print();
};