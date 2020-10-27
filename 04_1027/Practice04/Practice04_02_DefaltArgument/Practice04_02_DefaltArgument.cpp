
#include <iostream>

//デフォルト引数
//関数の引数にはデフォルト値を設定することができる
//デフォルト値が設定された引数は、関数の呼び出しに省略することができる
class Calculator
{
public:
    int Add(int a, int b);
    //引数bのデフォルト値を2にする
    int Mul(int a = 4, int b = 2);

    //※デフォルト引数の後ろには、未確定の引数をるけることはできない
    //int Sub(int a = 100,int b);　✖
};

int Calculator::Add(int a, int b)
{
    return (a + b);
}
int Calculator::Mul(int a/* = 4 */, int b/* = 2 */)
{
    return (a * b);
}

int main()
{
    Calculator calc;
    std::cout << calc.Add(10, 20) << std::endl;
    std::cout << calc.Mul(100, 4) << std::endl;
    //デフォルト値を使用
    std::cout << calc.Mul(100) << std::endl;
    //デフォルト値を使用
    std::cout << calc.Mul() << std::endl;
}
