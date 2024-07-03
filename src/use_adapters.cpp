#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <functional>

int main() {
    // Stack adapter demonstration
    std::stack<int, std::vector<int>> my_stack;
    my_stack.push(1);
    my_stack.push(2);
    my_stack.push(3);
    std::cout << "Stack top: " << my_stack.top() << std::endl;
    my_stack.pop();
    std::cout << "Stack top after pop: " << my_stack.top() << std::endl;

    // Queue adapter demonstration
    std::queue<int, std::list<int>> my_queue;
    my_queue.push(1);
    my_queue.push(2);
    my_queue.push(3);
    std::cout << "Queue front: " << my_queue.front() << std::endl;
    my_queue.pop();
    std::cout << "Queue front after pop: " << my_queue.front() << std::endl;

    // Priority Queue adapter demonstration
    std::priority_queue<int, std::vector<int>, std::greater<int>> my_priority_queue;
    my_priority_queue.push(3);
    my_priority_queue.push(1);
    my_priority_queue.push(2);
    std::cout << "Priority Queue top: " << my_priority_queue.top() << std::endl;
    my_priority_queue.pop();
    std::cout << "Priority Queue top after pop: " << my_priority_queue.top() << std::endl;

    return 0;
}
