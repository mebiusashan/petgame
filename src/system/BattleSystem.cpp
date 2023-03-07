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

#include "BattleSystem.h"

BattleSystem::BattleSystem() {

}

BattleSystem::~BattleSystem() {

}

void BattleSystem::startRound() {
    battleRels.clear();
    battleInfos.clear();
}

void BattleSystem::endRound() {
    battleRels.clear();
    battleInfos.clear();
}

bool BattleSystem::AddBattleInfo(int id, BattleInfo &info) {
    auto iter = battleInfos.find(id);
    if (iter != battleInfos.end())
        return false;
    battleInfos.insert(std::pair<int, BattleInfo *>(id, &info));
    return true;
}

void BattleSystem::RmBattleInfo(int id) {
    battleInfos.erase(id);
}

void BattleSystem::ReplaceBattleInfo(int rmId, int addId, BattleInfo &info) {
    RmBattleInfo(rmId);
    AddBattleInfo(addId, info);
}

BattleRel *BattleSystem::Attack(int offense, int defense) {
    BattleInfo *offenseInfo = findBattleInfo(offense);
    BattleInfo *defenseInfo = findBattleInfo(defense);
    if (offenseInfo == nullptr || defenseInfo == nullptr)
        return nullptr;//空
    auto rel = attacking(*offenseInfo, *defenseInfo);
    battleRels.push_back(rel);
    return rel;
}

std::list<BattleRel *> BattleSystem::Attacks(int offense, std::list<int> ids) {
    std::list<BattleRel*> rels;
    auto iter = ids.begin();
    while (iter != ids.end()) {
        auto rel = Attack(offense, *iter);
        rels.push_back(rel);
    }
    return rels;
}

BattleInfo *BattleSystem::findBattleInfo(int id) {
    auto iter = battleInfos.find(id);
    if (iter != battleInfos.end())
        return iter->second;
    return nullptr;
}

BattleRel *BattleSystem::attacking(BattleInfo &offense, BattleInfo &defense) {
    BattleRel* rel = new BattleRel;
    float cutHp = offense.AttackPower/10;
    defense.HP -= cutHp;
    rel->defenseCutHp = offense.AttackPower/10;
    return rel;
}