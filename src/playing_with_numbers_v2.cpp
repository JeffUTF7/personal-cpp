#include <iostream>
#include "../include/number_comparison_lib.h"

int main() {
    double tinput1 = 0.0;
    double tinput2 = 0.0;

    while (std::cin >> tinput1 >> tinput2) {
        std::cout << "\nFirst value: " << tinput1 << '\n' << "Second value: " << tinput2 << std::endl;
        
        if (tinput1 > tinput2) {
            std::cout << "The smaller value is: " << tinput2 << '\n' << "The larger value is: " << tinput1 << std::endl;
        } else if (tinput1 < tinput2) {
            std::cout << "The smaller value is: " << tinput1 << '\n' << "The larger value is: " << tinput2 << std::endl;
        } 
        
        if (tinput1 == tinput2) {
            std::cout << "The values are equal." << std::endl;
        } else if (find_max(tinput1, tinput2) - find_min(tinput1, tinput2) <= 0.01) {
            std::cout << "The values are almost equal." << std::endl;
        }
    }
}

