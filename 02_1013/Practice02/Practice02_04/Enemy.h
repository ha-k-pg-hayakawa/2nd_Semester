#ifndef Enemy_h
#define Enemy_h

class Enemy
{
public:
	Enemy();
	~Enemy();

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

	//Enemuy ‚Ì‚Ý
	int m_Routine;
};

#endif // !Enemy_h

