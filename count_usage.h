
#ifndef COUNT_USAGE_H
#define COUNT_USAGE_H

#include <vector>
#include <algorithm>
#include <iostream>

namespace CountUsage {


    int main() {
        std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 7, 7};
        long elements_greater_than_3 = std::count_if(vec.begin(), vec.end(), [](int x) { return x > 3; });
        std::cout << "There are " << elements_greater_than_3 << " elements greater than 3" << std::endl;

        int many_times_7 = count(vec.begin(), vec.end(), 7);
        std::cout << "7 appears " << many_times_7 << " times" << std::endl;

        int many_times_1_offset_2 = count(vec.begin() + 2, vec.end(), 1);
        std::cout << "1 appears " << many_times_1_offset_2 << " times after offset 2" << std::endl;
    }
}
#endif //COUNT_USAGE_H
