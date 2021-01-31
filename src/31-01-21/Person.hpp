#include <string>

class Person
{
protected:
    std::string name;
    int age;

public:
    Person(std::string name, int age);
    std::string getName();
    void setName(std::string newName);
    int getAge();
    void setAge(int newAge);
};