#include"Trip.h"

using namespace std;

Trip::Trip() : Auto(), Driver()
{
    date = "17.02.2023";
    endpoint = "Êè¿â";
    kilometrage = 1000.0;
    transportedTons = 5;
    fuelForATrip = 50;
    automobile = nullptr;
    driver = nullptr;
}

Trip::Trip(string date, string endpoint, double kilometrage, int transportedTons, int fuelForATrip, const Auto* automobile, const Driver* driver)
{
    this->date = date;
    this->endpoint = endpoint;
    this->kilometrage = kilometrage;
    this->transportedTons = transportedTons;
    this->fuelForATrip = fuelForATrip;
    this->automobile;
    this->driver;
}

Trip::~Trip()
{
    delete automobile;
    delete driver;
}

void Trip::setDate(string date) { this->date = date; }
void Trip::setEndpoint(string endpoint) { this->endpoint = endpoint; }
void Trip::setKilometrage(int kilometrage) { this->kilometrage = kilometrage; }
void Trip::setTransportedTons(int transportedTons) { this->transportedTons = transportedTons; }
void Trip::setFuelForATrip(int fuelForATrip) { this->fuelForATrip = fuelForATrip; }

string Trip::getDate() const { return date; }
string Trip::getEndpoint() const { return endpoint; }
double Trip::getKilometrage() const { return kilometrage; }
int Trip::getTransportedTons() const { return transportedTons; }
int Trip::getFuelForATrip() const { return fuelForATrip; }

void Trip::Print()
{
    cout << "Place of Endpoint " << endpoint << endl;
}