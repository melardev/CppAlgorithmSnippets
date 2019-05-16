
#ifndef COPY_DEMO_H
#define COPY_DEMO_H

#include <iostream>
#include <algorithm>
#include <vector>

namespace StdCopyVector {

    void dump_vector(const std::vector<int> &vec) {
        for (auto const &val: vec)
            std::cout << val << ", ";
        std::cout << std::endl << std::endl;
    }

    int main() {
        std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
        std::vector<int> vec2 = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

        copy(vec.begin(), vec.end(), // Source
             vec2.begin());          // Destination
        std::cout << "copy" << std::endl;
        dump_vector(vec2);

        std::fill(vec2.begin(), vec2.end(), 0); // reset vec2
        std::copy_if(vec.begin(), vec.end(),      // Source
                     vec2.begin(),                // Destination
                     [](int x) { return x > 3; });   // Condition predicate
        std::cout << "copy_if > 3" << std::endl;
        dump_vector(vec2);

        std::fill(vec2.begin(), vec2.end(), 0); // reset vec2
        std::copy_n(vec.begin(), 3, vec2.begin()); // copy only 3 elements
        std::cout << "copy_n" << std::endl;
        dump_vector(vec2);


        std::fill(vec2.begin(), vec2.end(), 0); // reset vec2
        std::copy_backward(vec.begin(), vec.end(),  // Source
                           vec2.end());              // Destination
        std::cout << "copy_backward" << std::endl;
        dump_vector(vec2);
    }
}
#endif //COPY_DEMO_H
