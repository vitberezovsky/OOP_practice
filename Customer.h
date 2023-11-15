
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>
#include <string>

    class Customer {
    private:
        int id;
        std::string lastName;
        std::string firstName;
        std::string middleName;
        std::string address;
        std::string creditCardNumber;
        double accountBalance;

    public:
        // Конструктор за замовчуванням
        Customer();

        // Конструктор з параметрами
        Customer(int customerId, const std::string& customerLastName, const std::string& customerFirstName,
            const std::string& customerMiddleName, const std::string& customerAddress,
            const std::string& customerCreditCardNumber, double customerAccountBalance);

        // Конструктор копіювання
        Customer(const Customer& other);

        // Деструктор
        ~Customer();

        // Метод для виведення інформації про клієнта
        void displayInfo();
    };

#endif // CUSTOMER_H



