// Write a program to demonstrate the difference between map and multimap
#include <iostream>
#include <map>
#include <string>

int main() {
    // Creating a map
    std::map<int, std::string> my_map;

    // Inserting elements into the map
    my_map.insert(std::make_pair(1, "Map Element 1"));
    my_map.insert(std::make_pair(2, "Map Element 2"));
    my_map.insert(std::make_pair(2, "Map Element 2 Duplicate"));  // Duplicate key is not allowed in a map

    // Printing the elements of the map
    for (auto const& pair : my_map) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    // Creating a multimap
    std::multimap<int, std::string> my_multimap;

    // Inserting elements into the multimap
    my_multimap.insert(std::make_pair(1, "Multimap Element 1"));
    my_multimap.insert(std::make_pair(2, "Multimap Element 2"));
    my_multimap.insert(std::make_pair(2, "Multimap Element 2 Duplicate"));  // Duplicate key is allowed in a multimap

    // Printing the elements of the multimap
    for (auto const& pair : my_multimap) {
        std::cout << pair.first << " => " << pair.second << std::endl;
    }

    return 0;
}


