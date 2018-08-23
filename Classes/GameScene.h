#pragma once

#include "cocos2d.h"
#include "Enemy.h"
#include "Bullet.h"
USING_NS_CC;
using namespace std;

class GameScene : public Layer
{
public:
	GameScene();
	~GameScene();
	static Scene* createScene();
	CREATE_FUNC(GameScene);
	virtual bool init();
	void update(float);

	void createBullet(float);
	void createSmallEnemmy(float);
	void createBigEnemy(float);
	void createBossEnemy(float);
	void createEnemy(EnemyType);
	void createItems(float);

private:
	Point m_correctVector;
	vector<Bullet*> m_vBullets;
	vector<Enemy*> m_vEnemies;
	vector<Sprite*> m_vItems;
	int m_totalScore;
	bool m_isDoubleBullet;
	int m_doubleBulletNumber;

};