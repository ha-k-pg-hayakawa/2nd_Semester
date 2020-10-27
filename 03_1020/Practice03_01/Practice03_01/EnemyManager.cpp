#include "EnemyManager.h"
#include "Base.h"
#include "Enemy.h"

EnemyManager::EnemyManager()
{
	m_Enemies.clear();
}
EnemyManager::~EnemyManager()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		delete *itr;
		*itr = nullptr;
	}
	//m_Enemies‚É‚Ínullptr‚ª“ü‚Á‚½Base*‚Ì”z—ñ‚ª“ü‚Á‚Ä‚¢‚é
	m_Enemies.clear();
}

class Base* EnemyManager::CreateEnemy(int enemy_type)
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr == nullptr)
		{
			*itr = new Enemy();
			return *itr;
		}
	}

	//‹ó‚«‚ª‚È‚¢‚Ì‚ÅV‹K‚Ìì‚Á‚Äpush_back
	Base* ptr = new Enemy();
	m_Enemies.push_back(ptr);
	return ptr;
}

bool EnemyManager::DestoryEnemy(class Base* ptr)
{
	if (ptr == nullptr)
	{
		return false;
	}

	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr == nullptr)
		{
			delete *itr;
			*itr = nullptr;
			return true;
		}
	}
	return false;
}

void EnemyManager::Exec()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		if (*itr == nullptr)
		{
			Base* ptr = *itr;
			ptr->Exec();
		}
	}
}

void EnemyManager::Draw()
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		Base* ptr = *itr;
		if (ptr == nullptr)
		{
			ptr->Draw();
		}
	}
}

class Base* EnemyManager::CheckHit(int x, int y, int width, int height)
{
	std::vector<Base*>::iterator itr;
	for (itr = m_Enemies.begin(); itr != m_Enemies.end(); ++itr)
	{
		
		if (*itr == nullptr)
		{
			Base* ptr = *itr;
			if (ptr->CheckHit(x, y, width, height))
			{
				return ptr;
			}
		}
	}
	return nullptr;
}