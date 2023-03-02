//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : Game.h                                                       *
 *                                                                                             *
 *                   Programmer : Mebius Ashan                                                 *
 *                                                                                             *
 *                   Start Date : 03/01/22                                                     *
 *                                                                                             *
 *                  Last Update : 03/02/22                                                     *
 *                                                                                             *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Game::Init     -- 初始化各个模块                                                           *
 *   Game::GetInput -- 获取玩家的输入                                                           *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include <iostream>

#include "Game.h"
#include "system/StartMenuSystem.h"

using namespace std;

/***********************************************************************************************
 * Game::Init -- 初始化各个系统模块                                                             *
 *                                                                                             *
 *                                                                                             *
* OUTPUT:  返回系统启动结果，如果某些模块启动失败, 则返回false                                    *
 *                                                                                             *
 * WARNINGS:   none                                                                            *
 *                                                                                             *
 * HISTORY:                                                                                    *
 *   03/01/2022 Mebius : Created.                                                              *
 *=============================================================================================*/
bool Game::Init() {
    INIT_SYS(cfgSys, ConfigSystem, CFG_SYS);
    INIT_SYS(staSys, StatusSystem, STA_SYS);
    INIT_SYS(stmSys, StartMenuSystem, STM_SYS);

    return true;
}

void Game::Run() {
    StatusSystem *staSys = sysMgr.GetSystemByName<StatusSystem*>(STA_SYS);
    if (staSys != nullptr) {
        staSys->Run();
        curSys = staSys;
    }

}

bool Game::GetInput() {
    string inputStr;
    cin >> inputStr;
    return curSys->Input(inputStr);
}

