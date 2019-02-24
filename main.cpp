#include <iostream>
#include <string>
#include "akinator.hpp"



int main()
{
	std::string status = "yes";
	akinator a("cat");
	while(status == "yes")
	{
		a.start();
		std::cout << "Do you want to continue?(yes/no)\n";
		std::cin >> status;
		
		while(status != "yes"  && status != "no")
		{
			std::cout << "say yes or no\n";
			std::cin >> status;
		}
		
	}
	return 0;
}
