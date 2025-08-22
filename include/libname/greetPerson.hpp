
#include <iostream>

#include "person.hpp"

void greet(person &personInstance) {
    std::cout << "Hello from " << personInstance.getFullName() << std::endl;
}