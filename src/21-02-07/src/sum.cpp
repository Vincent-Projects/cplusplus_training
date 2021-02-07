#include <iostream>

namespace Math
{
    template <class T>
    T sum(T a, T b)
    {
        return a + b;
    }

    template <typename T>
    T add(T a[], int size)
    {
        T result = 0;

        for (int i = 0; i < size; i++)
        {
            result += a[i];
        }

        return result;
    }
} // namespace Math

using namespace Math;

int main()
{
    std::cout << "1 + 4 = " << sum<int>(1, 4) << std::endl;
    std::cout << "84.32 + 3.45 = " << Math::sum(84.32, 3.45) << std::endl;

    int tabInt[5] = {5, 3, 7, 4, 2};
    float tabF[5] = {4.4, 6.32, 2.34, 4.5, 8.96};

    std::cout << "Tab1 : " << add(tabInt, 5) << std::endl;
    std::cout << "Tab2 : " << add(tabF, 5) << std::endl;
    return 0;
}