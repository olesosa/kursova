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
    cout << "Введiть номер автомобiля ";
    cin >> num;
    cout << "Введiть марку автомобiля ";
    cin >> br;
    cout << "Введiть вантажопiдйомнiсть автомобiля ";
    cin >> lCap;
    cout << "Введiть норму витрат пального автомобiля ";
    cin >> ful;
    cout << "Введiть мiсце приписки автомобiля ";
    cin >> loc;

    Auto a1 = Auto(num, br, lCap, ful, loc);

    return a1;
}

Driver CreateDriver()
{
    string sur, in; int id; double sal;
    cout << "Введiть прiзвище водiя ";
    cin >> sur;
    cout << "Введiть iнiцiали водiя ";
    cin >> in;
    cout << "Введiть табельний номер водiя ";
    cin >> id;
    cout << "Введiть оклад водiя ";
    cin >> sal;
    
    Driver d1 = Driver(sur, in, id, sal);

    return d1;
}

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    cout << "============================================" << endl;
    cout << "|         Осадчук Олесь Леонiдович         |" << endl;
    cout << "============================================" << endl;
    cout << endl;

    bool a = true;
    while (a)
    {
        cout << "============================================" << endl;
        cout << "| Виберiть дiю                             |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 1 - Створити об'єкт класу Авто           |" << endl;
        cout << "| 2 - Створити об'єкт класу Водiй          |" << endl;
        cout << "| 3 - Створити об'єкт класу Рейс           |" << endl;
        cout << "| 4 - Створити об'єкт класу Розклад        |" << endl;
        cout << "| 5 -                                      |" << endl;
        cout << "| 0 - Вихiд                                |" << endl;
        cout << "============================================" << endl;

        int b; cin >> b;

        if (b == 1)
        {
            cout << "============================================" << endl;
            cout << "| Бажаєте ввести данi про авто ?           |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - так                                  |" << endl;
            cout << "| 2 - нi                                   |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                cout << "============================================" << endl;
                CreateAuto();

                cout << "============================================" << endl;
                cout << "| Обє'кт успішно створено !                |" << endl;
                cout << "============================================" << endl;
                cout << "| Виберiть дiю                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Переглянути інформацію               |" << endl;
                cout << "| 2 - Редарувати інформацію                |" << endl;
                cout << "============================================" << endl;

                int d; cin >> d;
                if (d == 1)
                {
                    cout << "============================================" << endl;
                    cout << "| Виберiть дiю                             |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "| 1 - Вивести всю інформацію               |" << endl;
                    cout << "|                                          |" << endl;
                    cout << "============================================" << endl;
                }
                else if (d == 2)
                {
                    cout << "============================================" << endl;
                    cout << "| Що ви бажаєте редагувати                 |" << endl;
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
                cout << "| Об'єкт успішно створено !                |" << endl;
                cout << "============================================" << endl;
            }

        }
        else if (b == 2)
        {
            cout << "============================================" << endl;
            cout << "| Бажаєте ввести данi про авто ?           |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - так                                  |" << endl;
            cout << "| 2 - нi                                   |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                cout << "============================================" << endl;
                CreateDriver();
                
                cout << "============================================" << endl;
                cout << "| Об'єкт успішно створено !                |" << endl;
                cout << "============================================" << endl;
            }
            else if (c == 2)
            {
                Driver a1 = Driver();

                cout << "============================================" << endl;
                cout << "| Об'єкт успішно створено !                |" << endl;
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