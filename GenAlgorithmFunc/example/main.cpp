#include <iostream>
#include "header.h"
int main()
{
    srand(time(NULL));
    std::cout << genetic(1.0, 10.0, 0.000001);
    std::cin.get();
    return 0;
}
