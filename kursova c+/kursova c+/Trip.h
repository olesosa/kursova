#pragma once
#include <iostream>
#include <string>
#include"Auto.h"
#include"Driver.h"

using namespace std;

class Trip : public Auto, public Driver// клас РЕЙС з множинним успадкуванням
{
protected:
    string date; // дата рейсу
    string endpoint; // кінцевий пункт рейсу,
    double kilometrage; // кілометраж
    int transportedTons; // перевезено тонн
    int fuelForATrip; // розхід пального за рейс
    Auto* automobile; // автомобіль, що використовується на поїздку
    Driver* driver; // водій, який здійснює поїздку

public:
    Trip() : Auto(), Driver(); // конструктор без параметрів

    // конструктор з параметрами
    Trip(string date, string endpoint, double kilometrage, int transportedTons, int fuelForATrip, const Auto* automobile, const Driver* driver);

    ~Trip(); // деструктор

    // Методи встановлення значень полів даних
    void setDate(string date);
    void setEndpoint(string endpoint);
    void setKilometrage(int kilometrage);
    void setTransportedTons(int transportedTons);
    void setFuelForATrip(int fuelForATrip);

    // методи виведення значень полів
    string getDate() const;
    string getEndpoint() const;
    double getKilometrage() const;
    int getTransportedTons() const;
    int getFuelForATrip() const;

    virtual void Print();
};