//
// Created by JangHun on 2024. 5. 27..
//

#ifndef PRACTICES_PLAYER_H
#define PRACTICES_PLAYER_H

#include "Character.h"
#include "Monster.h"

class Player : Character
{
  public:
    // 몬스터 사냥
    int KillMonster(Monster *monster);
};

#endif // PRACTICES_PLAYER_H
