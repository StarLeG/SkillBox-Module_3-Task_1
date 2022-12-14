#include <iostream>
#include <fstream>
#include <string>

#include <nlohmann/json.hpp>

int main()
{
	std::ifstream file("film.json");
 	if(!file.is_open())
	{
		 std::cerr << "Error open file!!!" << std::endl;
		return 1;
	}

	nlohmann::json j;

	 file >> j;
	 std::cout << j;


	file.close();
	return 0;
}
