#include <iostream>
#include <string>
#include "Auto.cpp"
#include "Driver.cpp"
#include "Trip.cpp"
#include "Timetable.cpp"
#include "MyException.cpp"

using namespace std;

Auto CreateAuto()
{
    string num, br; int lCap; float ful; string loc;
    cout << "����i�� ����� �������i�� ";
    cin >> num;
    cout << "����i�� ����� �������i�� ";
    cin >> br;
    cout << "����i�� ��������i�����i��� �������i�� ";
    cin >> lCap;
    cout << "����i�� ����� ������ �������� �������i�� ";
    cin >> ful;
    cout << "����i�� �i��� �������� �������i�� ";
    cin >> loc;

    Auto a1 = Auto(num, br, lCap, ful, loc);

    return a1;
}

Driver CreateDriver()
{
    string sur, in; int id; double sal;
    cout << "����i�� ��i����� ���i� ";
    cin >> sur;
    cout << "����i�� i�i�i��� ���i� ";
    cin >> in;
    cout << "����i�� ��������� ����� ���i� ";
    cin >> id;
    cout << "����i�� ����� ���i� ";
    cin >> sal;
    
    Driver d1 = Driver(sur, in, id, sal);

    return d1;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    cout << "============================================" << endl;
    cout << "|         ������� ����� ����i�����         |" << endl;
    cout << "============================================" << endl;
    cout << endl;

    bool a = true;
    while (a)
    {
        cout << "============================================" << endl;
        cout << "| �����i�� �i�                             |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 1 - �������� ��'��� ����� ����           |" << endl;
        cout << "| 2 - �������� ��'��� ����� ���i�          |" << endl;
        cout << "| 3 - �������� ��'��� ����� ����           |" << endl;
        cout << "| 4 - �������� ��'��� ����� �������        |" << endl;
        cout << "| 5 -                                      |" << endl;
        cout << "| 0 - ���i�                                |" << endl;
        cout << "============================================" << endl;

        int b; cin >> b;

        if (b == 1)
        {
            cout << "============================================" << endl;
            cout << "| ������ ������ ���i ��� ���� ?           |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ���                                  |" << endl;
            cout << "| 2 - �i                                   |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                cout << "============================================" << endl;
                CreateAuto();

                cout << "============================================" << endl;
                cout << "| ��'�� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
                cout << "| �����i�� �i�                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - ����������� ����������               |" << endl;
                cout << "| 2 - ���������� ����������                |" << endl;
                cout << "============================================" << endl;

                int d; cin >> d;
                if (d == 1)
                {
                    cout << "============================================" << endl;
                    cout << "| �����i�� �i�                             |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "| 1 - ������� ��� ����������               |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "============================================" << endl;
                }
                else if (d == 2)
                {
                    cout << "============================================" << endl;
                    cout << "| �� �� ������ ����������                 |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "============================================" << endl;
                }
            }
            else if (c == 2)
            {

                Auto a1 = Auto();

                cout << "============================================" << endl;
                cout << "| ��'��� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
            }

        }
        else if (b == 2)
        {
            cout << "============================================" << endl;
            cout << "| ������ ������ ���i ��� ���� ?           |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - ���                                  |" << endl;
            cout << "| 2 - �i                                   |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                cout << "============================================" << endl;
                CreateDriver();
                
                cout << "============================================" << endl;
                cout << "| ��'��� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
            }
            else if (c == 2)
            {
                Driver a1 = Driver();

                cout << "============================================" << endl;
                cout << "| ��'��� ������ �������� !                |" << endl;
                cout << "============================================" << endl;
            }
        }
        else if (b == 3)
        {

        }
        else if (b == 4)
        {

        }
        else if (b == 5)
        {

        }
        else if (b == 0)
        {
            a = false;
        }
    }
    
    cout << endl;
	system("pause");
	return 0;
}