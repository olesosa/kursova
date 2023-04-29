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
    this->surname = surname;
    this->initials = initials;
    this->id = id;
    this->salary = salary;
}

Driver::~Driver() {}

void Driver::setSurname(string surname) { this->surname = surname; }
void Driver::setInitials(string initials) { this->initials = initials; }
void Driver::setId(int id) { this->id = id; }
void Driver::setSalary(double salary) { this->salary = salary; }

string Driver::getSurname() const { return surname; }
string Driver::getInitials() const { return initials; }
int Driver::getId() const { return id; }
double Driver::getSalary() const { return salary; }

void Driver::operator() (string surname, string initials, int id, double salary) 
{
    this->surname = surname;
    this->initials = initials;
    this->id = id;
    this->salary = salary;
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
    out << "Surname " << driver.surname << endl;
    out << "Initials " << driver.initials << endl;
    out << "ID " << driver.id << endl;
    out << "Salary " << driver.salary << endl;

    return out;
}

std::istream& operator>> (istream& in, Driver& driver)
{
    cout << "Enter surname ";
    in >> driver.surname;
    cout << "Enter initials ";
    in >> driver.initials;
    cout << "Enter ID ";
    in >> driver.id;
    cout << "Enter salary ";
    in >> driver.salary;

    return in;
}

void Driver::Print()
{
    cout << "Driver name " << surname << initials << endl;
}