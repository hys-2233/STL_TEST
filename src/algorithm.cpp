#include <algorithm>
#include <numeric>
#include <vector>
#include <iostream>

int main() {
    // Sorting
    std::vector<int> vec = {4, 2, 5, 1, 3};
    std::sort(vec.begin(), vec.end());
    std::cout << "Sorted: ";
    for (int n : vec) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    // Searching
    auto it = std::find(vec.begin(), vec.end(), 3);
    std::cout << "Element 3 found at position: " << std::distance(vec.begin(), it) << '\n';

    // Numeric operations
    int sum = std::accumulate(vec.begin(), vec.end(), 0);
    std::cout << "Sum: " << sum << '\n';

    // Set operations
    std::vector<int> vec1 = {1, 2, 3, 4, 5};
    std::vector<int> vec2 = {3, 4, 5, 6, 7};
    std::vector<int> intersection;
    std::set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), std::back_inserter(intersection));
    std::cout << "Intersection: ";
    for (int n : intersection) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    // Modifying sequence operations
    std::transform(vec.begin(), vec.end(), vec.begin(), [](int n) { return n * n; });
    std::cout << "Squared: ";
    for (int n : vec) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    // Generating and mutating
    std::vector<int> generated(5);
    std::generate(generated.begin(), generated.end(), [n = 0]() mutable { return n++; });
    std::cout << "Generated: ";;
    for (int n : generated) {
        std::cout << n << ' ';
    }
    std::cout << '\n';

    // Numeric algorithms
    int product = std::accumulate(vec.begin(), vec.end(), 1, std::multiplies<int>());
    std::cout << "Product: " << product << '\n';

    return 0;
}
