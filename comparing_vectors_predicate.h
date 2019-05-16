#ifndef COMPARING_VECTORS_PREDICATE_H
#define COMPARING_VECTORS_PREDICATE_H

#include <iostream>
#include <vector>
#include <functional>

namespace ComparingVectorsEqualPredicate {
    int main() {
        std::vector<std::string> vector1{"Cpp", "Java", "Python"};
        std::vector<std::string> vector2{"Cpp", "Java", "Python"};


        // Comparator to compare two strings in case insensitive manner
        std::function<bool(const std::string &, const std::string &)> comparator = [](const std::string &left,
                                                                                      const std::string &right) {
            // Lambda function to compare 2 strings in case insensitive manner
            return std::equal(left.begin(), left.end(), right.begin(), [](const int &l, const int &r) {
                return (::toupper(l) == ::toupper(r));
            });
        };

        if (std::equal(vector1.begin(), vector1.end(), vector2.begin(), comparator)) {
            std::cout << "They are the same regarding our custom predicate" << std::endl;
        } else
            std::cout << "The vectors differ each other" << std::endl;

    }
}
#endif //COMPARING_VECTORS_PREDICATE_H
