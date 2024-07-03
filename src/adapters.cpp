#include <iostream>
#include <stack>
#include <queue>
#include <bitset>

int main() {
    // Stack adapter demonstration
    std::stack<int> my_stack;
    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);
    std::cout << "Stack top: " << my_stack.top() << std::endl;
    my_stack.pop();
    std::cout << "Stack top after pop: " << my_stack.top() << std::endl;

    // Queue adapter demonstration
    std::queue<int> my_queue;
    my_queue.push(1);
    my_queue.push(2);
    my_queue.push(3);
    std::cout << "Queue front: " << my_queue.front() << std::endl;
    my_queue.pop();
    std::cout << "Queue front after pop: " << my_queue.front() << std::endl;

    // Priority Queue adapter demonstration
    std::priority_queue<int> my_priority_queue;
    my_priority_queue.push(3);
    my_priority_queue.push(1);
    my_priority_queue.push(2);
    std::cout << "Priority Queue top: " << my_priority_queue.top() << std::endl;
    my_priority_queue.pop();
    std::cout << "Priority Queue top after pop: " << my_priority_queue.top() << std::endl;

    // Bitset adapter demonstration
    std::bitset<8> my_bitset(42); // 42 in binary is 00101010
    std::cout << "Bitset: " << my_bitset << std::endl;
    my_bitset.set(4); // Set bit at position 4
    std::cout << "Bitset after set: " << my_bitset << std::endl;
    my_bitset.reset(4); // Reset bit at position 4
    std::cout << "Bitset after reset: " << my_bitset << std::endl;
    my_bitset.flip(); // Flip all bits
    std::cout << "Bitset after flip: " << my_bitset << std::endl;

    return 0;
}
