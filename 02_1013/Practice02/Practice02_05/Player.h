#ifndef Player_h
#define Player_h

#include "Base.h"

class Player : public Base
{
public:
	Player();
	~Player();

	void Exec();
	void Draw();
};

#endif // !Player_h

