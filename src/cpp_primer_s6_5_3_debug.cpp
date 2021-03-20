/**
 * Test stand debug info provided by compiler and preprocessor
 */
#include <iostream>

int main(void) {
    std::cout << __func__ << std::endl;
    std::cout << __FILE__ << std::endl;
    std::cout << __DATE__ << std::endl;
    std::cout << __TIME__ << std::endl;
    std::cout << __LINE__ << std::endl;
}
