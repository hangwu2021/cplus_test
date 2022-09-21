#include <iostream>
#include <utility>
#include <tuple>

std::pair<std::string, int> getPerson()
{
	return std::make_pair("Sven", 13);
}

int main()
{
	std::string name;
	int age;

	std::tie(name, age) = getPerson();

	std::cout << name << ", " << age << std::endl;

	return 0;
}
