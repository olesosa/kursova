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
    cout << "|         Осадчук Олесь Леонідович         |" << endl;
    cout << "|              Курсова робота              |" << endl;
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
        cout << "| Виберіть дію                             |" << endl;
        cout << "|                                          |" << endl;
        cout << "| 1 - Створити об'єкт класу Авто           |" << endl;
        cout << "| 2 - Створити об'єкт класу Водій          |" << endl;
        cout << "| 3 - Створити об'єкт класу Рейс           |" << endl;
        cout << "| 4 - Створити об'єкт класу Розклад        |" << endl;
        cout << "| 5 - Взаємодіяти з об'єктом класу Авто    |" << endl;
        cout << "| 6 - Взаємодіяти з об'єктом класу Водій   |" << endl;
        cout << "| 7 - Взаємодіяти з об'єктом класу Рейс    |" << endl;
        cout << "| 8 - Взаємодіяти з об'єктом класу Розклад |" << endl;
        cout << "| 9 -                                      |" << endl;
        cout << "| 0 - Вихід                                |" << endl;
        cout << "============================================" << endl;

        int b; cin >> b;

        if (b == 1)
        {
            cout << "============================================" << endl;
            cout << "| Виберіть дію                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Створити об'єкт автоматичично        |" << endl;
            cout << "| 2 - Задати параметри вручну              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                a1("BC8888AI", "Audi", 15, 14, "Львів");

                cout << "============================================" << endl;
                cout << "| Обє'кт успішно створено !                |" << endl;
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
                cout << "| Обє'кт успішно створено !                |" << endl;
                cout << "============================================" << endl;
                std::cout << a1;
                cout << "============================================" << endl;
            }
        }
        else if (b == 2)
        {
            cout << "============================================" << endl;
            cout << "| Виберіть дію                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Створити об'єкт автоматичично        |" << endl;
            cout << "| 2 - Задати параметри вручну              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;

            if (c == 1)
            {
                d1("Осадчук", "О.О", 1111, 15000);

                cout << "============================================" << endl;
                cout << "| Обє'кт успішно створено !                |" << endl;
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
                cout << "| Обє'кт успішно створено !                |" << endl;
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
            cout << "| Обє'кт успішно створено !                |" << endl;
            cout << "============================================" << endl;
            std::cout << t1;
            cout << "============================================" << endl;
        }
        else if (b == 4)
        {
            cout << "============================================" << endl;
            cout << "| Введіть кількість рейсів у розкладі      |" << endl;
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
            cout << "| Обє'кт успішно створено !                |" << endl;
            cout << "============================================" << endl;
        }
        else if (b == 5)
        {
            cout << "============================================" << endl;
            cout << "| Виберiть дiю                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Переглянути інформацію               |" << endl;
            cout << "| 2 - Редарувати інформацію                |" << endl;
            cout << "| 3 - Інформація про марку                 |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| Виберiть дiю                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Вивести всю інформацію               |" << endl;
                cout << "| 2 - Вивести державний номер              |" << endl;
                cout << "| 3 - Вивести марку автомобіля             |" << endl;
                cout << "| 4 - Вивести вантажопідйомність           |" << endl;
                cout << "| 5 - Вивести норму витрат пального        |" << endl;
                cout << "| 6 - Вивести місце приписки               |" << endl;
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
                cout << "| Що ви бажаєте редагувати                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Редагувати всю інформацію            |" << endl;
                cout << "| 2 - Редагувати державний номер           |" << endl;
                cout << "| 3 - Редагувати марку автомобіля          |" << endl;
                cout << "| 4 - Редагувати вантажопідйомність        |" << endl;
                cout << "| 5 - Редагувати норму витрат пального     |" << endl;
                cout << "| 6 - Редагувати місце приписки            |" << endl;
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
                    cout << "Введіть державний номер "; cin >> num;
                    try
                    {
                        a1.setNumber(num);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "Введіть державний номер "; cin >> num;
                        a1.setNumber(num);
                    }
                }
                else if (e == 3)
                {
                    cout << "Введіть марку автомобіля "; cin >> br;
                    try
                    {
                        a1.setBrand(br);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "Введіть марку автомобіля "; cin >> br;
                        a1.setBrand(br);
                    }
                }
                else if (e == 4)
                {
                    cout << "Введіть вантажопідйомність "; cin >> lCap;
                    try
                    {
                        a1.setLoadCapacity(lCap);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "Введіть вантажопідйомність "; cin >> lCap;
                        a1.setLoadCapacity(lCap);
                    }
                }
                else if (e == 5)
                {
                    cout << "Введіть норму витрат пального "; cin >> ful;
                    try
                    {
                        a1.setFuel(ful);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "Введіть норму витрат пального "; cin >> ful;
                        a1.setFuel(ful);
                    }
                }
                else if (e == 6)
                {
                    cout << "Введіть місце приписки "; cin >> loc;
                    try
                    {
                        a1.setLocation(loc);
                    }
                    catch (MyException ex)
                    {
                        cout << endl << ex.getMessage() << endl;
                        cout << "Введіть місце приписки "; cin >> loc;
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
            cout << "| Виберiть дію                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Переглянути інформацію               |" << endl;
            cout << "| 2 - Редарувати інформацію                |" << endl;
            cout << "| 3 - Ім'я Водія                            |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| Виберiть дію                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Вивести всю інформацію               |" << endl;
                cout << "| 2 - Вивести прізвише                     |" << endl;
                cout << "| 3 - Вивести ініціали                     |" << endl;
                cout << "| 4 - Вивести табельний номер              |" << endl;
                cout << "| 5 - Вивести оклад                        |" << endl;
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
                cout << "| Що ви бажаєте редагувати                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Редагувати всю інформацію            |" << endl;
                cout << "| 2 - Редагувати прізвише                  |" << endl;
                cout << "| 3 - Редагувати ініціали                  |" << endl;
                cout << "| 4 - Редагувати табельний номер           |" << endl;
                cout << "| 5 - Редагувати оклад                     |" << endl;
                cout << "============================================" << endl;

                string sur, in; int id; double sal;
                int e; cin >> e;
                if (e == 1)
                {
                    std::cin >> d1;
                }
                else if (e == 2)
                {
                    cout << "Введіть прізвище водія ";
                    cin >> sur;
                    d1.setSurname(sur);
                }
                else if (e == 3)
                {
                    cout << "Введiть ініціали водія ";
                    cin >> in;
                    d1.setInitials(in);
                }
                else if (e == 4)
                {
                    cout << "Введiть табельний номер ";
                    cin >> id;
                    d1.setId(id);
                }
                else if (e == 5)
                {
                    cout << "Введiть оклад водія ";
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
            cout << "| Виберiть дiю                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Переглянути інформацію               |" << endl;
            cout << "| 2 - Редарувати інформацію                |" << endl;
            cout << "| 3 - Взнати куди прямує рейс              |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                cout << "============================================" << endl;
                cout << "| Виберiть дiю                             |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Вивести всю інформацію               |" << endl;
                cout << "| 2 - Вивести датуейсу                     |" << endl;
                cout << "| 3 - Вивести кінцевий пункт рейсу         |" << endl;
                cout << "| 4 - Вивести кілометраж                   |" << endl;
                cout << "| 5 - Вивести перевезено тонн              |" << endl;
                cout << "| 6 - Вивести розхід пального за рейс      |" << endl;
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
                cout << "| Що ви бажаєте редагувати                 |" << endl;
                cout << "|                                          |" << endl;
                cout << "| 1 - Редагувати датуейсу                  |" << endl;
                cout << "| 2 - Редагувати кінцевий пункт рейсу      |" << endl;
                cout << "| 3 - Редагувати кілометраж                |" << endl;
                cout << "| 4 - Редагувати перевезено тонн           |" << endl;
                cout << "| 5 - Редагувати розхід пального за рейс   |" << endl;
                cout << "============================================" << endl;

                string dat, endp; double kil; int trans, ful;
                int e; cin >> e;
                if (e == 1)
                {
                    cout << "Введiть дату рейсу ";
                    cin >> dat;
                    t1.setDate(dat);
                }
                else if (e == 2)
                {
                    cout << "Введiть кінцевий пункт рейсу";
                    cin >> endp;
                    t1.setEndpoint(endp);
                }
                else if (e == 3)
                {
                    cout << "Введiть кілометраж ";
                    cin >> kil;
                    t1.setKilometrage(kil);
                }
                else if (e == 4)
                {
                    cout << "Введiть перевезення тонн ";
                    cin >> trans;
                    t1.setTransportedTons(trans);
                }
                else if (e == 5)
                {
                    cout << "Введiть розхід пального за рейсу ";
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
            cout << "| Виберiть дiю                             |" << endl;
            cout << "|                                          |" << endl;
            cout << "| 1 - Вивести розклад                      |" << endl;
            cout << "| 2 - Занести нову інформацію              |" << endl;
            cout << "| 3 - Загальний об'єм перевезень           |" << endl;
            cout << "| 4 - Загальні витрати пального            |" << endl;
            cout << "============================================" << endl;

            int c; cin >> c;
            if (c == 1)
            {
                tt1.PrintTimetable();
            }
            else if (c == 2)
            {
                cout << "============================================" << endl;
                cout << "| Введіть кількість рейсів у розкладі      |" << endl;
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
