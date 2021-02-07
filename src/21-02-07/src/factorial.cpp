#include <iostream>

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int main()
{
    int fac1 = factorial(5);
    int fac2 = factorial(10);

    std::cout << "5! = " << fac1 << std::endl;
    std::cout << "10! = " << fac2 << std::endl;

    return 0;
}