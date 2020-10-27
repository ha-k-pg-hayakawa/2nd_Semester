
#include <iostream>

class CharaBase
{
public:
    CharaBase();
    CharaBase(int hp,int mp);
    ~CharaBase();

    void PrintParam();

private:
    int Hp;
    int Mp;

    const int HP_MAX;
};

//コンストラクタで、メンバイニシャライズによる初期化のやり方
//クラス名::コンストラクタ(引数):メンバ変数(初期値),メンバ変数(初期値)
//※変数の宣言順に呼び出す。イニシャライザに書いた順ではない。
CharaBase::CharaBase()
    :Hp(100)
    ,Mp(10)
    ,HP_MAX(999)
{

}

CharaBase::CharaBase(int hp, int mp)
    :Hp(hp)
    ,Mp(mp)
    ,HP_MAX(999)
{

}

CharaBase::~CharaBase()
{

}

void CharaBase::PrintParam()
{
    printf("Hp = %d\n", Hp);
    printf("Mp = %d\n", Mp);
    printf("\n");
    printf("HP_MAX = %d\n", HP_MAX);
    printf("\n");
}

//CharaBaseを継承した派生クラスPlayer
class Player : public CharaBase
{
public:
    Player();

private:
    int Money;
};

Player::Player()
    :CharaBase(200,30)
    ,Money(50)
{

}

int main()
{
    CharaBase ch;
    ch.PrintParam();

    Player player;
    player.PrintParam();
}

