#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <iterator>
#include <forward_list>
int main() {
    // Vector iterator
    std::vector<int> my_vector = {1, 2, 3, 4, 5};
    std::cout << "Vector: ";
    for (std::vector<int>::iterator it = my_vector.begin(); it != my_vector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // List iterator
    std::list<std::string> my_list = {"Hello", "World", "!"};
    std::cout << "List: ";
    for (std::list<std::string>::iterator it = my_list.begin(); it != my_list.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Map iterator
    std::map<int, std::string> my_map = {{1, "One"}, {2, "Two"}, {3, "Three"}};
    std::cout << "Map: ";
    for (std::map<int, std::string>::iterator it = my_map.begin(); it != my_map.end(); ++it) {
        std::cout << it->first << "=>" << it->second << " ";
    }
    std::cout << std::endl;

    // Set iterator
    std::set<double> my_set = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Set: ";
    for (std::set<double>::iterator it = my_set.begin(); it != my_set.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // // Input iterator example using istream_iterator
    // std::cout << "Input Iterator: ";
    // std::istream_iterator<int> eos; // end-of-stream iterator
    // std::istream_iterator<int> iit(std::cin); // stdin iterator
    // while(iit != eos) {
    //     std::cout << *iit << " ";
    //     ++iit;
    //     if (*iit == 0) break; // Assuming 0 is the end of input for demonstration
    // }
    // std::cout << std::endl;

    // Output iterator example using ostream_iterator
    std::cout << "Output Iterator: ";
    std::ostream_iterator<int> oit(std::cout, " ");
    *oit = 10; ++oit;
    *oit = 20; ++oit;
    *oit = 30; ++oit;
    std::cout << std::endl;

    // Forward iterator example using forward_list
    std::forward_list<int> flist = {1, 2, 3, 4, 5};
    std::cout << "Forward Iterator: ";
    for (std::forward_list<int>::iterator fit = flist.begin(); fit != flist.end(); ++fit) {
        std::cout << *fit << " ";
    }
    std::cout << std::endl;

    // Bidirectional iterator example using list
    std::cout << "Bidirectional Iterator: ";
    std::list<int> blist = {1, 2, 3, 4, 5};
    for (std::list<int>::iterator bit = blist.begin(); bit != blist.end(); ++bit) {
        std::cout << *bit << " ";
    }
    std::cout << std::endl;

    // Random access iterator example using vector
    std::cout << "Random Access Iterator: ";
    std::vector<int> ralist = {1, 2, 3, 4, 5};
    for (std::vector<int>::iterator rit = ralist.begin(); rit != ralist.end(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;
    return 0;
}
