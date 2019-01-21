#include <iostream>

int main() {

	int program_choice = 0;
	std::cout << "Choose program: ";
	std::cin >> program_choice;

	switch (program_choice) {
		case 1:
			"filtering_program.cpp".main();
			break;
		case 2:
			"name_and_score.cpp".main();
			break;
		case 3:
			"playing_with_numbers.cpp".main();
			break;
		default:
			std::cout << "Enter the correct number. " << std::endl;
	}

	return 0;
}