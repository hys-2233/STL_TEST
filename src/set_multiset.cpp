#include <iostream>
#include <set>

int main() {
    std::set<int> my_set;
    std::multiset<int> my_multiset;

    // Inserting elements into the set
    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(2); // Duplicate elements are not allowed in a set

    // Inserting elements into the multiset
    my_multiset.insert(1);
    my_multiset.insert(2);
    my_multiset.insert(2); // Duplicate elements are allowed in a multiset

    // Printing the elements of the set
    for (auto const& element : my_set) {
        std::cout << element << std::endl;
    }

    // Printing the elements of the multiset
    for (auto const& element : my_multiset) {
        std::cout << element << std::endl;
    }

    return 0;
}
