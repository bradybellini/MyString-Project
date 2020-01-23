#include <iostream>
#include <string>
#include "MyString.h"

using namespace std;

int main() {
	string x("Brady");
	string y(" Bellini");
	MyString s(x);
	MyString t(y);
	MyString u(s + t);

	cout << t.length();
	return 0;
}