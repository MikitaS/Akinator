#pragma once

#include "BinaryTreeCpp/tree.hpp"
#include <string>

class akinator
{
public:
	akinator(std::string name);
	~akinator();
	
	int start();
	void read_from_file(std::string filename);
	void save_to_file(std::string filename);
private:
	bool askname();
	bool askquestion();
	void addnew();

	tree tree_;
};
