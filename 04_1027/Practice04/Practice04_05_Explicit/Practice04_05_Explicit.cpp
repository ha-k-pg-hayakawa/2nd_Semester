
#include <iostream>

class A
{
public:
    //explicit 演算子の書き方
    //explicit コンストラクタ(引数)

    explicit A(int val)
    {
        std::cout << val << std::endl;
    }
};

class B
{
public:
    explicit B(const A& ref)
    {
        
    }
};

int main()
{
    //変数1つだけ取るコンストラクタ
    //暗黙的に型変換が行われるコンストラクタを、変換コンストラクタという
    B(1000);        //BのクラスのコンストラクタはAのクラスの変数を受け取るのでは？
                    //↑暗黙的にB（A（1000））と解釈してしまってる
    A test = 100;   //Aのクラス変数のデータ型を代入
                    //暗黙的に A test = A(100)と解釈してしまっている
                    //コピーコンストラクタがよびだされている

    A(35);          //Aのクラスのコンストラクタ（問題なし）
}
