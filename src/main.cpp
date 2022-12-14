#include <iostream>
#include <fstream>
#include <string>

#include <nlohmann/json.hpp>

int main()
{
	std::ifstream file("film.json");
	if (!file.is_open())
	{
		std::cerr << "Error open file!!!" << std::endl;
		return 1;
	}

	nlohmann::json j;

	file >> j;

	std::cout << j["Terminator 2"] << std::endl;
	std::cout << j["Avatar"] << std::endl;
	std::cout << j["Ghostbusters"] << std::endl;
	std::cout << j["Dune"] << std::endl;
	std::cout << j["Aliens"] << std::endl;

	file.close();
	return 0;
}
