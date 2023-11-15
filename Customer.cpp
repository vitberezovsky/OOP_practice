#include "Customer.h"

// ����������� �� �������������
Customer::Customer() : id(0), lastName(""), firstName(""), middleName(""), address(""), creditCardNumber(""), accountBalance(0.0) {}

// ����������� � �����������
Customer::Customer(int customerId, const std::string& customerLastName, const std::string& customerFirstName,
    const std::string& customerMiddleName, const std::string& customerAddress,
    const std::string& customerCreditCardNumber, double customerAccountBalance)
    : id(customerId), lastName(customerLastName), firstName(customerFirstName),
    middleName(customerMiddleName), address(customerAddress),
    creditCardNumber(customerCreditCardNumber), accountBalance(customerAccountBalance) {}

// ����������� ���������
Customer::Customer(const Customer& other)
    : id(other.id), lastName(other.lastName), firstName(other.firstName),
    middleName(other.middleName), address(other.address),
    creditCardNumber(other.creditCardNumber), accountBalance(other.accountBalance) {}

// ����������
Customer::~Customer() {
    std::cout << "��'��� � ID " << id << " ��������\n";
}

// ����� ��� ��������� ���������� ��� �볺���
void Customer::displayInfo() {
    std::cout << "ID: " << id << "\n";
    std::cout << "�������: " << lastName << "\n";
    std::cout << "��'�: " << firstName << "\n";
    std::cout << "�� �������: " << middleName << "\n";
    std::cout << "������: " << address << "\n";
    std::cout << "����� �������� ������: " << creditCardNumber << "\n";
    std::cout << "������ �������: " << accountBalance << "\n";

    this->id = car.id;
    this->model = car.model; this->price = car.price;
    this->registrationNumber = car.registrationNumber; this->vinCode = car.vinCode;
    this->numberOfSeats = car.numberOfSeats; this->numberOfDoors = car.numberOfDoors;
}

Car::~Car()
{
}
