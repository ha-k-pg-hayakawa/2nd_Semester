#include "Enemy.h"
#include <stdio.h>

Enemy::Enemy()
{
	m_Routine = 0;

	printf("Enemy�̃R���X�g���N�^\n");
}
Enemy::~Enemy()
{
	printf("Enemy�̃f�X�g���N�^\n");
}

void Enemy::Exec()
{
	printf("Enemy��Exec\n");
}
void Enemy::Draw()
{
	printf("Enemy��Draw\n");
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