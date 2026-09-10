#include <iostream>

#include "g.hpp"

int main()
{
    std::cout << "G(500) by the naive approach is: " << G::naiveG(500) << std::endl;
    std::cout << "G(500) by the memoized approach is: " << G::memoizedG(500) << std::endl;
}
