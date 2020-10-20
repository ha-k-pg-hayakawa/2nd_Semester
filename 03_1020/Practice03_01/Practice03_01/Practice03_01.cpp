#include <stdlib.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"

int main()
{
	//基底クラスのポインタ変数へ、継承先のクラスのアドレスを代入できる
	Base* player = new Player;
	Base* enemy = new Enemy;

	if (player->CheckHit(10, 10, 20, 30) == false)
	{
		printf("当たっていません\n");
	}
	if (enemy->CheckHit(10, 10, 20, 30) == false)
	{
		printf("当たっていません\n");
	}
	
	delete player;
	delete enemy;

	system("pause");
	return 0;
}
