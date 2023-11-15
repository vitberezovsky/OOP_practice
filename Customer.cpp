#include "Customer.h"

// Конструктор за замовчуванням
Customer::Customer() : id(0), lastName(""), firstName(""), middleName(""), address(""), creditCardNumber(""), accountBalance(0.0) {}

// Конструктор з параметрами
Customer::Customer(int customerId, const std::string& customerLastName, const std::string& customerFirstName,
    const std::string& customerMiddleName, const std::string& customerAddress,
    const std::string& customerCreditCardNumber, double customerAccountBalance)
    : id(customerId), lastName(customerLastName), firstName(customerFirstName),
    middleName(customerMiddleName), address(customerAddress),
    creditCardNumber(customerCreditCardNumber), accountBalance(customerAccountBalance) {}

// Конструктор копіювання
Customer::Customer(const Customer& other)
    : id(other.id), lastName(other.lastName), firstName(other.firstName),
    middleName(other.middleName), address(other.address),
    creditCardNumber(other.creditCardNumber), accountBalance(other.accountBalance) {}

// Деструктор
Customer::~Customer() {
    std::cout << "Об'єкт з ID " << id << " видалено\n";
}

// Метод для виведення інформації про клієнта
void Customer::displayInfo() {
    std::cout << "ID: " << id << "\n";
    std::cout << "Прізвище: " << lastName << "\n";
    std::cout << "Ім'я: " << firstName << "\n";
    std::cout << "По батькові: " << middleName << "\n";
    std::cout << "Адреса: " << address << "\n";
    std::cout << "Номер кредитної картки: " << creditCardNumber << "\n";
    std::cout << "Баланс рахунку: " << accountBalance << "\n";

    this->id = car.id;
    this->model = car.model; this->price = car.price;
    this->registrationNumber = car.registrationNumber; this->vinCode = car.vinCode;
    this->numberOfSeats = car.numberOfSeats; this->numberOfDoors = car.numberOfDoors;
}

Car::~Car()
{
}
