#pragma once
#include <iostream>
#include <string>
#include "Auto.h"
#include "Driver.h"
#include "MyException.h"

using namespace std;

class Trip : public Auto, public Driver// клас РЕЙС з множинним успадкуванням
{
protected:
    string date; // дата рейсу
    string endpoint; // кінцевий пункт рейсу
    double kilometrage; // кілометраж
    double transportedTons; // перевезено тонн
    double fuelForATrip; // розхід пального за рейс

public:
    Trip(); // конструктор без параметрів

    // конструктор з параметрами
    Trip(string date, string endpoint, double kilometrage, double transportedTons, double fuelForATrip);

    ~Trip(); // деструктор

    // Методи встановлення значень полів даних
    void setDate(string date);
    void setEndpoint(string endpoint);
    void setKilometrage(double kilometrage);
    void setTransportedTons(double transportedTons);
    void setFuelForATrip(double fuelForATrip);

    // методи виведення значень полів
    string getDate() const;
    string getEndpoint() const;
    double getKilometrage() const;
    double getTransportedTons() const;
    double getFuelForATrip() const;

    friend ostream& operator<< (ostream& out, const Trip& trip);

    friend istream& operator>> (istream& in, Trip& trip);

    virtual void Print();
};