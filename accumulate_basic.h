#ifndef ACCUMULATE_BASIC_H
#define ACCUMULATE_BASIC_H

#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

namespace AccumulateBasic {
    int main() {
        std::vector<int> numbers{1, 2, 3, 10};
        // 1 + 2 + 3 + 10 + 0
        auto sum = std::accumulate(std::begin(numbers), std::end(numbers), 0);
        std::cout << sum << std::endl;
    }
}
#endif //ACCUMULATE_BASIC_H
