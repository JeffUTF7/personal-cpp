#include <iostream>
#include <string>
#include <vector>
#include <limits>

/* A rewritten version of the filtering that was supposed to work, a decade ago.
   The words in the disliked_words vector is (no longer)pre-defined, now with the 
   ability to define those words yourself. */

int main() {

    //variable which to output
    std::string output_var = " ";

    //get list of words from user
    std::vector<std::string> list_of_words;
    std::cout << "Enter a list of words: ";
    
    //as long as there are words in the input stream, put it into temporary
    for (std::string temporary; (std::cin >> temporary) && (temporary != "|");) {
        list_of_words.push_back(temporary);
    }

    std::cout << std::endl;

    //list of disliked words
    std::vector<std::string> disliked_words;

    std::cout << "Enter a list of disliked words: ";    

    for (std::string temporary_disliked_words; (std::cin >> temporary_disliked_words) && (temporary_disliked_words != "|");) {
        disliked_words.push_back(temporary_disliked_words);
    }

    //cycle through list_of_words and find if it matches any words from
    //disliked_words
    for (std::string temporary2 : list_of_words) {
        for (std::string temporary3 : disliked_words) {
            if (temporary2 == temporary3) {
                output_var = "BLEEP!";
                break;
            } else if (temporary2 != temporary3) {
                output_var = temporary2;
            }
        }

        std::cout << output_var << std::endl;
    }

    return 0;
}