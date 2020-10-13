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

private:

	//Enemuy ‚Ì‚Ý
	int m_Routine;
};

#endif // !Enemy_h

