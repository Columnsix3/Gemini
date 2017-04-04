#include <string>
#include <iostream>
#include <vector>
#include "Person.h"
#include <array>
#include <stdlib.h>
#include <time.h>


int main() {
    Person emp1("James",    "Receiver",    10.66, 40.0, 0.0, false);
    Person emp2("Austin",   "Team Leader", 9.00,  40.0, 0.0, false);
    Person emp3("Aaron",    "Backend",     9.00,  28.0, 0.0, false);
    Person emp4("Jennifer", "Frontend",    8.00,  28.0, 0.0, false);
    Person emp5("Charity",  "Frontend",    8.00,  28.0, 0.0, false);
    Person emp6("Shayla",   "Frontend",    8.00,  40.0, 0.0, false);
    Person emp7("Ryan",     "Backend",     9.00,  28.0, 0.0, false);
    Person emp8("Tom",      "Backend",     9.00,  32.0, 0.0, false);
    Person emp9("Logan",    "Backend",     9.00,  28.0, 0.0, false);
    Person emp10("Garret",  "Team Leader", 12.00, 40.0, 0.0, false);
    Person emp11("Clayton", "Backend",     9.00,  28.0, 0.0, false);
    Person emp12("Mathew",  "Manager",     20.00, 50.0, 0.0, false);
    Person emp13("Justin",  "Manager",     15.00, 40.0, 0.0, false);
    Person emp14("Davon",   "Team Leader", 12.00, 40.0, 0.0, false);
    Person emp15("Aj",      "Backend",     9.00,  28.0, 0.0, false);
    
    // array of objects
    std::array<Person, 15> array = { emp1, emp2, emp3, emp4, emp5, emp6, emp7, emp8, emp9, emp10, emp11, emp12, emp13, emp14, emp15 };

    // this for loop acts like a week 
    for (int i = 0; i < 7; i++) {

        // this is the counter for the inner for loop and it gets set to zero everytime the outter for loop runs to reset it so the inner one will run again
        int x = 0;

        // this for loop acts like a single day
        for (x = 0; x < array.size(); x++) {
            
            std::cout << " * ";

            // this is a pointer to make it change and select the values of the object in the array. if i just assigned the array point to a variable it would just make a copy of it and not change the original objects values
            Person* employee = &array[rand() % array.size()];

            if (employee->GetIsWorking() == false && employee->GetHoursWorked() < employee->GetMaxHours()) {
                // the arrow thing is what you use when using a pointer to select funciton for the object
                employee->SetHoursWorked(8.00);
                employee->SetIsWorking(true);
                std::cout << employee->GetName() << " " << employee->GetHoursWorked() << " " << employee->GetIsWorking() << std::endl;
            }

            employee->SetIsWorking(false);
        }

        std::cout << std::endl;
        std::cout << std::endl;
    }
  
    std::string wait;
    std::cin >> wait;
    return 0;
}