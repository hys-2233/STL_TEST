#include <iostream>
#include <map>
#include <unordered_map>


int main () {
// Create a map and an unordered_map
std::map<int, std::string> my_map;
std::unordered_map<int, std::string> my_unordered_map;

// Insert elements into the map and unordered_map
my_map[1] = "Map Element 1";
my_map[2] = "Map Element 2";
my_map[3] = "Map Element 3";

my_unordered_map[1] = "Unordered Map Element 1";
my_unordered_map[2] = "Unordered Map Element 2";
my_unordered_map[3] = "Unordered Map Element 3";

// Print the elements of the map
for (auto const& pair : my_map) {
    std::cout << pair.first << " => " << pair.second << std::endl;
}

// Print the elements of the unordered_map
for (auto const& pair : my_unordered_map) {
    std::cout << pair.first << " => " << pair.second << std::endl;
}

}
