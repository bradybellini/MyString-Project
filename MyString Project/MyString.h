#pragma once
#ifndef MYSTRING_H

#include <string>

class MyString {
private:
	void ensureCapacity();
	char* array;
	int curr_length(), capacity();

public:
	MyString(std::string s);
	void toString();
	
	

};


#endif // !MYSTRING_H

 