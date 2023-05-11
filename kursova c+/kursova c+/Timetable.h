#pragma once
#include <iostream>
#include <string>
#include "Trip.h"
#include "MyIterator.h"
#include "MyException.h"

class Timetable : public Trip // клас РОЗКЛАД
{
private:
    int size; // розмір масиву
    Trip* tripArr; // масив обєктів класу РЕЙС

public:
    Timetable(int size); // конструктор класу

    ~Timetable(); // деструктор

    void VolumeOfTransportation();
    void TotalFuel();
    MyIterator begin() { return tripArr; }
    MyIterator end() { return tripArr + size; }

    void setSize(int size);
    void FillTimetable();
    void PrintTimetable();
    void PrintTimetable(int value);
};