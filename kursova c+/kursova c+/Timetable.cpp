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

void Timetable::VolumeOfTransportation()
{
    int vol = 0;
    for (MyIterator it = MyIterator(begin()); it != end(); it++)
    {
        vol += getTransportedTons();
    }
    cout << "��������� ��'�� ���������� " << vol << endl;
}

void Timetable::TotalFuel()
{
    int total = 0;
    for (MyIterator it = MyIterator(begin()); it != end(); it++)
    {
        total += getFuel();
    }
    cout << "������� ������� �������� " << total << endl;
}

void Timetable::setSize(int size) 
{ 
    if (size < 1)
        throw MyException("����� ����� 1");
    else if (typeid(size) != typeid(int))
        throw MyException("������ ��� ������");
    else
        this->size = size;
}

void Timetable::FillTimetable()
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> tripArr[i];
    }
}

void Timetable::PrintTimetable(int value)
{
    MyIterator it = MyIterator(begin());
    it += value;
    if (it <= end())
        std::cout << *it << std::endl;
    else
        std::cout << "Invalid number!\n";
}

void Timetable::PrintTimetable() 
{
    for (MyIterator it = MyIterator(begin()); it != end(); it++) 
    {
        std::cout << *it << std::endl;
    }
}