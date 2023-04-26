using System;
using System.IO;

namespace oop
{
    public class Auto // клас АВТОМОБІЛЬ
    {
        protected string number; // державний номер автомобіля
        protected string brand; // марка автомобіля
        protected int loadCapacity; // вантажопідйомність
        protected float fuel; // норма витрат пального
        protected string location; // місце приписки

        public Auto() // конструктор без параметрів
        {
            number = "AA1234AA";
            brand = "Audi";
            loadCapacity = 1000;
            fuel = 10;
            location = "Львiв";
        }
        public Auto(string number, string brand, int loadCapacity, float fuel, string location)  // конструктор з параметрами
        {
            this.number = number;
            this.brand = brand;
            this.loadCapacity = loadCapacity;
            this.fuel = fuel;
            this.location = location;
        }
        ~Auto(){ } // деструктор

        // методи встановлення і виведення значень полів
        public string Number { get { return number; } set { number = value; } }
        public string Brand { get { return brand; } set {  brand = value; } }
        public int LoadCapacity { get {  return loadCapacity; } set {  loadCapacity = value; } }
        public float Fuel { get { return fuel; } set {  fuel = value; } }
        public string Location { get { return location; } set { location = value; } }

        public override string ToString()
        {
            return $"Number: {number}, Brand: {brand}, LoadCapacity: {loadCapacity}, Fuel: {fuel}, Location: {location}";
        }
    }

    public class Driver // клас ВОДІЙ
    {
        protected string surname; // прізвище
        protected string initials; // ініціали
        protected int id; // табельний номер
        protected double salary; // оклад
        public Driver() // конструктор без параметрів
        {
            surname = "Коваль";
            initials = "A. O.";
            id = 1111;
            salary = 150;
        }
        public Driver(string surname, string initials, int id, double salary) // конструктор з параметрами
        {
            this.surname = surname;
            this.initials = initials;
            this.id = id;
            this.salary = salary;
        }
        ~Driver() { } // деструктор

        // методи встановлення і виведення значень полів
        public string Surname { get {  return surname; } set { surname = value; } }
        public string Initials { get {  return initials; } set {  initials = value; } }
        public int Id { get { return id; } set { id = value; } }
        public double Salary { get {  return salary; } set {  salary = value; } }
    }

    public class Trip // клас РЕЙС
    {
        protected string date; // дата рейсу
        protected string endpoint; // кінцевий пункт рейсу,
        protected double kilometrage; // кілометраж
        protected int transportedTons; // перевезено тонн
        protected int fuelForATrip; // розхід пального за рейс

        public Trip() // конструктор без параметрів
        {
            date = "17.02.2023";
            endpoint = "Київ";
            kilometrage = 1000.0;
            transportedTons = 5;
            fuelForATrip = 50;
        }
        public Trip(string date, string endpoint, double kilometrage, int transportedTons, int fuelForATrip) // конструктор з параметрами
        {
            this.date = date;
            this.endpoint = endpoint;   
            this.kilometrage = kilometrage;
            this.transportedTons = transportedTons;
            this.fuelForATrip = fuelForATrip;
        }

        ~Trip() { } // деструктор

        // методи встановлення і виведення значень полів
        public string Date { get { return date; } set {  date = value; } }
        public string Endpoint { get { return endpoint; } set { endpoint = value; } }
        public double Kilometrage { get { return kilometrage; } set { kilometrage = value; } }
        public int TransportedTons { get { return transportedTons; } set { transportedTons = value; } }
        public int FuelForATrip { get { return fuelForATrip; } set { fuelForATrip = value; } }
    }

    public class Program
    {
        static void Main()
        {

        }
    }
}
