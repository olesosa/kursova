#include <iostream>
#include <string>

using namespace std;

class Base
{
    virtual void print() = 0; // віртуальна функція
};

class MyException
{
public:
    MyException(const string& msg) : msg_(msg) {}
    ~MyException() {}

    string getMessage() const { return(msg_); }
private:
    string msg_;
};

class Auto : public Base // клас АВТОМОБІЛЬ
{
protected:
    string number; // державний номер автомобіля
    string brand; // марка автомобіля
    int loadCapacity; // вантажопідйомність
    float fuel; // норма витрат пального
    string location; // місце приписки

public:
    Auto() // конструктор без параметрів
    {
        number = "AA1234AA";
        brand = "Audi";
        loadCapacity = 1000;
        fuel = 10.0;
        location = "Львiв";
    }
    // конструктор з параметрами
    Auto(string number, string brand, int loadCapacity, float fuel, string location)
    {
        this->number = number;
        this->brand = brand;
        this->loadCapacity = loadCapacity;
        this->fuel = fuel;
        this->location = location;
    }

    ~Auto() {}

    void print() override
    {
        cout << "Brand" << brand << endl;
    }

    // методи встановлення значень полів
    void setNumber(string number) { this->number = number; }
    void setBrand(string brand) { this->brand = brand; }
    void setLoadCapacity(int loadCapacity) { this->loadCapacity = loadCapacity; }
    void setFuel(float fuel) { this->fuel = fuel; }
    void setLocation(string location) { this->location = location; }

    // методи виведення значень полів
    string getNumber() const  { return number; }
    string getBrand() const { return brand; }
    int getLoadCapacity() const { return loadCapacity; }
    float getFuel() const { return fuel;}
    string getLocation() const { return location; }

    // перевантаження операцій
    void operator() (string number, string brand, int loadCapacity, float fuel, string location) 
    {
        this->number = number;
        this->brand = brand;
        this->loadCapacity = loadCapacity;
        this->fuel = fuel;
        this->location = location;
    }

    Auto& operator= (const Auto& other) 
    {
        if (this == &other) 
        {
            return *this;
        }

        this->number = other.number;
        this->brand = other.brand;
        this->loadCapacity = other.loadCapacity;
        this->fuel = other.fuel;
        this->location = other.location;

        return *this;
    }

    friend istream& operator>> (istream& in, Auto& automobile) 
    {
        cout << "Enter state number ";
        in >> automobile.number;
        cout << "Enter brand ";
        in >> automobile.brand;
        cout << "Enter load capacity ";
        in >> automobile.loadCapacity;
        cout << "Enter fuel consumption ";
        in >> automobile.fuel;
        cout << "Enter registration location ";
        in >> automobile.location;

        return in;
    }

    friend ostream& operator<< (ostream& out, const Auto& automobile) 
    {
        out << "State number " << automobile.number << endl;
        out << "Brand " << automobile.brand << endl;
        out << "Load capacity " << automobile.loadCapacity << endl;
        out << "Fuel consumption " << automobile.fuel << endl;
        out << "Location " << automobile.location << endl;

        return out;
    }
};

class Driver : public Base // клас ВОДІЙ
{
protected:
    string surname; // прізвище
    string initials; // ініціали
    int id; // табельний номер
    double salary; // оклад

public:
    Driver() // конструктор без параметрів
    {
        surname = "Коваль";
        initials = "A. O.";
        id = 1111;
        salary = 150.0;
    }
    // конструктор з параметрами
    Driver(string surname, string initials, int id, double salary) 
    {
        this->surname = surname;
        this->initials = initials;
        this->id = id;
        this->salary = salary;
    }

    ~Driver() {}

    void print() override
    {
        cout << "Driver name " << surname << initials << endl;
    }

    // методи встановлення значень полів
    void setSurname(string surname) { this->surname = surname; }
    void setInitials(string initials) { this->initials = initials; }
    void setId(int id) { this->id = id; }
    void setSalary(double salary) { this->salary = salary; }

    // методи виведення значень полів
    string getSurname() const { return surname; }
    string getInitials() const { return initials; }
    int getId() const { return id; }
    double getSalary() const { return salary; }

    // перевантаження операцій
    void operator() (string surname, string initials, int id, double salary) {
        this->surname = surname;
        this->initials = initials;
        this->id = id;
        this->salary = salary;
    }

    Driver& operator= (const Driver& other) 
    {
        if (this == &other) return *this;

        surname = other.surname;
        initials = other.initials;
        id = other.id;
        salary = other.salary;

        return *this;
    }

    friend ostream& operator<< (ostream& out, const Driver& driver)
    {
        out << "Surname " << driver.surname << endl;
        out << "Initials " << driver.initials << endl;
        out << "ID " << driver.id << endl;
        out << "Salary " << driver.salary << endl;

        return out;
    }

    friend istream& operator>> (istream& in, Driver& driver)
    {
        cout << "Enter surname ";
        in >> driver.surname;
        cout << "Enter initials ";
        in >> driver.initials;
        cout << "Enter ID ";
        in >> driver.id;
        cout << "Enter salary ";
        in >> driver.salary;

        return in;
    }
};

class Trip : public Auto, public Driver // клас РЕЙС з множинним успадкуванням
{
protected:
    string date; // дата рейсу
    string endpoint; // кінцевий пункт рейсу,
    double kilometrage; // кілометраж
    int transportedTons; // перевезено тонн
    int fuelForATrip; // розхід пального за рейс
    Auto* automobile; // автомобіль, що використовується на поїздку
    Driver* driver; // водій, який здійснює поїздку

public:
    Trip() : Auto(), Driver() // конструктор без параметрів
    {
        date = "17.02.2023";
        endpoint = "Київ";
        kilometrage = 1000.0;
        transportedTons = 5;
        fuelForATrip = 50;
        automobile = nullptr;
        driver = nullptr;
    }
    // конструктор з параметрами
    Trip(string date, string endpoint, double kilometrage, int transportedTons, int fuelForATrip, const Auto* automobile, const Driver* driver)
    {
        this->date = date;
        this->endpoint = endpoint;
        this->kilometrage = kilometrage;
        this->transportedTons = transportedTons;
        this->fuelForATrip = fuelForATrip;
        this->automobile;
        this->driver;
    }
    ~Trip() 
    {
        delete automobile;
        delete driver;
    }

    void print() override
    {
        cout << "Place of Endpoint " << endpoint << endl;
    }

    // Методи встановлення значень полів даних
    void setDate(string date) { this->date = date; }
    void setEndpoint(string endpoint) { this->endpoint = endpoint; }
    void setKilometrage(int kilometrage) { this->kilometrage = kilometrage; }
    void setTransportedTons(int transportedTons) { this->transportedTons = transportedTons; }
    void setFuelForATrip(int fuelForATrip) { this->fuelForATrip = fuelForATrip; }

    // методи виведення значень полів
    string getDate() const { return date; }
    string getEndpoint() const { return endpoint; }
    double getKilometrage() const { return kilometrage; }
    int getTransportedTons() const { return transportedTons; }
    int getFuelForATrip() const { return fuelForATrip; }
};

class Timetable : private Trip // клас РОЗКЛАД
{
private:
    int size; // розмір масиву
    Trip* arr; // масив обєктів класу РЕЙС

public:
    Timetable(int size) // конструктор класу
    {
        this->size = size;
        arr = new Trip[size];
    }

    ~Timetable() // деструктор
    {
        delete arr;
    }

    double VolumeOfTransportation()
    {
        int vol = 0;
        for (Trip* it = begin(); it != end(); ++it)
        {
            vol += it->getTransportedTons();
        }
        cout << "Total volume of transportation " << vol << endl;
    }

    double TotalFuel()
    {
        int total = 0;
        for (Trip* it = begin(); it != end(); ++it)
        {
            total += it->getFuel();
        }
        cout << "Total fuel " << total << endl;
    }

    Trip* begin()
    {
        return arr;
    }

    Trip* end()
    {
        return arr + size;
    }
};

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
        cout << "| 1 - Створити обє'кт класу Авто           |" << endl;
        cout << "| 2 - Створити обє'кт класу Водiй          |" << endl;
        cout << "| 3 - Створити обє'кт класу Рейс           |" << endl;
        cout << "| 4 - Створити обє'кт класу Розклад        |" << endl;
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
                string num, br; int lCap; float ful; string loc;
                cout << "============================================" << endl;
                cout << "Введiть номер автомобiля ";
                cin >> num;
                cout << "Введiть марку автомобiля ";
                cin >> br;
                cout << "Введiть вантажопiдйомнiсть автомобiля ";
                cin >> lCap;
                cout << "Введiть норму витрат пального автомобiля ";
                cin >> ful;
                cout << "Введiть мiсце приписки автомобiля " ;
                cin >> loc;

                Auto a1 = Auto(num, br, lCap, ful, loc);
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
                cout << "| Обє'кт успішно створено !                |" << endl;
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
                string sur, in; int id; double sal;
                cout << "============================================" << endl;
                cout << "Введiть прiзвище водiя ";
                cin >> sur;
                cout << "Введiть iнiцiали водiя ";
                cin >> in;
                cout << "Введiть табельний номер водiя ";
                cin >> id;
                cout << "Введiть оклад водiя ";
                cin >> sal;

                Driver d1 = Driver(sur, in, id, sal);
                cout << "============================================" << endl;
                cout << "| Обє'кт успішно створено !                |" << endl;
                cout << "============================================" << endl;
            }
            else if (c == 2)
            {
                Driver a1 = Driver();

                cout << "============================================" << endl;
                cout << "| Обє'кт успішно створено !                |" << endl;
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

	system("pause");
	return 0;
}
