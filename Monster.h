//
// Created by JangHun on 2024. 5. 27..
//

#ifndef PRACTICES_MONSTER_H
#define PRACTICES_MONSTER_H

#include "Character.h"

enum MONSTER_TYPE
{
    GOBLIN = 0,
    SLIME = 1,
    WILD_BOAR = 2,
};

class Monster : Character
{
  private:
    int RewardGold;
    MONSTER_TYPE type;

  public:
    Monster(int _RewardGold, MONSTER_TYPE _type) : RewardGold(_RewardGold), type(_type)
    {
    }

    int GetRewardGold();
};

#endif // PRACTICES_MONSTER_H
