#include <stdlib.h>
#include <stdio.h>

class Fighter
{
public:
	Fighter();
	~Fighter();

public:
	int m_hp;
	int m_str;
	int m_mag;
	int m_tec;
	int m_spd;
	int m_def;
	int m_luc;
	int m_mde;
};

Fighter::Fighter()
{
	m_hp=0;
	m_str=0;
	m_mag=0;
	m_tec=0;
	m_spd=0;
	m_def=0;
	m_luc=0;
	m_mde=0;
}

Fighter::~Fighter()
{

}

int main()
{
	Fighter Human;

	printf("hp  = %d\n", Human.m_hp);
	printf("str = %d\n", Human.m_str);
	printf("mag = %d\n", Human.m_mag);
	printf("tec = %d\n", Human.m_tec);
	printf("spd = %d\n", Human.m_spd);
	printf("def = %d\n", Human.m_def);
	printf("luc = %d\n", Human.m_luc);
	printf("mde = %d\n", Human.m_mde);

	system("pause");
	return 0;
}