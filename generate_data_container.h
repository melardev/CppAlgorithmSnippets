
#ifndef GENERATE_DATA_CONTAINER_H
#define GENERATE_DATA_CONTAINER_H

#include <vector>
#include <iostream>
#include <algorithm>

namespace GenerateDataContainer {
    void dump_vector(const std::vector<int> &vec) {
        std::cout << "vector={";
        for (auto const &val: vec)
            std::cout << val << ", ";
        std::cout << "};" << std::endl << std::endl;
    }

    int main() {
        std::vector<int> vec = {0, 0, 0, 0, 0};


        std::cout << "Starting point" << std::endl;
        dump_vector(vec);

        std::generate(vec.begin(), vec.end(), rand);
        std::cout << "Random data" << std::endl;
        dump_vector(vec);

        std::fill(vec.begin(), vec.end(), 0); // reset vector

        std::generate_n(vec.begin(), 3, rand);
        std::cout << "Random data from index 0 to 3(not included)" << std::endl;
        dump_vector(vec);
    }
}
#endif //GENERATE_DATA_CONTAINER_H
