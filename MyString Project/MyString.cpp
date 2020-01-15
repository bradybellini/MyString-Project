#include "MyString.h"



MyString::MyString(std::string s)
{
	array = new char[s.size()];
	for (int i = 0; i < s.size(); i++) {
		array[i] = s[i];
	}

	capacity = s.size();
	//copy string to array after we just made the string.
	//curr.length = capacity - s.size() size of string.
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
 