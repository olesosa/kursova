#include "Driver.h"

Driver::Driver()
{
    surname = "������";
    initials = "A. O.";
    id = 1111;
    salary = 150.0;
}

Driver::Driver(string surname, string initials, int id, double salary)
{
    if ( id < 0)
    {
        throw MyException("��������� ����� ������ �� ����");
    }
    else if(salary < 0)
    {
        throw MyException("����� ������ �� ����");
    }
    else if(typeid(id) == typeid(int))
    {
        throw MyException("������ ��� ����� ������");
    }
    else if (typeid(salary) == typeid(double))
    {
        throw MyException("������ ��� ����� ��������");
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
void Driver::setId(int id) { if (id < 0) { throw MyException("��������� ����� ������ �� ����"); }
else if (typeid(id) == typeid(string)) { throw MyException("������ ��� ����� ������"); }
else { this->id = id; } }
void Driver::setSalary(double salary) { if (salary < 0) { throw MyException("����� ������ �� ����"); }
else if (typeid(salary) == typeid(string)) { throw MyException("������ ��� ������ ������"); }
else { this->salary = salary; } }

string Driver::getSurname() const { return surname; }
string Driver::getInitials() const { return initials; }
int Driver::getId() const { return id; }
double Driver::getSalary() const { return salary; }

void Driver::operator() (string surname, string initials, int id, double salary) 
{
    if (id < 0)
    {
        throw MyException("��������� ����� ������ �� ����");
    }
    else if (salary < 0)
    {
        throw MyException("����� ������ �� ����");
    }
    else if (typeid(id) == typeid(string))
    {
        throw MyException("������ ��� ����� ������");
    }
    else if (typeid(salary) == typeid(string))
    {
        throw MyException("������ ��� ����� ��������");
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
    out << "������� " << driver.surname << endl;
    out << "������� " << driver.initials << endl;
    out << "ID " << driver.id << endl;
    out << "����� " << driver.salary << endl;

    return out;
}

std::istream& operator>> (istream& in, Driver& driver)
{
    cout << "������ ������� ���� ";
    in >> driver.surname;
    cout << "������ ������� ���� ";
    in >> driver.initials;
    cout << "������ ��������� ����� ";
    in >> driver.id;
    cout << "������ ����� ���� ";
    in >> driver.salary;

    if (driver.id < 0)
    {
        throw MyException("��������� ����� ������ �� ����");
    }
    else if (driver.salary < 0)
    {
        throw MyException("����� ������ �� ����");
    }
    else if (typeid(driver.id) == typeid(int))
    {
        throw MyException("������ ��� ����� ������");
    }
    else if (typeid(driver.salary) == typeid(double))
    {
        throw MyException("������ ��� ����� ��������");
    }
    else
    {
        return in;

    }
}

void Driver::Print()
{
    cout << "���� ����� " << surname << initials << endl;
}