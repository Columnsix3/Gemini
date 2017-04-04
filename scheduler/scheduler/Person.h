#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <vector>

class Person {
private:
    std::string _name;
    std::string _position;
    float _pay;
    float _max_hours;
    float _hours_worked;
    bool _is_working;
    // std::vector<std::string> _days_off;
public:
    Person();
    Person(std::string, std::string, float, float, float, bool);
    //, std::string
    void SetName(std::string);
    void SetPosition(std::string);
    void SetPay(float);
    void SetMaxHours(float);
    void SetHoursWorked(float);
    void SetIsWorking(bool);
    //void SetDaysOff(std::string);

    std::string GetName();
    std::string GetPosition();
    float GetPay();
    float GetMaxHours();
    float GetHoursWorked();
    bool GetIsWorking();
    //std::string GetDaysOff(std::string);
};
#endif