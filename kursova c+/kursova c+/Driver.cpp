#include "Driver.h"

Driver::Driver()
{
    surname = "Коваль";
    initials = "A. O.";
    id = 1111;
    salary = 150.0;
}

Driver::Driver(string surname, string initials, int id, double salary)
{
    if ( id < 0)
    {
        throw MyException("Табельний номер менший за нуль");
    }
    else if(salary < 0)
    {
        throw MyException("Оклад менший за нуль");
    }
    else if(typeid(id) == typeid(int))
    {
        throw MyException("Хибний тип даних номера");
    }
    else if (typeid(salary) == typeid(double))
    {
        throw MyException("Хибний тип даних зарплати");
    }
    else
    {
        this->surname = surname;
        this->initials = initials;
        this->id = id;
        this->salary = salary;
    }
}

Driver::~Driver() {}

void Driver::setSurname(string surname) { this->surname = surname; }
void Driver::setInitials(string initials) { this->initials = initials; }
void Driver::setId(int id) { if (id < 0) { throw MyException("Табельний номер менший за нуль"); }
else if (typeid(id) == typeid(string)) { throw MyException("Хибний тип даних номера"); }
else { this->id = id; } }
void Driver::setSalary(double salary) { if (salary < 0) { throw MyException("Оклад менший за нуль"); }
else if (typeid(salary) == typeid(string)) { throw MyException("Хибний тип данних номера"); }
else { this->salary = salary; } }

string Driver::getSurname() const { return surname; }
string Driver::getInitials() const { return initials; }
int Driver::getId() const { return id; }
double Driver::getSalary() const { return salary; }

void Driver::operator() (string surname, string initials, int id, double salary) 
{
    if (id < 0)
    {
        throw MyException("Табельний номер менший за нуль");
    }
    else if (salary < 0)
    {
        throw MyException("Оклад менший за нуль");
    }
    else if (typeid(id) == typeid(string))
    {
        throw MyException("Хибний тип даних номера");
    }
    else if (typeid(salary) == typeid(string))
    {
        throw MyException("Хибний тип даних зарплати");
    }
    else
    {
        this->surname = surname;
        this->initials = initials;
        this->id = id;
        this->salary = salary;
    }
}

Driver Driver::operator= (const Driver& other)
{
    if (this == &other) return *this;

    surname = other.surname;
    initials = other.initials;
    id = other.id;
    salary = other.salary;

    return *this;
}

std::ostream& operator<< (ostream& out, const Driver& driver)
{
    out << "Прізвище " << driver.surname << endl;
    out << "Ініціали " << driver.initials << endl;
    out << "ID " << driver.id << endl;
    out << "Оклад " << driver.salary << endl;

    return out;
}

std::istream& operator>> (istream& in, Driver& driver)
{
    cout << "Введіть прізвище водія ";
    in >> driver.surname;
    cout << "Введіть ініціали водія ";
    in >> driver.initials;
    cout << "Введіть табельний номер ";
    in >> driver.id;
    cout << "Введіть оклад водія ";
    in >> driver.salary;

    if (driver.id < 0)
    {
        throw MyException("Табельний номер менший за нуль");
    }
    else if (driver.salary < 0)
    {
        throw MyException("Оклад менший за нуль");
    }
    else if (typeid(driver.id) == typeid(int))
    {
        throw MyException("Хибний тип даних номера");
    }
    else if (typeid(driver.salary) == typeid(double))
    {
        throw MyException("Хибний тип даних зарплати");
    }
    else
    {
        return in;

    }
}

void Driver::Print()
{
    cout << "Водія звати " << surname << initials << endl;
}