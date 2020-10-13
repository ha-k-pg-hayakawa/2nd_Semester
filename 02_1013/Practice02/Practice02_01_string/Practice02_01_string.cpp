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

	//string 初期化集
	/*
	std::string str;
	std::string str = "";
	std::string str = "文字列";
	std::string str("文字列");
	*/
	std::string str2(3,'A');
	std::string str = str2;

	std::cout << str << std::endl;

	std::cout << str.size() << std::endl;

	//文字の追加
	str += "BBC";
	str.push_back('D');
	str.append("EE");
	str.insert(1, "FG");

	std::cout << str << std::endl;


	str = "ABC ABC";

	//文字の検索
	int index = str.find('C');//先頭からn番目
	index = str.find("BC");
	index = str.find("BC",2);//指定の位置から探す
	index = str.find('z');//-1だが、std::string::nposを使って判断する

	 //文字の置き換え
	std::string from = "BC";
	std::string to = "X";
	str.replace(str.find(from), from.size(), to);

	std::cout << str << std::endl;

	//文字の削除
	str.clear();

	std::cout << str << std::endl;

	system("pause");
	return 0;
}