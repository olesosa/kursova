#include"Trip.h"

using namespace std;

Trip::Trip() : Auto(), Driver()
{
    date = "17.02.2023";
    endpoint = "���";
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
if (kilometrage < 0) { throw MyException("ʳ�������� ����� 0"); }
else if (typeid(kilometrage) == typeid(string)) { throw MyException("������ ��� ����� ����������"); }
else { this->kilometrage = kilometrage; } }
void Trip::setTransportedTons(double transportedTons) { 
if (transportedTons < 0) { throw MyException("���������� ����� 0 ����"); }
else if (typeid(transportedTons) == typeid(string)) { throw MyException("������ ��� ����� ����������� ����"); }
else { this->transportedTons = transportedTons; } }
void Trip::setFuelForATrip(double fuelForATrip) {
if (fuelForATrip < 0) { throw MyException("������ �������� �� ���� ����� 0"); }
else if (typeid(fuelForATrip) == typeid(string)) { throw MyException("������ ��� ����� ������� ��������"); }
else { this->fuelForATrip = fuelForATrip; } }

string Trip::getDate() const { return date; }
string Trip::getEndpoint() const { return endpoint; }
double Trip::getKilometrage() const { return kilometrage; }
double Trip::getTransportedTons() const { return transportedTons; }
double Trip::getFuelForATrip() const { return fuelForATrip; }

std::ostream& operator<< (ostream& out, const Trip& trip)
{
    out << "���� ����� " << trip.date << endl;
    out << "ʳ������ ����� ����� " << trip.endpoint << endl;
    out << "ʳ�������� " << trip.kilometrage << endl;
    out << "���������� ���� " << trip.transportedTons << endl;
    out << "������ �������� �� ���� " << trip.fuelForATrip << endl;

    return out;
}

std::istream& operator>> (istream& in, Trip& trip)
{
    cout << "������ ���� ����� ";
    in >> trip.date;
    cout << "������ ������� ����� ����� ";
    in >> trip.endpoint;
    cout << "������ ��������� ";
    in >> trip.kilometrage;
    cout << "������ ���������� ���� ";
    in >> trip.transportedTons;
    cout << "������ ������ �������� ";
    in >> trip.fuelForATrip;

    if (trip.kilometrage < 0) { throw MyException("ʳ�������� ����� 0"); }
    else if (typeid(trip.kilometrage) == typeid(string)) { throw MyException("������ ��� ����� ����������"); }
    else if (trip.transportedTons < 0) { throw MyException("���������� ����� 0 ����"); }
    else if (typeid(trip.transportedTons) == typeid(string)) { throw MyException("������ ��� ����� ����������� ����"); }
    else if (trip.fuelForATrip < 0) { throw MyException("������ �������� �� ���� ����� 0"); }
    else if (typeid(trip.fuelForATrip) == typeid(string)) { throw MyException("������ ��� ����� ������� ��������"); }
    else
    {
        return in;
    }
}

void Trip::Print()
{
    cout << "���� ����� � " << endpoint << endl;
}