#pragma once
#include <iostream>
#include <string>
#include "Auto.h"
#include "Driver.h"
#include "MyException.h"

using namespace std;

class Trip : public Auto, public Driver// ���� ���� � ��������� �������������
{
protected:
    string date; // ���� �����
    string endpoint; // ������� ����� �����
    double kilometrage; // ���������
    double transportedTons; // ���������� ����
    double fuelForATrip; // ������ �������� �� ����

public:
    Trip(); // ����������� ��� ���������

    // ����������� � �����������
    Trip(string date, string endpoint, double kilometrage, double transportedTons, double fuelForATrip);

    ~Trip(); // ����������

    // ������ ������������ ������� ���� �����
    void setDate(string date);
    void setEndpoint(string endpoint);
    void setKilometrage(double kilometrage);
    void setTransportedTons(double transportedTons);
    void setFuelForATrip(double fuelForATrip);

    // ������ ��������� ������� ����
    string getDate() const;
    string getEndpoint() const;
    double getKilometrage() const;
    double getTransportedTons() const;
    double getFuelForATrip() const;

    friend ostream& operator<< (ostream& out, const Trip& trip);

    friend istream& operator>> (istream& in, Trip& trip);

    virtual void Print();
};