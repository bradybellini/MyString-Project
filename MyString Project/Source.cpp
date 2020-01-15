#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

int main() {
	string x("test");
	MyString s(x);
	cout << x;
	return 0;
}