#include <fstream>
#include <iostream>
#include <string>

int main() {
	std::ifstream display;
	display.open("F:\\__C++\\Skillbox\\19\\19.5.2\\Files\\display.txt");
	if (!display.is_open()) {
		std::cout << "ERROR file opening! Try to correct path or any." << std::endl;
		return 0;
	}

	char buffer[926];
	while (!display.eof()) {
		display.read((char*)buffer, sizeof(buffer));
		//std::cout << display.gcount() << std::endl;
		std::cout << buffer;
	}
	//std::cout << std::endl;

	display.close();
	return 0;
}
