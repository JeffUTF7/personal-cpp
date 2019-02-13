#include <iostream>
#include <string>

int main() {
	//just created to practice concepts from C++ Primer, section 3.2.2
	
	std::string s1 = "Hello world"; //copy initialization, the newly created object is a copy of the original literal
	std::string s2("Hello world again"); //direct initialization, the literal is directly transferred to the object

	std::cout << s1 << " " << s2 << std::endl; //now we output that
	
	std::string s3 = " ";
	std::cout << "Enter a line: ";
	std::getline(std::cin, s3);

	//let's compare strings
	if (s1 == s2) {
		std::cout << s1 << " and " << s2 << " are equal. " << std::endl;
	} else { //s1 != s2 
		std::cout << s1 << " and " << s2 << " are not equal. " << std::endl;
	}

	std::cout << "Size of string entered just now (" << s3 << ") : " << s3.size() << std::endl;

	//let's initialize a std::string::size_type object, but with auto
	auto s3_size = s3.size(); //should be std::string::size_type
	std::string::size_type s3_size_2 = s3.size(); //do it manually again

	std::cout << "Index 0 of " << s3 << " : " << s3[0] << std::endl;

	std::string s4(20, 'a'); //fun initialization
	std::cout << s4 << std::endl;

	return 0;
}
