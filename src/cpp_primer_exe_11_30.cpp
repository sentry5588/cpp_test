/**
 * C++ primer 11, exercise 11.30
 */
#include <iostream>
#include <map>
#include <string>

int main(void)
{
    std::multimap<std::string, std::string> m = { { "Joyce", "James" },
        { "Austen", "Jane" },
        { "Dickens", "Charles" } };
    m.insert({ "abc", "d1" });
    m.insert({ "abc", "d2" });
    m.insert({ "abc", "d3" });
    std::cout << "m.size() = " << m.size() << std::endl;
    for (auto pos = m.equal_range({ "abc" });
         pos.first != pos.second; ++pos.first) {

        // ==============================================
        // Answer: this is pair of pair
        std::cout << pos.first->second << std::endl;
        // ==============================================
    }

    return 0;
}