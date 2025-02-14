#include <iostream>
#include <vector>

void part1() {
    std::vector<int> vec;
    
    // Add 50,000 elements
    for (int i = 0; i < 50000; ++i) {
        vec.push_back(i);
    }
    std::cout << "After adding elements: Size = " << vec.size() << ", Capacity = " << vec.capacity() << "\n";
    
    // Resize to half
    vec.resize(vec.size() / 2);
    std::cout << "After resizing: Size = " << vec.size() << ", Capacity = " << vec.capacity() << "\n";
    
    // Shrink to fit
    vec.shrink_to_fit();
    std::cout << "After shrink_to_fit(): Size = " << vec.size() << ", Capacity = " << vec.capacity() << "\n";
}

void part2() {
    std::vector<bool> boolVec(10000);
    std::vector<char> charVec(10000);
    
    std::cout << "Memory usage of std::vector<bool>: " << ((boolVec.capacity() + 7) / 8) << " bytes\n";
    std::cout << "Memory usage of std::vector<char>: " << (charVec.capacity() * sizeof(char)) << " bytes\n";
}

int main() {
    part1();
    std::cout << "\n";
    part2();
    return 0;
}
