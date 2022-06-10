#ifndef _ENEMYMANAGER
#define _ENEMYMANAGER


#include "Enemy.h"
#include <array>
#include <stdint.h>


class EnemyManager
{
public:
    std::array<Enemy*, 10> enemyList; // size subject to change
    ID2D1Bitmap *bitmap;
    int64_t lastSpawnTime;
    // EnemyManager::EnemyManager(int64_t l);


    void EnemyManager::spawnEnemy(int64_t endTime);
    void EnemyManager::resetEnemy(Enemy* enemy);
    Enemy* EnemyManager::createEnemy();
};



#endif