#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
#include <chrono>

int main() {
    std::map<int, std::string> ordered_map;
    std::unordered_map<int, std::string> unordered_map;

    // Fill both maps with some data
    for (int i = 0; i < 100000; ++i) {

        ordered_map[i] = "Ordered Map Value";
        unordered_map[i] = "Unordered Map Value";
    }

    // Measure time taken to find an element in ordered map
    auto start = std::chrono::high_resolution_clock::now();
    auto it_ordered = ordered_map.find(50000);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_ordered = end - start;
    std::cout << "Time taken to find an element in ordered map: " << elapsed_ordered.count() << "s\n";

    // Measure time taken to find an element in unordered map
    start = std::chrono::high_resolution_clock::now();
    auto it_unordered = unordered_map.find(50000);
    end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed_unordered = end - start;
    std::cout << "Time taken to find an element in unordered map: " << elapsed_unordered.count() << "s\n";

    return 0;
}
