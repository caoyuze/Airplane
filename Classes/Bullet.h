#pragma once

#include "cocos2d.h"
#include "Definitions.h"
USING_NS_CC;
using namespace std;

enum BulletType
{
	Onefold,
	Twofold,
	Multifold
};

class Bullet : public Sprite
{
public:
	Bullet();
	static Bullet* create(BulletType);
	bool init(BulletType);
	int b_attack;

private:
	BulletType b_type;
};