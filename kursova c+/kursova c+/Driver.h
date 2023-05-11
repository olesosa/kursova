#pragma once
#include <iostream>
#include <string>
#include "MyException.h"

using namespace std;

class Driver // ���� ��Ĳ�
{
protected:
    string surname; // �������
    string initials; // �������
    int id; // ��������� �����
    double salary; // �����

public:
    Driver(); // ����������� ��� ���������

    // ����������� � �����������
    Driver(string surname, string initials, int id, double salary);

    ~Driver(); // ����������


    // ������ ������������ ������� ����
    void setSurname(string surname);
    void setInitials(string initials);
    void setId(int id);
    void setSalary(double salary);

    // ������ ��������� ������� ����
    string getSurname() const;
    string getInitials() const;
    int getId() const;
    double getSalary() const;

    // �������������� ��������
    void operator() (string surname, string initials, int id, double salary);

    Driver operator= (const Driver& other);

    friend ostream& operator<< (ostream& out, const Driver& driver);

    friend istream& operator>> (istream& in, Driver& driver);

    virtual void Print();
};