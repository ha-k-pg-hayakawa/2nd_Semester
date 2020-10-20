#pragma once
class Base
{
public:
	Base();
	~Base();

	//継承先で、それぞれ処理の違うことがわかっている関数を
	//純粋仮想関数として基底クラスの宣言
	virtual void Exec() = 0;
	virtual void Draw() = 0;

	//当たり判定
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
	int m_Width;	//当たり判定用幅
	int m_Height;	//当たり判定用高さ
};