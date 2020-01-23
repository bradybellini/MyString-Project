#pragma once
#ifndef MYSTRING_H

#include <iostream>
#include <string>

class MyString {
private:
	void ensureCapacity();
	char *array;
	int curr_length, capacity;

public:
	MyString();
	MyString(std::string s);
	int length();
	char get(int i);
	char& operator[](const int i);
	char operator[](const int i) const;
	bool operator<(const MyString& rhs);
	MyString operator+(const MyString& rhs);
	friend std::ostream& operator<<(std::ostream &out, const MyString &s);
	

	

};


#endif // !MYSTRING_H

 