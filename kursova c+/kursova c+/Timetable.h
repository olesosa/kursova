#pragma once
#include <iostream>
#include <string>
#include "Trip.h"
#include "MyIterator.h"
#include "MyException.h"

class Timetable : public Trip // ���� �������
{
private:
    int size; // ����� ������
    Trip* tripArr; // ����� ����� ����� ����

public:
    Timetable(int size); // ����������� �����

    ~Timetable(); // ����������

    void VolumeOfTransportation();
    void TotalFuel();
    MyIterator begin() { return tripArr; }
    MyIterator end() { return tripArr + size; }

    void setSize(int size);
    void FillTimetable();
    void PrintTimetable();
    void PrintTimetable(int value);
};