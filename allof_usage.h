
#ifndef ALLOF_USAGE_H
#define ALLOF_USAGE_H

#include <string>
#include <vector>
#include <algorithm>

namespace AllOfUsage {
    int main() {

        std::cout << std::boolalpha;

        // all_of will go through a container such as array or vector and will pass each element to
        // function which should return a bool
        // we use it to check if all elements meet a certain condition implemented in the function callback
        // if yes, then the return type is true, otherwise false.
        std::vector<std::string> words = {"World", "Wood", "Cpp", "Waka waka",};

        bool allBeginWithW = std::all_of(words.begin(), words.end(), [](const std::string &str) {
            return str.at(0) == 'W';
        });

        std::cout << "All words begin with w? " << allBeginWithW << std::endl;
        std::string cpp = "cpp";
        bool allLower = std::all_of(cpp.begin(), cpp.end(), ::islower);

        std::cout << "All lower? " << allLower << std::endl;
        int numbers[] = {2, 4, 6, 8, 11};


        // all numbers are of type even
        bool allEvenNumbers = std::all_of(numbers, numbers + sizeof(numbers) / sizeof(int),
                                          [](const int &number) {
                                              return number % 2 == 0;
                                          });


        std::cout << "They are all even numbers ? " << allEvenNumbers << std::endl;
        return 0;
    }
}
#endif //ALLOF_USAGE_H
