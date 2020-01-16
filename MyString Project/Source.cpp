#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

int main() {
	string x("Brady");
	MyString s(x);
	

	cout << s.get(2);
	return 0;
}