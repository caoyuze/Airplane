#pragma once

#include "cocos2d.h"
#include "Definitions.h"

USING_NS_CC;
using namespace std;

enum EnemyType
{
	Small,
	Middle,
	Big
};

class Enemy : public Sprite
{
public:
	Enemy();
	static Enemy* create(EnemyType);
	bool init(EnemyType);
	void hit();				//���˶���
	void destroy();			//׹�ٶ���
	int getScore();			//����÷�
	bool isDestroy();
	int getHP();
	void loseHP(int);
	void setHP(int);
	float getSpeed();

private:
	EnemyType e_type;
	float e_speed;
	int e_hp;
};
