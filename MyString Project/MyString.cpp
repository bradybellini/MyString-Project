#include "MyString.h"



MyString::MyString(std::string s)
{
	array = new char[s.size()];
	//copy string to array after we just made the string.
	//curr.length = capacity - s.size() size of string.
}

void MyString::ensureCapacity()
{
}
