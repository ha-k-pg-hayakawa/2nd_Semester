#include "Unit.h"
#include "Common.h"

Unit::Unit()
{
	m_status._hp =0;
	m_status._str=0;
	m_status._mag=0;
	m_status._tec=0;
	m_status._spd=0;
	m_status._def=0;
	m_status._luc=0;
	m_status._mde=0;
}

Unit::~Unit()
{

}

void Unit::PrintStatus()
{
	printf("hp  : %d\n", m_status._hp);
	printf("str : %d\n", m_status._str);
	printf("mag : %d\n", m_status._mag);
	printf("tec : %d\n", m_status._tec);
	printf("spd : %d\n", m_status._spd);
	printf("def : %d\n", m_status._def);
	printf("luc : %d\n", m_status._luc);
	printf("mde : %d\n", m_status._mde);
}