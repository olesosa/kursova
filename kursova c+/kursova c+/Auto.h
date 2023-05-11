#pragma once
#include <iostream>
#include <string>
#include "MyException.h"

using namespace std;

class Auto // ���� ����������
{
protected:
    string number; // ��������� ����� ���������
    string brand; // ����� ���������
    double loadCapacity; // ����������������
    double fuel; // ����� ������ ��������
    string location; // ���� ��������

public:
    Auto(); // ����������� ��� ���������

    // ����������� � �����������
    Auto(string number, string brand, double loadCapacity, double fuel,string location);

    ~Auto(); // ����������

    // ������ ������������ ������� ����
    void setNumber(string number);
    void setBrand(string brand);
    void setLoadCapacity(double loadCapacity);
    void setFuel(double fuel);
    void setLocation(string location);

    // ������ ��������� ������� ����
    string getNumber() const;
    string getBrand() const;
    double getLoadCapacity() const;
    double getFuel() const;
    string getLocation() const;

    // �������������� ��������
    void operator() (string number, string brand, double loadCapacity, double fuel, string location);

    Auto operator= (const Auto& other);

    friend std::istream& operator>> (istream& in, Auto& automobile);

    friend std::ostream& operator<< (ostream& out, const Auto& automobile);

    virtual void Print();
};