#include <iostream>
#include <string>
#include <sstream>

using namespace std;

bool isPrime(int number)
{
    if (number <= 0 || number == 1)
    {
        return false;
    }

    for (int i = 1; i < number; i++)
    {
        if ((number % i) == 0 && i != 1)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int test1 = 2;
    int test2(11);
    int test3 = 35;
    int test4 = 47;
    int test5{40};
    int test6(85);
    int test7 = 89;
    int test8 = 8;

    int isTest1Prime = isPrime(test1);
    int isTest2Prime = isPrime(test2);
    int isTest3Prime = isPrime(test3);
    int isTest4Prime = isPrime(test4);
    int isTest5Prime = isPrime(test5);
    int isTest6Prime = isPrime(test6);
    int isTest7Prime = isPrime(test7);
    int isTest8Prime = isPrime(test8);

    cout << isTest1Prime << endl; // true
    cout << isTest2Prime << endl; // true
    cout << isTest3Prime << endl; // false
    cout << isTest4Prime << endl; // true
    cout << isTest5Prime << endl; // false
    cout << isTest6Prime << endl; // false
    cout << isTest7Prime << endl; // true
    cout << isTest8Prime << endl; // false

    return 1;
}