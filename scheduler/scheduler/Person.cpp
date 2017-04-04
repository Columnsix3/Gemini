#include <string>
#include <iostream>
#include <vector>
#include "Person.h"

Person::Person() {

}

Person::Person(std::string name_of_the_person, std::string position_of_the_person, float pay_of_the_person, float max_hours_of_the_person, float worked_hours_of_the_person, bool is_the_person_working) {
    _name = name_of_the_person;
    _position = position_of_the_person;
    _pay = pay_of_the_person;
    _max_hours = max_hours_of_the_person;
    _hours_worked = worked_hours_of_the_person;
    _is_working = is_the_person_working;
    //_days_off = {days_off_of_the_person};
    //std::string days_off_of_the_person
}

void Person::SetName(std::string x) {
    _name = x;
}

void Person::SetPosition(std::string x) {
    _position = x;
}

void Person::SetPay(float x) {
    _pay = x;
}

void Person::SetMaxHours(float x) {
    _max_hours = x;
}

void Person::SetHoursWorked(float x) {
    _hours_worked = x;
}

void Person::SetIsWorking(bool x) {
    _is_working = x;
}

//void Person::SetDaysOff(std::string x) {
// _days_off = x;
//}

std::string Person::GetName() {
    return _name;
}

std::string Person::GetPosition() {
    return _position;
}

float Person::GetPay() {
    return _pay;
}

float Person::GetMaxHours() {
    return _max_hours;
}

float Person::GetHoursWorked() {
    return _hours_worked;
}

bool Person::GetIsWorking() {
    return _is_working;
}

//std::string Person::GetDaysOff(std::string x) {
//   return _days_off[x];
//}







