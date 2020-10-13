#include <stdlib.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"

int main()
{
	Player player;
	player.SetMoveSpeed(5.0f);

	Enemy enemy;
	enemy.SetHp(100);

	printf("-----------------\n");
	printf("--Practice02_04--\n");
	printf("-----------------\n");

	printf("\n");

	printf("Player Status\n");
	printf("Hp = %d\n", player.GetHp());
	printf("PosX = %0.2f\n", player.GetPosX());
	printf("PosY = %0.2f\n", player.GetPosY());
	printf("MoveSpeed = %0.2f\n", player.GetMoveSpeed());

	printf("\n");

	printf("Enemy Status\n");
	printf("Hp = %d\n", enemy.GetHp());
	printf("PosX = %0.2f\n", enemy.GetPosX());
	printf("PosY = %0.2f\n", enemy.GetPosY());
	printf("MoveSpeed = %0.2f\n", enemy.GetMoveSpeed());

	system("pause");
	return 0;
}
