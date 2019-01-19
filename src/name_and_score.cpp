#include <iostream>
#include <string>
#include <vector>

int main() {
    //declare required vector objects
    std::vector<std::string> user_names;
    std::vector<int> user_scores;

    int user_score_temp = 0; //default value 0
    for (std::string user_name_temp = " "; std::cin >> user_name_temp >> user_score_temp;) {
        if (user_name_temp == "NoName" && user_score_temp == 0) {
            //user wants to end input
            break;
        } else {
            user_names.push_back(user_name_temp);
            user_scores.push_back(user_score_temp);
        }
    }

    //make sure nothing remains in output stream
    std::cout << std::endl;

    //output stuff
    for (int vctr_counter = 0; (vctr_counter < (user_names.size() + user_scores.size()) / 2); vctr_counter++) {
        std::cout << user_names[vctr_counter] << " " << user_scores[vctr_counter] << std::endl;
    }

    //request a user name from user
    std::string temp_console_usr_nm = " "; //console input
    while (temp_console_usr_nm != "EXIT") {
        std::cout << "\n[Console] Enter a name: ";
        std::cin >> temp_console_usr_nm;

        //search for user name in user_names
        for (int usr_nms_counter = 0; true; usr_nms_counter++) {
            if (user_names[usr_nms_counter] == temp_console_usr_nm) { //match
                std::cout << user_names[usr_nms_counter] << " " << user_scores[usr_nms_counter] << std::endl;
                break; //exit out of for-loop
            } else if (usr_nms_counter == (user_names.size() - 1)) { //already arriving to last index, no match
                std::cout << "Not found. " << std::endl;
                break;
            }
        }

    }

    std::cout << "Reached end of program. Exit. " << std::endl;

    return 0;
}
