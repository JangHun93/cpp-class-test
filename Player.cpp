//
// Created by JangHun on 2024. 5. 27..
//

#include "Player.h"

// 플레이어 -> 몬스터 사냥시 재화 획득
int Player::KillMonster(Monster *monster)
{
    return monster->GetRewardGold();
}