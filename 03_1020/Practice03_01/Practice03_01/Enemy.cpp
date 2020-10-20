#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;

	printf("Enemyのコンストラクタ\n");
}
Enemy::~Enemy()
{
	printf("Enemyのデストラクタ\n");
}

void Enemy::Exec()
{
	printf("EnemyのExec\n");
}
void Enemy::Draw()
{
	printf("EnemyのDraw\n");
}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("EnemyクラスのCheckHit()\n");

	//オーバーライド元の関数を使うには、明確に宣言して呼び出す
	Base::CheckHit(x, y, width, height);

	return false;
}

//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん
//ぢょんのじょん