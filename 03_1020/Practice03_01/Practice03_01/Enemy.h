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

	//当たり判定
	virtual bool CheckHit(int x, int y, int width, int height);

private:

	//Enemy のみ
	int m_Routine;
};

#endif // !Enemy_h

