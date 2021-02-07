#include <iostream>
#include <string>

void test1()
{
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << std::endl;
    }

    for (int y = 0; y < 4; ++y)
    {
        std::cout << y << std::endl;
    }
}

void test2()
{
    for (int x : {3, 6, 8})
    {
        std::cout << x << std::endl;
    }
}

int main()
{
    test1();
    test2();

    return 0;
}