#pragma once
#include <iostream>
#include <string>
#include"Trip.h"
#include"MyIterator.h"

class Timetable // ���� �������
{
private:
    int size; // ����� ������
    Trip* tripArr; // ����� ����� ����� ����

public:
    Timetable(int size); // ����������� �����

    ~Timetable(); // ����������

    double VolumeOfTransportation();
    double TotalFuel();

    MyIterator begin() { return tripArr; }

    MyIterator end() { return tripArr + size; }
};