#include <string>
#include <iostream>
#include <vector>
#include "Person.h"

int main() {
    Person person_array[5];

    Person James("james", "receiver", 10.00, 40.00, 0.0, false);




    std::cout << James.GetMaxHours() << std::endl;
    std::string wait;
    std::cin >> wait;
    return 0;
}