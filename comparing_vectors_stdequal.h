
#ifndef COMPARING_VECTORS_STDEQUAL_H
#define COMPARING_VECTORS_STDEQUAL_H

#include <iostream>
#include <vector>

namespace ComparingVectorsStdEqualInt {
    int main() {
        std::vector<int> vector1{0, 1, 2, 3};
        std::vector<int> vector2{0, 1, 2, 3};

        // Compare whole vector1 vs whole vector
        if (std::equal(vector1.begin(), vector1.end(), vector2.begin())) {
            std::cout << "They hold the same content" << std::endl;
        }

        // Compare whole vector1 vs vector2[1:]
        if (std::equal(vector1.begin(), vector1.end(), vector2.begin() + 1)) {
            std::cout << "They hold the same content" << std::endl;
        }
    }
}
#endif //COMPARING_VECTORS_STDEQUAL_H
