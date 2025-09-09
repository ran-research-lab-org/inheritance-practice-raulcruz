#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee(const std::string& name, int id, double yearlyPayment):Employee(name,id,"Salaried"){
    this->yearlyPayment = yearlyPayment; 
}

double SalariedEmployee::getYearlyPayment(){    
    return (yearlyPayment);
}

double SalariedEmployee::calculatePay() const{
    return (yearlyPayment/26);
}