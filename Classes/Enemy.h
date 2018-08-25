#pragma once

#include "Definitions.h"

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
	void hitAM();				//���˶���
	void destroyAM();			//׹�ٶ���
	int getScore();				//����÷�
	bool isDestroy();
	int getHP();
	void loseHP(int);
	void setHP(int);
	float getSpeed();
	static void speedUp();
	static void clearSpeedIncrement();

private:
	EnemyType e_type;
	float e_speed;
	int e_hp;
	int e_score;
	static float e_speedIncrement;
};
