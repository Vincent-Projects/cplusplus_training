#include <iostream>
#include <string>
#include "Person.hpp"

int main()
{
    Person p("Vincent", 22);
    std::cout << p.getName() << std::endl;
    return 0;
}