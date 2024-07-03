#include <iostream>
#include <map>
#include <set>

int main() {
    std::map<int, std::string> my_map;
    std::set<int> my_set;

    // Inserting elements into the map
    my_map[1] = "Map Element 1";
    my_map[2] = "Map Element 2";
    my_map[3] = "Map Element 3";

    // Inserting elements into the set
    my_set.insert(1);
    my_set.insert(2);
    my_set.insert(3);

    // Attempting to insert a duplicate element into the map
    my_map[1] = "Map Element 1 Updated";

    // Attempting to insert a duplicate element into the set
    my_set.insert(1);

    // Printing the elements of the map
    for (auto const& pair : my_map) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    // Printing the elements of the set
    for (auto const& element : my_set) {
        std::cout << element << std::endl;
    }

    return 0;
}
