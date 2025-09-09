#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours):Employee(name,id,"Hourly"){
  this->payPerHour=payPerHour;
  this->workedHours=workedHours;  
}

double HourlyEmployee::getPayPerHour(){
    return (payPerHour);
}

double HourlyEmployee::getWorkedHours(){    
    return (workedHours);
}

double HourlyEmployee::calculatePay() const{
    return(payPerHour*workedHours);
}
