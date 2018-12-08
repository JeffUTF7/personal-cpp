#include <iostream>
#include "../include/number_comparison_lib.h"

int main() {
    
    int temp1 = 0;
    //int temp2 = 0;
    int temp_smallest_value = 0; //used to store the smallest value
    int temp_biggest_value = 0; //used to store the biggest value

    std::cout << "\nEnter as many integers as you like. " << std::endl;
    std::cin >> temp1; 
    temp_smallest_value = temp1; //kickstart the variable so that it will not stay as 0 and affect the comparison
    temp_biggest_value = temp1; //just in case the first value is the biggest value

    while (std::cin >> temp1) { //cannot use both temp1 and temp2 since the input will need to be even, which is unflexible
        temp_smallest_value = find_min(temp_smallest_value, temp1); 
        temp_biggest_value = find_max(temp_biggest_value, temp1); 
    }

    //output the final value
    std::cout << "\nLargest value: " << temp_biggest_value << '\n' << "Smallest value: " << temp_smallest_value << std::endl; 

    return 0;
}