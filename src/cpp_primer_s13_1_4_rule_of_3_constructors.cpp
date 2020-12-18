#include "iostream"

class test_constructors {
    public:
        test_constructors(double f) {
            age = f;
        }
        test_constructors(const test_constructors &orig) {
            age = orig.age;
            std::cout << "Here is a copy constructor, age = " << age << std::endl;
        } 
        ~test_constructors() {
            std::cout << "This is a destructor action, age = " << age << std::endl;
        }
        double age;
};

int main(void) {
    test_constructors t1(5.0);
    test_constructors t_copy_ini = t1;
    test_constructors t_direct_ini(t1);
    return 0;
}