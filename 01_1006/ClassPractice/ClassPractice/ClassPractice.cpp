#include "Common.h"
#include "Unit.h"


int main()
{
	Unit Fighter;

	printf("hp  = %d\n", Fighter.m_hp);
	printf("str = %d\n", Fighter.m_str);
	printf("mag = %d\n", Fighter.m_mag);
	printf("tec = %d\n", Fighter.m_tec);
	printf("spd = %d\n", Fighter.m_spd);
	printf("def = %d\n", Fighter.m_def);
	printf("luc = %d\n", Fighter.m_luc);
	printf("mde = %d\n", Fighter.m_mde);

	system("pause");
	return 0;
}