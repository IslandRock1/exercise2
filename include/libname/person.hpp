
#ifndef EXERCISE1_PERSON_HPP
#define EXERCISE1_PERSON_HPP

#include <string>
#include <utility>

class person {

private:
    const std::string _firstName;
    const std::string _lastName;

public:
    person(std::string &firstName, std::string &lastName)
            : _firstName(firstName), _lastName(lastName) {}

    std::string getFirstName() {
        return _firstName;
    }

    std::string getLastName() {
        return _lastName;
    }

    std::string getFullName() {
        return _firstName + " " + _lastName;
    }

};

#endif //EXERCISE1_PERSON_HPP
