//
// Created by JangHun on 2024. 5. 27..
//

#ifndef PRACTICES_WORLD_H
#define PRACTICES_WORLD_H

#include "Character.h"
#include "Monster.h"
#include <vector>

using namespace std;

class World
{
  public:
    vector<Character *> players;
    vector<Monster *> monsters;
};

#endif // PRACTICES_WORLD_H
