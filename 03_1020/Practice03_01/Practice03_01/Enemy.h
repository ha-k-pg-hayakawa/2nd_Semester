#ifndef Enemy_h
#define Enemy_h

#include "Base.h"

class Enemy : public Base
{
public:
	Enemy();
	~Enemy();

	void Exec();
	void Draw();

	//�����蔻��
	virtual bool CheckHit(int x, int y, int width, int height);

private:

	//Enemy �̂�
	int m_Routine;
};

#endif // !Enemy_h

