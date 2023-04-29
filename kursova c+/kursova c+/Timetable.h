#pragma once
#include <iostream>
#include <string>
#include"Trip.h"
#include"MyIterator.h"

class Timetable // клас РОЗКЛАД
{
private:
    int size; // розмір масиву
    Trip* tripArr; // масив обєктів класу РЕЙС

public:
    Timetable(int size); // конструктор класу

    ~Timetable(); // деструктор

    double VolumeOfTransportation();
    double TotalFuel();

    MyIterator begin() { return tripArr; }

    MyIterator end() { return tripArr + size; }
};