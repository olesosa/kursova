#pragma once
#include <iostream>
#include <string>
#include "MyException.h"

using namespace std;

class Driver // клас ВОДІЙ
{
protected:
    string surname; // прізвище
    string initials; // ініціали
    int id; // табельний номер
    double salary; // оклад

public:
    Driver(); // конструктор без параметрів

    // конструктор з параметрами
    Driver(string surname, string initials, int id, double salary);

    ~Driver(); // деструктор


    // методи встановлення значень полів
    void setSurname(string surname);
    void setInitials(string initials);
    void setId(int id);
    void setSalary(double salary);

    // методи виведення значень полів
    string getSurname() const;
    string getInitials() const;
    int getId() const;
    double getSalary() const;

    // перевантаження операцій
    void operator() (string surname, string initials, int id, double salary);

    Driver operator= (const Driver& other);

    friend ostream& operator<< (ostream& out, const Driver& driver);

    friend istream& operator>> (istream& in, Driver& driver);

    virtual void Print();
};