extern "C" 
int compute(int i) 
{
    return i*2;
}

//extern "C"
double compute(double d)
{
    return d*2;
}

#include <iostream>

int main(void)
{
    std::cout << __func__ << std::endl;
    std::cout << "compute int = " << compute(6) << std::endl;
    std::cout << "compute double = " << compute(2.8) << std::endl;

    return 0;
}
