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


#include "StatusSystem.h"

#include "StartMenuSystem.h"
#include "SystemManager.h"

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
    if (curStatus == MENU) {
        StartMenuSystem *stmSys = sysMgr->GetSystemByName<StartMenuSystem *>(STM_SYS);
        stmSys->ShowMenuView();
        curSys = stmSys;
    }
}

GameStatus StatusSystem::GetCurStatus() {
    return curStatus;
}

