#include "Bullet.h"

Bullet::Bullet()
{
	b_type = Onefold;
}

Bullet* Bullet::create(BulletType type)
{
	auto bullet = new Bullet();
	if (bullet && bullet->init(type))
	{
		//�����Զ��ͷų�
		bullet->autorelease();
		return bullet;
	}

	//ɾ������ռ�
	delete bullet;
	bullet = NULL;
	return NULL;
}

bool Bullet::init(BulletType type)
{
	b_type = type;

	switch(type)
	{
	case Onefold:
		Sprite::initWithSpriteFrameName("bullet1.png");
		b_attack = BULLET1_ATTACK;
		b_speed = BULLETS_SPEED;
		return true;
		break;
	case Twofold:
	case Multifold:
		Sprite::initWithSpriteFrameName("bullet2.png");
		b_attack = BULLET2_ATTACK;
		b_speed = BULLETS_SPEED;
		return true;
		break;
	default:
		break;
	}

	return false;
}

int Bullet::getATK()
{
	return b_attack;
}

float Bullet::getSpeed()
{
	return b_speed;
}