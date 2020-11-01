#include <iostream>
#include <string>
const char* authorName = "fun";
int main()
{
	std::string newStr;
	authorName = newStr.c_str();
	std::cout << *authorName << std::endl;
}