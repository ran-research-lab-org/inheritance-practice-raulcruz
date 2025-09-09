// Parent Class Employee
//g++ * .cpp
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
protected:
    std::string name;
    int id;
    std::string type; // "Hourly" or "Salaried"
public:
    virtual ~Employee() {};
    Employee(const std::string& name, int id, const std::string& type);
    virtual double calculatePay() const = 0;
    std::string getType();
    std::string getName();
};

#endif

