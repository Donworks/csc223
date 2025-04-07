#include <iostream>
#include <queue>
#include <tuple>
#include <string>
using namespace std;

struct ColoredElement {
    std::string color;
    int priority;


    bool operator<(const ColoredElement& other) const {
        return priority < other.priority;

    }
};

int main() {

    std::priority_queue<ColoredElement> pq;


    pq.push({"Red", 3});
    pq.push({"Blue", 1});
    pq.push({"Green", 4});
    pq.push({"Yellow", 2});

    while (!pq.empty()) {
        ColoredElement current = pq.top();
        pq.pop();
        std::cout << "color" << current.color << ",Priority" << current.priority << std::endl;

    }
    return 0;
}