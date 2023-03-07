//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : BattleSystem.h                                               *
 *                                                                                             *
 *                   Programmer : Mebius Ashan                                                 *
 *                                                                                             *
 *                   Start Date : 03/04/22                                                     *
 *                                                                                             *
 *                  Last Update : 03/04/22                                                     *
 *                                                                                             *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


#ifndef PETGAME_BATTLESYSTEM_H
#define PETGAME_BATTLESYSTEM_H

#include "map"
#include "list"

#include "BattleInfo.h"
#include "BattleRel.h"


class BattleSystem {

public:
    BattleSystem();
    ~BattleSystem();

    void startRound();
    void endRound();

    bool AddBattleInfo(int id, BattleInfo& info);
    void RmBattleInfo(int id);
    void ReplaceBattleInfo(int rmId, int addId, BattleInfo& info);
    BattleRel* Attack(int offense, int defense);
    std::list<BattleRel*> Attacks(int offense, std::list<int> ids);

protected:
    BattleInfo* findBattleInfo(int id);
    BattleRel* attacking(BattleInfo& offense, BattleInfo& defense);

protected:
    std::map<int, BattleInfo*> battleInfos;
    std::list<BattleRel*> battleRels;
};


#endif //PETGAME_BATTLESYSTEM_H
