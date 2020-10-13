#include <stdlib.h>
#include <stdio.h>
#include <vector> //vecter使える
#include <iostream>
#include <time.h>

int main()
{	
	std::vector<int>v1(8);//要素数のみ指定

	int Counter = 0;

	srand((unsigned)time(NULL));
	for (std::vector<int>::iterator itr = v1.begin(); itr != v1.end(); ++itr)
	{
		*itr = rand();
		printf("v1[%d] = %d\n", Counter, *itr);

		Counter++;
	}
	system("pause");
	return 0;
}
