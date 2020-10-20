#include <stdlib.h>
#include <stdio.h>
#include "Enemy.h"
#include "Player.h"
#include "EnemyManager.h"

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
	/*
	//Baseのポインタ変数配列
	Base* array[] =
	{
		new Player(),
		new Enemy()
	};
	array[1]->SetHp(100);

	for (int i = 0; i < 2; i++)
	{
		if (array[i] != nullptr)
		{
			array[i]->Exec();

			PrintHp(array[i]);
			if (array[i]->CheckHit(10, 10, 20, 30) == false)
			{
				printf("当たってない\n");
			}
		}
	}
	
	//実体破棄
	for (int i = 0; i < 2; i++)
	{
		delete array[i];
		array[i] = nullptr;
	}

	//純粋仮想関数を宣言したクラスは
	//単体で実体化させることができなくなる
	//Base base;
	//Base* pBase = new Base();
	*/

	//EnemyManagerを使ったEnemyクラスの管理
	EnemyManager* enemyMng = new EnemyManager();
	Base* pEnemy = nullptr;

	//ステージ開始にまとめて初期化
	enemyMng->CreateEnemy(0);
	enemyMng->CreateEnemy(1);
	pEnemy = enemyMng->CreateEnemy(2);
	enemyMng->CreateEnemy(3);
	enemyMng->CreateEnemy(4);
	enemyMng->CreateEnemy(4);

	//作成したエネミーに各処理をやらす
	enemyMng->Exec();
	enemyMng->Draw();

	//指定のエネミーの削除
	enemyMng->DestoryEnemy(pEnemy);

	//指定座標と接触してるエネミーを取得
	pEnemy = enemyMng->CheckHit(10, 10, 20, 30);

	system("pause");
	return 0;
}
