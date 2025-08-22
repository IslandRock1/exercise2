
#include <iostream>
#include <vector>

#include "person.hpp"
#include "greetPerson.hpp"

int main() {
    std::vector<std::string> firstNames = {"Alice", "Bob", "Charlie"};
    std::vector<std::string> lastNames = {"Al", "Bobo", "Charizard"};
    if (firstNames.size() != lastNames.size()) {
        std::cout << "Not equal amounts of first and last names." << std::endl;
        return 69;
    }

    std::vector<person> people;
    for (int i = 0; i < firstNames.size(); i++) {
        people.emplace_back(firstNames[i], lastNames[i]);
    }

    for (auto &p : people) {
        greet(p);
    }
}