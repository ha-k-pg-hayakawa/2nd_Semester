﻿#include <stdlib.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"

void PrintHp(Base* target)
{
	if (target == nullptr)
	{
		return;
	}
	printf("hp = %d\n", target->GetHp());
}

int main()
{
	//基底クラスのポインタ変数へ、継承先のクラスのアドレスを代入できる
	/*Base* player = new Player;
	Base* enemy = new Enemy;*/

	//つまり、どちらもBaseクラスを継承しているので、
	//Baseのポインタ変数配列で一括管理できる
	//ただし、Base外の物には触れない。
	//※仮想関数のみBaseになくても呼び出せる
	Base* array[] =
	{
		new Player(),
		new Enemy()
	};
	array[1]->SetHp(100);

	//arrayを使って当たり判定をfor
	for (int i = 0; i < 2; i++)
	{
		if (array[i] != nullptr)
		{
			PrintHp(array[i]);
			if (array[i]->CheckHit(10, 10, 20, 30) == false)
			{
				printf("当たってない\n");
			}
		}
	}
	
	/*delete player;
	delete enemy;*/
	for (int i = 0; i < 2; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}

	system("pause");
	return 0;
}
