//
// Created by lahra on 4/13/2019.
//

#ifndef ANY_OF_DEMO_H
#define ANY_OF_DEMO_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

namespace AnyOfDemo {
    int main() {
        std::vector<std::string> words =
                {"Cpp", "Java", "Python", ".net", "ASP", "ruby"};

        // at least one begins with dot
        bool result = std::any_of(words.begin(), words.end(), [](const std::string &str) {
            return str.size() > 0 && str[0] == '.';
        });
        std::cout << "at least one begins with dot: " << result << std::endl;

        // at least one word is 5 chars long
        result = std::any_of(words.begin(), words.end(), [](const std::string &str) {
            return str.size() == 5;
        });

        std::cout << "at least one word with 5 chars long: " << result << std::endl;
        std::string str = "CPP IS COOL";


        // all chars are uppercase(::isupper), lower would be ::islower
        result = std::any_of(str.begin(), str.end(), ::isupper);
        std::cout << "str  = " << str << std::endl;
        std::cout << str << " Is it all uppercase? " << result << std::endl;
        return 0;
    }
}
#endif //ANY_OF_DEMO_H
