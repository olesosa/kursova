#include"Trip.h"

using namespace std;

Trip::Trip() : Auto(), Driver()
{
    date = "17.02.2023";
    endpoint = "Київ";
    kilometrage = 1000;
    transportedTons = 5;
    fuelForATrip = 50;
}

Trip::Trip(string date, string endpoint, double kilometrage, double transportedTons, double fuelForATrip)
{
    this->date = date;
    this->endpoint = endpoint;
    this->kilometrage = kilometrage;
    this->transportedTons = transportedTons;
    this->fuelForATrip = fuelForATrip;
}

Trip::~Trip(){ }

void Trip::setDate(string date) { this->date = date; }
void Trip::setEndpoint(string endpoint) { this->endpoint = endpoint; }
void Trip::setKilometrage(double kilometrage) { 
if (kilometrage < 0) { throw MyException("Кілометраж менше 0"); }
else if (typeid(kilometrage) == typeid(string)) { throw MyException("Хибний тип даних кілометража"); }
else { this->kilometrage = kilometrage; } }
void Trip::setTransportedTons(double transportedTons) { 
if (transportedTons < 0) { throw MyException("Перевезено менше 0 тонн"); }
else if (typeid(transportedTons) == typeid(string)) { throw MyException("Хибний тип даних перевезення тонн"); }
else { this->transportedTons = transportedTons; } }
void Trip::setFuelForATrip(double fuelForATrip) {
if (fuelForATrip < 0) { throw MyException("Розхід пального за рейс менше 0"); }
else if (typeid(fuelForATrip) == typeid(string)) { throw MyException("Хибний тип даних розхіда пального"); }
else { this->fuelForATrip = fuelForATrip; } }

string Trip::getDate() const { return date; }
string Trip::getEndpoint() const { return endpoint; }
double Trip::getKilometrage() const { return kilometrage; }
double Trip::getTransportedTons() const { return transportedTons; }
double Trip::getFuelForATrip() const { return fuelForATrip; }

std::ostream& operator<< (ostream& out, const Trip& trip)
{
    out << "Дата рейсу " << trip.date << endl;
    out << "Кінцевий пункт рейсу " << trip.endpoint << endl;
    out << "Кілометраж " << trip.kilometrage << endl;
    out << "Перевезено тонн " << trip.transportedTons << endl;
    out << "Розхід пального за рейс " << trip.fuelForATrip << endl;

    return out;
}

std::istream& operator>> (istream& in, Trip& trip)
{
    cout << "Введіть дата рейсу ";
    in >> trip.date;
    cout << "Введіть кінцевий пункт рейсу ";
    in >> trip.endpoint;
    cout << "Введіть кілометраж ";
    in >> trip.kilometrage;
    cout << "Введіть перевезено тонн ";
    in >> trip.transportedTons;
    cout << "Введіть розхід пального ";
    in >> trip.fuelForATrip;

    if (trip.kilometrage < 0) { throw MyException("Кілометраж менше 0"); }
    else if (typeid(trip.kilometrage) == typeid(string)) { throw MyException("Хибний тип даних кілометража"); }
    else if (trip.transportedTons < 0) { throw MyException("Перевезено менше 0 тонн"); }
    else if (typeid(trip.transportedTons) == typeid(string)) { throw MyException("Хибний тип даних перевезення тонн"); }
    else if (trip.fuelForATrip < 0) { throw MyException("Розхід пального за рейс менше 0"); }
    else if (typeid(trip.fuelForATrip) == typeid(string)) { throw MyException("Хибний тип даних розхіда пального"); }
    else
    {
        return in;
    }
}

void Trip::Print()
{
    cout << "Рейс прямує у " << endpoint << endl;
}