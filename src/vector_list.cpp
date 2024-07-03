#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main(int, char**){
    std::vector<int> vec;
    std::list<int> lst;
    int size = 1000000; // 1 million elements

    // Fill the vector and list
    for(int i = 0; i < size; i++) {
        vec.push_back(i);
        lst.push_back(i);
    }

    // Query in vector
    auto pos = size / 2;
    auto start = std::chrono::high_resolution_clock::now();
    int value = vec[pos]; // Accessing the element at position pos
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Time taken for vector query: " << elapsed.count() << "s\n";

    // Query in list
    start = std::chrono::high_resolution_clock::now();
    auto it = std::next(lst.begin(), size / 2); // Advancing iterator to the middle
    int val = *it; // Accessing the element at the middle
    end = std::chrono::high_resolution_clock::now();
    elapsed = end - start;
    std::cout << "Time taken for list query: " << elapsed.count() << "s\n";
}
