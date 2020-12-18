#include "iostream"

class test_constructors {
    public:
        test_constructors(double f) {
            age = f;
        }
        test_constructors() {
            age = -1.0;
            std::cout << "No parameter initialization, age = " << age << std::endl; 
        }
        test_constructors(const test_constructors &orig) {
            age = orig.age;
            std::cout << "Here is a copy constructor, age = " << age << std::endl;
        }
        test_constructors& operator=(const test_constructors & orig) {
            age = orig.age;
            std::cout << "Here is copy assignment, age = " << age << std::endl;
            return *this;
        }
        ~test_constructors() {
            std::cout << "This is a destructor action, age = " << age << std::endl;
        }
        double age;
};

int main(void) {
    test_constructors t1(5.0);
    test_constructors t2;
    t2 = t1;
    return 0;
}