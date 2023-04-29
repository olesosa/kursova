#include "Timetable.h"

using namespace std;

Timetable::Timetable(int size)
{
    this->size = size;
    tripArr = new Trip[size];
}

Timetable::~Timetable()
{
    delete tripArr;
}

double Timetable::VolumeOfTransportation()
{
    int vol = 0;
    for (MyIterator it = begin(); it != end(); it++)
    {
        vol += it->getTransportedTons();
    }
    cout << "Total volume of transportation " << vol << endl;
}

double Timetable::TotalFuel()
{
    int total = 0;
    for (MyIterator it = begin(); it != end(); it++)
    {
        total += it->getFuel();
    }
    cout << "Total fuel " << total << endl;
}