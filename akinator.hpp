#pragma once

#include "BinaryTreeCpp/tree.hpp"
#include <string>

class akinator
{
public:
	akinator(std::string name);
	~akinator();
	
	int start();
private:
	bool askname();
	bool askquestion();
	void addnew();

	tree tree_;
};
