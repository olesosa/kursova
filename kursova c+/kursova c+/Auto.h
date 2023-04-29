#pragma once
#include <iostream>
#include <string>

using namespace std;

class Auto // ���� ����������
{
protected:
    string number; // ��������� ����� ���������
    string brand; // ����� ���������
    int loadCapacity; // ����������������
    float fuel; // ����� ������ ��������
    string location; // ���� ��������

public:
    Auto(); // ����������� ��� ���������

    // ����������� � �����������
    Auto(string number, string brand, int loadCapacity, float fuel,string location);

    ~Auto(); // ����������

    // ������ ������������ ������� ����
    void setNumber(string number);
    void setBrand(string brand);
    void setLoadCapacity(int loadCapacity);
    void setFuel(float fuel);
    void setLocation(string location);

    // ������ ��������� ������� ����
    string getNumber() const;
    string getBrand() const;
    int getLoadCapacity() const;
    float getFuel() const;
    string getLocation() const;

    // �������������� ��������
    void operator() (string number, string brand, int loadCapacity, float fuel, string location);

    Auto operator= (const Auto& other);

    friend std::istream& operator>> (istream& in, Auto& automobile);

    friend std::ostream& operator<< (ostream& out, const Auto& automobile);

    virtual void Print();
};