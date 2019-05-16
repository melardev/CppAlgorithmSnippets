
#ifndef FILL_GENERATE_DEMO_H
#define FILL_GENERATE_DEMO_H

#include <vector>
#include <iostream>
#include <algorithm>

namespace FillContainer {
    void dump_vector(const std::vector<int> &vec) {
        for (auto const &val: vec)
            std::cout << val;
        std::cout << std::endl << std::endl;
    }


    int main() {

        std::vector<int> vec = {0, 0, 0, 0, 0};

        std::cout << "Starting point" << std::endl;
        dump_vector(vec);
        std::fill(vec.begin(), vec.end(), 5);

        std::cout << "Filled with 5" << std::endl;
        dump_vector(vec);

        std::fill(vec.begin(), vec.end(), 0); // reset vector
        fill_n(vec.begin(), 4, 4); // from index 0 to index 4(not included)


        std::cout << "Filled with 4 up to index 4" << std::endl;
        dump_vector(vec);


    }
}
#endif //FILL_GENERATE_DEMO_H
