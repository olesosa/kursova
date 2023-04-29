#include "Auto.h"

Auto::Auto()
{
    number = "AA1234AA";
    brand = "Audi";
    loadCapacity = 1000;
    fuel = 10.0;
    location = "Ëüâiâ";
}

Auto::Auto(string number, string brand, int loadCapacity, float fuel, string location)
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
void Auto::setLoadCapacity(int loadCapacity) { this->loadCapacity = loadCapacity; }
void Auto::setFuel(float fuel) { this->fuel = fuel; }
void Auto::setLocation(string location) { this->location = location; }

string Auto::getNumber() const { return number; }
string Auto::getBrand() const { return brand; }
int Auto::getLoadCapacity() const { return loadCapacity; }
float Auto::getFuel() const { return fuel; }
string Auto::getLocation() const { return location; }

void Auto::operator() (string number, string brand, int loadCapacity, float fuel, string location)
{
    this->number = number;
    this->brand = brand;
    this->loadCapacity = loadCapacity;
    this->fuel = fuel;
    this->location = location;
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
    cout << "Enter state number ";
    in >> automobile.number;
    cout << "Enter brand ";
    in >> automobile.brand;
    cout << "Enter load capacity ";
    in >> automobile.loadCapacity;
    cout << "Enter fuel consumption ";
    in >> automobile.fuel;
    cout << "Enter registration location ";
    in >> automobile.location;

    return in;
}

std::ostream& operator<< (ostream& out, const Auto& automobile)
{
    out << "State number " << automobile.number << endl;
    out << "Brand " << automobile.brand << endl;
    out << "Load capacity " << automobile.loadCapacity << endl;
    out << "Fuel consumption " << automobile.fuel << endl;
    out << "Location " << automobile.location << endl;

    return out;
}

void Auto::Print()
{
    cout << "Brand" << brand << endl;
}