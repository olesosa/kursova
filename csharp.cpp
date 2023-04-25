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
            number = "";
            brand = "";
            loadCapacity = 0;
            fuel = 0;
            location = "";
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
            surname = "";
            initials = "";
            id = 0;
            salary = 0.0;
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
        public string? Surname { get {  return surname; } set { surname = value; } }
        public string? Initials { get {  return initials; } set {  initials = value; } }
        public int Id { get { return id; } set { id = value; } }
        public double Salary { get {  return salary; } set {  salary = value; } }
    }

    public class Program
    {
        static void Main()
        {

        }
    }
}
