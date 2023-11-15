#pragma once
#include <iostream>

using namespace std;

class Customer {
private:
    int id;
    string surname;
    string firstName;
    string patronymic;
    string address;
    string creditCardNumber;
    double accountBalance;

public:
    Customer() = default;

    Customer(int id, const string& surname, const string& firstName, const string& patronymic, const string& address,
        const string& creditCardNumber, double accountBalance)
        : id(id), surname(surname), firstName(firstName), patronymic(patronymic), address(address), creditCardNumber(creditCardNumber),
        accountBalance(accountBalance) {
    }

    Customer(const Customer& customer) {
        this->id = customer.id;
        this->surname = customer.surname;
        this->firstName = customer.firstName;
        this->patronymic = customer.patronymic;
        this->address = customer.address;
        this->creditCardNumber = customer.creditCardNumber;
        this->accountBalance = customer.accountBalance;
    }

    ~Customer() = default;

    void input();
    void output();

    friend istream& operator>>(istream& in, Customer& customer);
    friend ostream& operator<<(ostream& out, Customer& customer);

    bool operator==(const Customer& other) const;
};

