#include "Employee.h"

Employee::Employee(const std::string& name, int id, const std::string& type){
  this->name=name;
  this->id=id;
  this->type=type;
}

std::string Employee::getType(){
  return (type);
}

std::string Employee::getName(){
  return (name);
}