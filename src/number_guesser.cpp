#include <iostream>

//this was mostly done by the good folks on the Internet, not by me!
//such efficient code :)
int main() {
    std::cout << "Welcome to the number guesser. Choose a number between 1 and 100, and answer the questions given. " << std::endl;
    std::cout << "Answer the questions with either '[s]maller', '[g]reater' or '[e]qual. \n" << std::endl;

    char user_rspns = 0;
    int max_possible = 100;
    int min_possible = 0;
    int num_guess = 0;
    
    while (user_rspns != 'e') {

        std::cout <<  "The number " << (max_possible + min_possible) / 2 << " [s/g/e]? ";
        std::cin >> user_rspns;

        if (user_rspns == 's') {
            max_possible = (max_possible + min_possible) / 2; 
        } else if (user_rspns == 'g') {
            min_possible = (max_possible + min_possible) / 2;
        } else if (user_rspns == 'e') {
            num_guess = (max_possible + min_possible) / 2;
        } else {
            std::cout << "No appropriate input detected. Please make sure you didn't input characters other than 's', 'g' or 'e'. " << std::endl;
        }

    }

    std::cout << "Reached end of program. Exit. " << std::endl;

}