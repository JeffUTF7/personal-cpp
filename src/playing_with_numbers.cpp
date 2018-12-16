#include <iostream>
#include "../include/number_comparison_lib.h"
#include <limits>

int main() {
    
    double temp1 = 0;
    double temp2 = 0;
    double temp_smallest_value = 0; //used to store the smallest value
    double temp_biggest_value = 0; //used to store the biggest value
    int values_equal = 1; //used to store whether the values are equal (true or false)

    std::cout << "\nEnter as many numbers as you like. " << std::endl;
    std::cin >> temp2;
    temp_smallest_value = temp2; //kickstart the variable so that it will not stay as 0 and affect the comparison
    temp_biggest_value = temp2; //just in case the first value is the biggest value

    double temp_val = temp2; //store the first value
    while (std::cin >> temp1) { //cannot use both temp1 and temp2 since the input will need to be even, which is unflexible
        temp_smallest_value = find_min(temp_smallest_value, temp1); 
        temp_biggest_value = find_max(temp_biggest_value, temp1); 

        //as long as values_equal is still 1 , keep comparing
        //if it's 0 or 2, it means one of the comparisons returns 0, therefore stop comparing 
        if (values_equal == 1) {
            values_equal = determine_equal(temp_val, temp1, true); //compare previous value to current value, and specify to enable almost-equal
            temp_val = temp1; //assign current value
        }
    }

    //output the final values
    std::cout << "\nLargest value: " << temp_biggest_value << '\n' << "Smallest value: " << temp_smallest_value << std::endl; 
    
    switch(values_equal) {
        case 1:
            std::cout << "The values are equal." << std::endl;
            break;
        case 0:
            std::cout << "The values are not equal." << std::endl;
            break;
        case 2:
            std::cout << "The values are almost equal." << std::endl;
            break;
        default:
            std::cout << "ERROR: This message was not supposed to show up. Try again or report the bug." << std::endl;
            break;
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    //conversion factors
    constexpr double meter_to_cm = 100.00;
    constexpr double inch_to_cm = 2.54;
    constexpr double feet_to_in = 12.00;

    std::string unit_indicator = " "; //unit indicator (such as in, ft, cm, m)
    std::cout << "\nEnter a number, followed by a unit indicator (eg. m, cm, ft, in). " << std::endl;
        
    //values to assign and output later
    double out_temp1 = 0.0; //meters
    double out_temp2 = 0.0; //centimeters
    double out_temp3 = 0.0; //feet  
    double out_temp4 = 0.0; //inches

    for (double value_tmp = 0; std::cin >> value_tmp >> unit_indicator;) {
        if ((unit_indicator == "m") || (unit_indicator == "M")) {
            out_temp1 = value_tmp;
            out_temp2 = value_tmp * meter_to_cm;
            out_temp3 = ((value_tmp * meter_to_cm) / inch_to_cm) / feet_to_in;
            out_temp4 = (value_tmp * meter_to_cm) / inch_to_cm;
        } else if ((unit_indicator == "cm") || (unit_indicator == "CM")) {
            out_temp1 = value_tmp / meter_to_cm;
            out_temp2 = value_tmp;
            out_temp3 = (value_tmp / inch_to_cm) / feet_to_in;
            out_temp4 = value_tmp / inch_to_cm;
        } else if ((unit_indicator == "ft") || (unit_indicator == "FT")) {
            out_temp1 = (value_tmp * feet_to_in * (inch_to_cm / meter_to_cm));
            out_temp2 = (value_tmp * (feet_to_in * inch_to_cm));
            out_temp3 = value_tmp;
            out_temp4 = value_tmp * feet_to_in;
        } else if ((unit_indicator == "in") || (unit_indicator == "IN")) {
            out_temp1 = value_tmp * (inch_to_cm / meter_to_cm);
            out_temp2 = value_tmp * inch_to_cm;
            out_temp3 = value_tmp / feet_to_in;
            out_temp4 = value_tmp;
        } else {
            std::cout << "No appropriate unit indicator detected. Exit." << std::endl;
            break; //break out of the loop immediately
        }

        std::cout << '\n' << value_tmp << " " << unit_indicator << " equals " << out_temp1 << " meters, " << out_temp2 << " centimeters, " << out_temp3 << " feet, "
        << out_temp4 << " inches."; 
    }

    std::cout << std::endl;

    return 0;
}