

#ifndef COMPARING_VECTORS_EQOPERATOR_H
#define COMPARING_VECTORS_EQOPERATOR_H

#include <iostream>
#include <vector>

namespace ComparingVectorsEqOp {
    int main() {
        std::vector<int> vector1{0, 1, 2, 3};
        std::vector<int> vector2{0, 1, 2, 3};
        // the == will go through each element and use the == operator
        // 0 == 0 && 1 == 1 && 2 == 2 and so on
        if (vector1 == vector2) {
            std::cout << "Both vectors hold the same content" << std::endl;
        }
    }
}
#endif //COMPARING_VECTORS_EQOPERATOR_H
