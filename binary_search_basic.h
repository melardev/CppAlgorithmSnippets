
#ifndef BINARY_SEARCH_BASIC_H
#define BINARY_SEARCH_BASIC_H

#include <vector>
#include <algorithm>
#include <iostream>

namespace BinarySearchBasic {
    int main() {
        std::vector<int> vec = {10, 20, 21, 30, 30, 42, 43, 48, 49, 50, 50, 50, 51};

        bool found = std::binary_search(vec.begin(), vec.end(), 10);
        std::cout << std::boolalpha;
        std::cout << "10 is Found? " << found << std::endl;

        found = std::binary_search(vec.begin(), vec.end(), 23);

        std::cout << "23 is Found? " << found << std::endl;
    }
}
#endif //BINARY_SEARCH_BASIC_H
