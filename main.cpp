#include <iostream>

double my_pow(double x, unsigned int y) {
    if (!y) {
        return 1;
    }
    for (int i = 0; i < y - 1; ++i) {
        x = x*x;
    }
    return x;

}

int main()
{
    std::cout << my_pow(3.0, 2) << std::endl;
}