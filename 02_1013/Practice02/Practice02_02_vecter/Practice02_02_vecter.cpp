#include <stdlib.h>
#include <stdio.h>
#include <vector> //vecter使える
#include <iostream>
#include <time.h>

int main()
{
	//宣言
	//std::vector<int>v1;//配列中身なし
	//std::vector<int>v1 = {0, 1, 2};//要素数3
	//std::vector<int>v1{ 0, 1, 2 };//=なし。上と変わらん
	//std::vector<int>v1( 6, -1);//()使う。要素数6
	std::vector<int>v1(8);//要素数のみ指定
	std::vector<int>v2 = v1;

	//サイズ
	int size = v1.size();
	std::cout << size << std::endl;

	//値の代入は普通に配列と変わらん
	//乱数
	srand((unsigned)time(NULL));
	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = rand() % 100;
		printf("v1[%d] = %d\n", i, v1[i]);
	}


	//要素の追加(１こ)
	v1.push_back(10);//後ろに要素を追加
	v1.insert(v1.begin() + 1, 100);//先頭から+1番目に100追加

	printf("\n");
	for (int i = 0; i < v1.size(); i++)
	{
		printf("v1[%d] = %d\n", i, v1[i]);
	}


	//要素の削除
	v1.pop_back();//後ろの要素を消す
	v1.erase(v1.begin());//初めの要素を消す

	printf("\n");
	for (int i = 0; i < v1.size(); i++)
	{
		printf("v1[%d] = %d\n", i, v1[i]);
	}

	printf("\n");

	//全要素の削除
	v1.clear();
	printf("v1 size = %d\n", v1.size());

	//要素が０かを調べるには、.empty()を使う
	if (v1.empty() == true)
	{
		printf("v1 is Empty\n");
	}

	//要素数を変更
	v1.resize(5);//要素数を５に
	v1.resize(3);//要素数を５から３に
	v1.resize(6,-1);//要素数を3から6に、増加分を-1で初期化

	printf("\n");
	for (int i = 0; i < v1.size(); i++)
	{
		printf("v1[%d] = %d\n", i, v1[i]);
	}

	//あらかじめ最大数がわかっていれば.reserve()で領域を確保しておく
	v1.reserve(100);

	system("pause");
	return 0;
}
