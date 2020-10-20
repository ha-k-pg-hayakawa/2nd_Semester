#pragma once
class Base
{
public:
	Base();
	virtual ~Base();

	//“–‚½‚è”»’è
	virtual bool CheckHit(int x,int y,int width,int height);

	void SetHp(int hp);
	void SetPos(float x, float y);
	void SetMoveSpeed(float speed);
	void SetSize(int Width, int Height);

	int GetHp();
	float GetPosX();
	float GetPosY();
	float GetMoveSpeed();
	int GetWidth();
	int GetHeight();

private:
	int m_Hp;
	float m_PosX;
	float m_PosY;
	float m_MoveSpeed;
	int m_Width;	//“–‚½‚è”»’è—p•
	int m_Height;	//“–‚½‚è”»’è—p‚‚³
};