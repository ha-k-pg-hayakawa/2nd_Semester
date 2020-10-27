﻿#include <iostream>

//後置const関数＝コンストメンバ関数
//戻り値　関数名（引数）const;

class Test
{
public:
	void SetValue(int value);
	int GetValue()const;

private:
	int Value;
};

void Test::SetValue(int value)
{
	Value = value;
}
int Test::GetValue()const
{
	return Value;
}


int main()
{
	Test test;
	test.SetValue(1000);
	int ans = test.GetValue();

	//データを取得したいだけの時
	//ポインタ変数のアドレスのさきにっ変更を加えないことを保証
	//const ポインタ変数を使うことが一般的
	const Test* pTest = &test;
	//pTest->SetValue(10);//コンストメンバ関数でないため、使用できない(変更される恐れあり)
	pTest->GetValue();  //コンストメンバ関数なので、使用できる
}