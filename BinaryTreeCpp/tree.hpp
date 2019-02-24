#pragma once

#include <string>

struct TreeElement
{
	std::string data_;
	TreeElement * parent_;
	TreeElement * left_;
	TreeElement * right_;
	
};

class tree
{
public:
///Constructors and destructor:
	tree();
	explicit tree(std::string str);
	~tree();

///Methods:
	/*move current pointer
	 * return 0 if your way is empty*/
	bool go_left();
	bool go_right();
	bool go_back();
	void go_head();
	
	/*add new element
	 * return 0 if you way is already exist*/
	bool add_left(std::string data);
	bool add_right(std::string data);
	
	/*delete element
	 * return 0 if your way is empty*/
	bool del_right();
	bool del_left();
	
	/*return 1 if your way exist*/ 
	bool is_left();
	bool is_right();
	
	/*return link to a data of current element*/
	std::string & data();

private:
	/*delete tree starting from pointer*/
	void delete_tree(TreeElement * first);

	TreeElement * head_;
	TreeElement * current_;
	
};
