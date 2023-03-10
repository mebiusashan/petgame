//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : StatusSystem.h                                               *
 *                                                                                             *
 *                   Programmer : Mebius Ashan                                                 *
 *                                                                                             *
 *                   Start Date : 03/02/22                                                     *
 *                                                                                             *
 *                  Last Update : 03/02/22                                                     *
 *                                                                                             *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include "iostream"

#include "StatusSystem.h"

#include "StartMenuSystem.h"
#include "SystemManager.h"

#include "BattleRel.h"
#include "BattleInfo.h"
#include "BattleSystem.h"

StatusSystem::StatusSystem() {

}

StatusSystem::~StatusSystem() {

}

bool StatusSystem::InitSystem() {
    return true;
}

bool StatusSystem::Input(std::string &arg) {
    return curSys->Input(arg);
}

void StatusSystem::Run() {
    BattleInfo a;
    BattleInfo b;
    BattleSystem s;
    s.startRound();
    s.AddBattleInfo(1, a);
    s.AddBattleInfo(2, b);
    auto rel = s.Attack(1, 2);
    std::cout << "????????????" << rel->defenseCutHp << std::endl;
    std::cout << "B?????????" << b.HP << std::endl;


    if (curStatus == MENU) {
        StartMenuSystem *stmSys = sysMgr->GetSystemByName<StartMenuSystem *>(STM_SYS);
        stmSys->ShowMenuView();
        curSys = stmSys;
    }
}

GameStatus StatusSystem::GetCurStatus() {
    return curStatus;
}

