#include <iostream> 
#include "solution.h" 
int main() {
    int first, second;
    
    std::cout << "input the first number\n";
    std::cin >> first;
    std::cout << "input the second number\n";
    std::cin >> second;
    
    std::cout << "the greatest common delimeter is " << solution(first, second) << std::endl;
} 
