#include "Customer.h"

void Customer::input() {
    cout << "Input customer ID: "; cin >> this->id;
    cout << "Input customer surname: "; cin >> this->surname;
    cout << "Input customer first name: "; cin >> this->firstName;
    cout << "Input customer patronymic: "; cin >> this->patronymic;
    cout << "Input customer address: "; cin >> this->address;
    cout << "Input customer credit card number: "; cin >> this->creditCardNumber;
    cout << "Input customer account balance: "; cin >> this->accountBalance;
}

void Customer::output() {
    cout << "Customer ID: " << this->id << endl;
    cout << "Customer surname: " << this->surname << endl;
    cout << "Customer first name: " << this->firstName << endl;
    cout << "Customer patronymic: " << this->patronymic << endl;
    cout << "Customer address: " << this->address << endl;
    cout << "Customer credit card number: " << this->creditCardNumber << endl;
    cout << "Customer account balance: " << this->accountBalance << endl;
}

istream& operator>>(istream& in, Customer& customer) {
    customer.input();
    return in;
}

ostream& operator<<(ostream& out, Customer& customer) {
    customer.output();
    return out;
}

bool Customer::operator==(const Customer& other) const {
    return id == other.id &&
        surname == other.surname &&
        firstName == other.firstName &&
        patronymic == other.patronymic &&
        address == other.address &&
        creditCardNumber == other.creditCardNumber &&
        accountBalance == other.accountBalance;
}