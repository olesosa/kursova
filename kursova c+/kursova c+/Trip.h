#pragma once
#include <iostream>
#include <string>
#include"Auto.h"
#include"Driver.h"

using namespace std;

class Trip : public Auto, public Driver// ���� ���� � ��������� �������������
{
protected:
    string date; // ���� �����
    string endpoint; // ������� ����� �����,
    double kilometrage; // ���������
    int transportedTons; // ���������� ����
    int fuelForATrip; // ������ �������� �� ����
    Auto* automobile; // ���������, �� ��������������� �� ������
    Driver* driver; // ����, ���� ������� ������

public:
    Trip() : Auto(), Driver(); // ����������� ��� ���������

    // ����������� � �����������
    Trip(string date, string endpoint, double kilometrage, int transportedTons, int fuelForATrip, const Auto* automobile, const Driver* driver);

    ~Trip(); // ����������

    // ������ ������������ ������� ���� �����
    void setDate(string date);
    void setEndpoint(string endpoint);
    void setKilometrage(int kilometrage);
    void setTransportedTons(int transportedTons);
    void setFuelForATrip(int fuelForATrip);

    // ������ ��������� ������� ����
    string getDate() const;
    string getEndpoint() const;
    double getKilometrage() const;
    int getTransportedTons() const;
    int getFuelForATrip() const;

    virtual void Print();
};