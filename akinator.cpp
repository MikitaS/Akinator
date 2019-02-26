#include <iostream>
#include <string>
#include "akinator.hpp"
#include "BinaryTreeCpp/tree.hpp"

///Constructors and destructor:

akinator::akinator(std::string name) : tree_(name)
{}

akinator::~akinator()
{}


int akinator::start()
{
	tree_.go_head();
	while(true)
	{
		if(!tree_.is_left())
		{
			if(askname())
			{
				std::cout << "HOORAY! Your subject is " << tree_.data() << "!" << std::endl;
				return 1;
			}
			else 
			{
				addnew();
				return 1;
			}
		}
		else
		{
			if(askquestion())
			{
				tree_.go_right();
			}
			else
			{
				tree_.go_left();
			}
		}
	}
}

bool akinator::askname()
{
	std::string answer;
	std::cout << "your subject is " << tree_.data() << "? (yes/no)" << std::endl;
	
	std::cin >> answer;
	while(true)
	{
		if(answer == "yes")
			return 1;
		else if(answer == "no")
			return 0;
		else std::cout << "say yes or no\n";
		std::cin >> answer;
	}
	
}

bool akinator::askquestion()
{
	std::string answer;
	std::cout << tree_.data() << std::endl;
	
	std::cin >> answer;
	while(true)
	{
		if(answer == "yes")
			return 1;
		else if(answer == "no")
			return 0;
		else std::cout << "say yes or no\n";
		std::cin >> answer;
	}
	
}
void akinator::addnew()
{
	static const int sizeofstr = 50;
	std::string answer;
	std::cout << "what is the name of your subject?" << std::endl;
	std::cin >> answer;
	
	tree_.add_right(answer);
	tree_.add_left(tree_.data());
	
	std::cout << "what quastion can define is it " << answer << " or " << tree_.data() << "?" << std::endl;
	
	std::getline(std::cin, answer);
	std::getline(std::cin, answer);
	
	tree_.data() = answer;
	
}

void akinator::read_from_file(std::string filename)
{
	tree_.from_file(filename);
}

void akinator::save_to_file(std::string filename)
{
	tree_.to_file(filename);
}
