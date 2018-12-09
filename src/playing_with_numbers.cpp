#include <iostream>
#include "../include/number_comparison_lib.h"

int main() {
    
    double temp1 = 0;
    double temp2 = 0;
    double temp_smallest_value = 0; //used to store the smallest value
    double temp_biggest_value = 0; //used to store the biggest value
    bool values_equal = true; //used to store whether the values are equal (true or false)

    std::cout << "\nEnter as many numbers as you like. " << std::endl;
    std::cin >> temp2;
    temp_smallest_value = temp2; //kickstart the variable so that it will not stay as 0 and affect the comparison
    temp_biggest_value = temp2; //just in case the first value is the biggest value

    double temp_val = temp2; //store the first value
    while (std::cin >> temp1) { //cannot use both temp1 and temp2 since the input will need to be even, which is unflexible
        temp_smallest_value = find_min(temp_smallest_value, temp1); 
        temp_biggest_value = find_max(temp_biggest_value, temp1); 

        //as long as values_equal is still true, keep comparing
        //if it's false, it means one of the comparisons returns false, therefore stop comparing
        if (values_equal == true) {
            values_equal = determine_equal(temp_val, temp1); //compare previous value to current value
            temp_val = temp1; //assign current value
        }
    }

    //output the final values
    std::cout << "\nLargest value: " << temp_biggest_value << '\n' << "Smallest value: " << temp_smallest_value << std::endl; 
    
    switch(values_equal) {
        case true:
            std::cout << "The values are equal." << std::endl;
            break;
        case false:
            std::cout << "The values are not equal." << std::endl;
            break;
    }

    return 0;
}