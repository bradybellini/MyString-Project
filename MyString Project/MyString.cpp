#include "MyString.h"

//things to get help on, ostream operator <<, check that the index operators are working as intended
// [] 
//ask about overloading the index operator for the get method since you can already use it with an array
//check if using an array is okay for the get method instead of using a MyString Object

MyString::MyString()
{
	curr_length = 0;
	array = new char[0];
}

MyString::MyString(std::string s)
{
	array = new char[s.size()];
	for (int i = 0; i < s.size(); i++) {
		array[i] = s[i];
	}

	capacity = s.size();
	curr_length = s.size();
	//copy string to array after we just made the string.
	//curr.length = capacity - s.size() size of string.
}

int MyString::length()
{
	return curr_length;
}

char MyString::get(int i)
{
	return array[i];
}

char& MyString::operator[](const int i)
{
	if (i >= 0 && i < curr_length) {
		return array[i];
	}
	else {
		exit(1);
	}
}



void MyString::ensureCapacity()
{
	if (capacity > curr_length) {
		return;
	}

	if (array == nullptr) {
		array = new char[5];
		capacity = 5;
		return;
	}
	else {
		char* temp = new char[capacity * 2];
		for (int i = 0; i < curr_length; i++) {
			temp[i] = array[i];
			capacity = capacity * 2;
		}
		delete[]array;
		for (int i = 0; i < curr_length; i++) {
			//this is a reference to temp, since we dont want to copy it over twice
			array = temp;
		}
	}
}
//
//std::ostream& operator<<(std::ostream& out, MyString& s)
//{
//	for (int i = 0; i < s.length(); i++) {
//		return s.get(i);
//	}
//}
