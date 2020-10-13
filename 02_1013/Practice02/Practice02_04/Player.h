#ifndef Player_h
#define Player_h

class Player
{
public:
	Player();
	~Player();

	void Exec();
	void Draw();

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;
};

#endif // !Player_h

