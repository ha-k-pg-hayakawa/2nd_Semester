#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

int main()
{
	char woad = 'a';
	char name[] = "issei";
	const char* cstr = "Hello";

	printf("%c\n", woad);
	printf("%s\n", name);
	printf("%s\n", cstr);

	std::string str = "文字列";

	std::cout << str << ::exit;

	system("pause");
	return 0;
}