#include "Bullet.h"

Bullet::Bullet()
{
	this->b_type = Onefold;
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
	this->b_type = type;

	switch(type)
	{
	case Onefold:
		Sprite::initWithSpriteFrameName("bullet1.png");
		this->b_attack = BULLET1_ATTACK;
		return true;
		break;
	case Twofold:
	case Multifold:
		Sprite::initWithSpriteFrameName("bullet2.png");
		this->b_attack = BULLET2_ATTACK;
		return true;
		break;
	default:
		break;
	}
	return false;
}