#include "Person.hpp"

Person::Person(std::string name, int age)
{
    name = name;
    age = age;
}

std::string Person::getName()
{
    return name;
}

void Person::setName(std::string newName)
{
    name = newName;
}

int Person::getAge()
{
    return age;
}

void Person::setAge(int newAge)
{
    age = newAge;
}