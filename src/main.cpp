#include <iostream>
#include "add.h"

int main(int argc, char** argv)
{
    std::cout << "2 + 4 = " << add<int>(2, 23) << std::endl;
    return 0;
}
