#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    int age;

    cout << "What is your age ?\n";

    getline(cin, input);
    stringstream(input) >> age;

    cout << "Your age is " << age << endl;
    return 1;
}