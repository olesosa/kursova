#include <iostream>
#include <Windows.h>
#include <string>
#include "Auto.h"
#include "Driver.h"
#include "Trip.h"
#include "Timetable.h"
#include "MyException.h"

using namespace std;

int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "============================================" << endl;
    cout << "|         ������� ����� ���������         |" << endl;
    cout << "|              ������� ������              |" << endl;
    cout << "============================================" << endl;
    cout << endl;

    
    Auto a1 = Auto();
    Driver d1 = Driver();
    Trip t1 = Trip();
    Timetable tt1 = Timetable(4);

    bool a = true;
    while (a)
    {
        cout << "============================================" << endl;
        cout << "| ������� ��                             |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 1 - �������� ��'��� ����� ����           |" << endl;
        cout << "| 2 - �������� ��'��� ����� ����          |" << endl;
        cout << "| 3 - �������� ��'��� ����� ����           |" << endl;
        cout << "| 4 - �������� ��'��� ����� �������        |" << endl;
        cout << "| 5 - ��������� � ��'����� ����� ����    |" << endl;
        cout << "| 6 - ��������� � ��'����� ����� ����   |" << endl;
        cout << "| 7 - ��������� � ��'����� ����� ����    |" << endl;
        cout << "| 8 - ��������� � ��'����� ����� ������� |" << endl;
        cout << "| 9 -                                      |" << endl;
        cout << "| 0 - �����                                |" << endl;
        cout << "============================================" << endl;

        int b; cin >> b;

        if (b == 1)
        {
            cout << "============================================" << endl;
            cout << "| ������� ��                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - �������� ��'��� �������������        |" << endl;
            cout << "| 2 - ������ ��������� ������              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                a1("BC8888AI", "Audi", 15, 14, "����");

                cout << "============================================" << endl;
                cout << "| ��'�� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
                std::cout << a1;
                cout << "============================================" << endl;
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;

                try
                {
                    std::cin >> a1;
                }
                catch (MyException ex)
                {
                    cout << endl << ex.getMessage() << endl;
                    std::cin >> a1;
                }

                cout << "============================================" << endl;
                cout << "| ��'�� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
                std::cout << a1;
                cout << "============================================" << endl;
            }
        }
        else if (b == 2)
        {
            cout << "============================================" << endl;
            cout << "| ������� ��                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - �������� ��'��� �������������        |" << endl;
            cout << "| 2 - ������ ��������� ������              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                d1("�������", "�.�", 1111, 15000);

                cout << "============================================" << endl;
                cout << "| ��'�� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
                std::cout << d1;

                cout << "============================================" << endl;
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                try
                {
                    std::cin >> d1;
                }
                catch (MyException ex)
                {
                    cout << endl << ex.getMessage() << endl;
                    std::cin >> d1;
                }

                cout << "============================================" << endl;
                cout << "| ��'�� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
                std::cout << d1;
                cout << "============================================" << endl;
            }
        }
        else if (b == 3)
        {
            cout << "============================================" << endl;
            try
            {
                std::cin >> t1;
            }
            catch (MyException ex)
            {
                cout << endl << ex.getMessage() << endl;
                std::cin >> t1;
            }

            cout << "============================================" << endl;
            cout << "| ��'�� ������ �������� !                |" << endl;
            cout << "============================================" << endl;
            std::cout << t1;
            cout << "============================================" << endl;
        }
        else if (b == 4)
        {
            cout << "============================================" << endl;
            cout << "| ������ ������� ����� � �������      |" << endl;
            cout << "============================================" << endl;

            int s; cin >> s;
            try
            {
                tt1.setSize(s);
                tt1.FillTimetable();
            }
            catch (MyException ex)
            {
                cout << endl << ex.getMessage() << endl;
                tt1.FillTimetable();
            }
            tt1.PrintTimetable();;
            cout << "============================================" << endl;
            cout << "| ��'�� ������ �������� !                |" << endl;
            cout << "============================================" << endl;
        }
        else if (b == 5)
        {
            cout << "============================================" << endl;
            cout << "| �����i�� �i�                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ����������� ����������               |" << endl;
            cout << "| 2 - ���������� ����������                |" << endl;
            cout << "| 3 - ���������� ��� �����                 |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| �����i�� �i�                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ������� ��� ����������               |" << endl;
                cout << "| 2 - ������� ��������� �����              |" << endl;
                cout << "| 3 - ������� ����� ���������             |" << endl;
                cout << "| 4 - ������� ����������������           |" << endl;
                cout << "| 5 - ������� ����� ������ ��������        |" << endl;
                cout << "| 6 - ������� ���� ��������               |" << endl;
                cout << "============================================" << endl;

                int d; cin >> d;
                if (d == 1)
                {
                    std::cout << a1;
                }
                else if (d == 2)
                {
                    cout << a1.getNumber() << endl;
                }
                else if (d == 3)
                {
                    cout << a1.getBrand() << endl;
                }
                else if (d == 4)
                {
                    cout << a1.getLoadCapacity() << endl;
                }
                else if (d == 5)
                {
                    cout << a1.getFuel() << endl;
                }
                else if (d == 6)
                {
                    cout << a1.getLocation() << endl;
                }
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                cout << "| �� �� ������ ����������                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ���������� ��� ����������            |" << endl;
                cout << "| 2 - ���������� ��������� �����           |" << endl;
                cout << "| 3 - ���������� ����� ���������          |" << endl;
                cout << "| 4 - ���������� ����������������        |" << endl;
                cout << "| 5 - ���������� ����� ������ ��������     |" << endl;
                cout << "| 6 - ���������� ���� ��������            |" << endl;
                cout << "============================================" << endl;

                string num, br; int lCap; float ful; string loc;
                int e; cin >> e;
                if (e == 1)
                {
                    try
                    {
                        std::cin >> a1;
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        std::cin >> a1;
                    }
                }
                else if (e == 2)
                {
                    cout << "������ ��������� ����� "; cin >> num;
                    try
                    {
                        a1.setNumber(num);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "������ ��������� ����� "; cin >> num;
                        a1.setNumber(num);
                    }
                }
                else if (e == 3)
                {
                    cout << "������ ����� ��������� "; cin >> br;
                    try
                    {
                        a1.setBrand(br);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "������ ����� ��������� "; cin >> br;
                        a1.setBrand(br);
                    }
                }
                else if (e == 4)
                {
                    cout << "������ ���������������� "; cin >> lCap;
                    try
                    {
                        a1.setLoadCapacity(lCap);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "������ ���������������� "; cin >> lCap;
                        a1.setLoadCapacity(lCap);
                    }
                }
                else if (e == 5)
                {
                    cout << "������ ����� ������ �������� "; cin >> ful;
                    try
                    {
                        a1.setFuel(ful);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "������ ����� ������ �������� "; cin >> ful;
                        a1.setFuel(ful);
                    }
                }
                else if (e == 6)
                {
                    cout << "������ ���� �������� "; cin >> loc;
                    try
                    {
                        a1.setLocation(loc);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "������ ���� �������� "; cin >> loc;
                        a1.setLocation(loc);
                    }
                }
            }
            else if (c == 3)
            {
                a1.Print();
            }
        }
        else if (b == 6)
        {
            cout << "============================================" << endl;
            cout << "| �����i�� ��                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ����������� ����������               |" << endl;
            cout << "| 2 - ���������� ����������                |" << endl;
            cout << "| 3 - ��'� ����                            |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| �����i�� ��                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ������� ��� ����������               |" << endl;
                cout << "| 2 - ������� �������                     |" << endl;
                cout << "| 3 - ������� �������                     |" << endl;
                cout << "| 4 - ������� ��������� �����              |" << endl;
                cout << "| 5 - ������� �����                        |" << endl;
                cout << "============================================" << endl;

                int d; cin >> d;
                if (d == 1)
                {
                    std::cout << d1;
                }
                else if (d == 2)
                {
                    cout << d1.getSurname() << endl;
                }
                else if (d == 3)
                {
                    cout << d1.getInitials() << endl;
                }
                else if (d == 4)
                {
                    cout << d1.getId() << endl;
                }
                else if (d == 5)
                {
                    cout << d1.getSalary() << endl;
                }
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                cout << "| �� �� ������ ����������                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ���������� ��� ����������            |" << endl;
                cout << "| 2 - ���������� �������                  |" << endl;
                cout << "| 3 - ���������� �������                  |" << endl;
                cout << "| 4 - ���������� ��������� �����           |" << endl;
                cout << "| 5 - ���������� �����                     |" << endl;
                cout << "============================================" << endl;

                string sur, in; int id; double sal;
                int e; cin >> e;
                if (e == 1)
                {
                    std::cin >> d1;
                }
                else if (e == 2)
                {
                    cout << "������ ������� ���� ";
                    cin >> sur;
                    d1.setSurname(sur);
                }
                else if (e == 3)
                {
                    cout << "����i�� ������� ���� ";
                    cin >> in;
                    d1.setInitials(in);
                }
                else if (e == 4)
                {
                    cout << "����i�� ��������� ����� ";
                    cin >> id;
                    d1.setId(id);
                }
                else if (e == 5)
                {
                    cout << "����i�� ����� ���� ";
                    cin >> sal;
                    d1.setSalary(sal);
                }
            }
            else if (c == 3)
            {
                d1.Print();
            }
        }
        else if (b == 7)
        {
            cout << "============================================" << endl;
            cout << "| �����i�� �i�                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ����������� ����������               |" << endl;
            cout << "| 2 - ���������� ����������                |" << endl;
            cout << "| 3 - ������ ���� ����� ����              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| �����i�� �i�                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ������� ��� ����������               |" << endl;
                cout << "| 2 - ������� ��������                     |" << endl;
                cout << "| 3 - ������� ������� ����� �����         |" << endl;
                cout << "| 4 - ������� ���������                   |" << endl;
                cout << "| 5 - ������� ���������� ����              |" << endl;
                cout << "| 6 - ������� ������ �������� �� ����      |" << endl;
                cout << "============================================" << endl;

                int d; cin >> d;
                if (d == 1)
                {
                    cout << t1.getDate() << endl;
                    cout << t1.getEndpoint() << endl;
                    cout << t1.getKilometrage() << endl;
                    cout << t1.getTransportedTons() << endl;
                    cout << t1.getFuelForATrip() << endl;
                }
                else if (d == 2)
                {
                    cout << t1.getDate() << endl;
                }
                else if (d == 3)
                {
                    cout << t1.getEndpoint() << endl;
                }
                else if (d == 4)
                {
                    cout << t1.getKilometrage() << endl;
                }
                else if (d == 5)
                {
                    cout << t1.getTransportedTons() << endl;
                }
                else if (d == 6)
                {
                    cout << t1.getFuelForATrip() << endl;
                }
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                cout << "| �� �� ������ ����������                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ���������� ��������                  |" << endl;
                cout << "| 2 - ���������� ������� ����� �����      |" << endl;
                cout << "| 3 - ���������� ���������                |" << endl;
                cout << "| 4 - ���������� ���������� ����           |" << endl;
                cout << "| 5 - ���������� ������ �������� �� ����   |" << endl;
                cout << "============================================" << endl;

                string dat, endp; double kil; int trans, ful;
                int e; cin >> e;
                if (e == 1)
                {
                    cout << "����i�� ���� ����� ";
                    cin >> dat;
                    t1.setDate(dat);
                }
                else if (e == 2)
                {
                    cout << "����i�� ������� ����� �����";
                    cin >> endp;
                    t1.setEndpoint(endp);
                }
                else if (e == 3)
                {
                    cout << "����i�� ��������� ";
                    cin >> kil;
                    t1.setKilometrage(kil);
                }
                else if (e == 4)
                {
                    cout << "����i�� ����������� ���� ";
                    cin >> trans;
                    t1.setTransportedTons(trans);
                }
                else if (e == 5)
                {
                    cout << "����i�� ������ �������� �� ����� ";
                    cin >> ful;
                    t1.setFuelForATrip(ful);
                }
            }
            else if (c == 3)
            {
                t1.Print();
            }
        }
        else if (b == 8)
        {
            cout << "============================================" << endl;
            cout << "| �����i�� �i�                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ������� �������                      |" << endl;
            cout << "| 2 - ������� ���� ����������              |" << endl;
            cout << "| 3 - ��������� ��'�� ����������           |" << endl;
            cout << "| 4 - ������� ������� ��������            |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                tt1.PrintTimetable();
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                cout << "| ������ ������� ����� � �������      |" << endl;
                cout << "============================================" << endl;

                int s; cin >> s;
                try
                {
                    tt1.setSize(s);
                    tt1.FillTimetable();
                }
                catch (MyException ex)
                {
                    cout << endl << ex.getMessage() << endl;
                }
            }
            else if (c == 3)
            {
                tt1.VolumeOfTransportation();
            }
            else if (c == 4)
            {
                tt1.TotalFuel();
            }
        }
        else if (b == 9)
        {

        }
        else if (b == 0)
        {
            a = false;
        }
    }

    system("pause");
    return 0;
}