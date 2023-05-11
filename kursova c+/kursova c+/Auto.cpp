#include "Auto.h"

Auto::Auto()
{
    number = "AA1234AA";
    brand = "Audi";
    loadCapacity = 1000;
    fuel = 10.0;
    location = "Львiв";
}

Auto::Auto(string number, string brand, double loadCapacity, double fuel, string location)
{
    this->number = number;
    this->brand = brand;
    this->loadCapacity = loadCapacity;
    this->fuel = fuel;
    this->location = location;
}

Auto::~Auto() {}

void Auto::setNumber(string number) { this->number = number; }
void Auto::setBrand(string brand) { this->brand = brand; }
void Auto::setLoadCapacity(double loadCapacity) { 
if (loadCapacity < 0) { throw MyException("Вантажопідйомность менша за нуль"); }
else if (typeid(loadCapacity) == typeid(string)) { throw MyException("Хибний тип даних вантажопідйомності"); }
else { this->loadCapacity = loadCapacity; } }
void Auto::setFuel(double fuel) {  
if (fuel < 0){ throw MyException("Норма витрат пального менша за нуль"); }
else  if (typeid(fuel) == typeid(string)) { throw MyException("Хибний тип даних норми витрат пального"); }
else { this->fuel = fuel; } }
void Auto::setLocation(string location) { this->location = location; }

string Auto::getNumber() const { return number; }
string Auto::getBrand() const { return brand; }
double Auto::getLoadCapacity() const { return loadCapacity; }
double Auto::getFuel() const { return fuel; }
string Auto::getLocation() const { return location; }

void Auto::operator() (string number, string brand, double loadCapacity, double fuel, string location)
{
    setNumber(number);
    setBrand(brand);
    setLoadCapacity(loadCapacity);
    setFuel(fuel);
    setLocation(location);
}

Auto Auto::operator= (const Auto& other)
{
    if (this == &other)
    {
        return *this;
    }

    this->number = other.number;
    this->brand = other.brand;
    this->loadCapacity = other.loadCapacity;
    this->fuel = other.fuel;
    this->location = other.location;

    return *this;
}

std::istream& operator>> (istream& in, Auto& automobile)
{
    cout << "Виберiть номер ";
    in >> automobile.number;
    cout << "Виберiть марку автомобіля ";
    in >> automobile.brand;
    cout << "Виберiть вантажопідйомність ";
    in >> automobile.loadCapacity;
    cout << "Виберiть норму витрат пального ";
    in >> automobile.fuel;
    cout << "Виберiть місце приписки ";
    in >> automobile.location;

    if (automobile.loadCapacity < 0)
    {
        throw MyException("Вантажопідйомность менша за нуль");
    }
    else if (automobile.fuel < 0)
    {
        throw MyException("Норма витрат пального менша за нуль");
    }
    else if (typeid(automobile.loadCapacity) == typeid(string))
    {
        throw MyException("Хибний тип даних вантажопідйомності");
    }
    else  if (typeid(automobile.fuel) == typeid(string))
    {
        throw MyException("Хибний тип даних норми витрат пального");
    }
    else
    {
        return in;

    }
}

std::ostream& operator<< (ostream& out, const Auto& automobile)
{
    out << "Нормер " << automobile.number << endl;
    out << "Марка " << automobile.brand << endl;
    out << "Вантажопідйомність " << automobile.loadCapacity << endl;
    out << "Норма витрат пального " << automobile.fuel << endl;
    out << "Місце приписки " << automobile.location << endl;

    return out;
}

void Auto::Print()
{
    cout << "Машина марки " << brand << endl;
}