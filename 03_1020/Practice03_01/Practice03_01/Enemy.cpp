#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;
}
Enemy::~Enemy()
{

}

void Enemy::Exec()
{

}
void Enemy::Draw()
{

}

bool Enemy::CheckHit(int x, int y, int width, int height)
{
	printf("Enemy�N���X��CheckHit()\n");

	//�I�[�o�[���C�h���̊֐����g���ɂ́A���m�ɐ錾���ČĂяo��
	Base::CheckHit(x, y, width, height);

	return false;
}

//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����
//�����̂����