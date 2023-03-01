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
 *                  Last Update : 03/01/22                                                     *
 *                                                                                             *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 *   Game::Init     -- 初始化各个模块                                                           *
 *   Game::GetInput -- 获取玩家的输入                                                           *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#include <iostream>

#include "Game.h"
#include "view/StartUpView.h"

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
    configSys = new ConfigSystem;
    if (!configSys->InitSystem()) {
        return false;
    }

    StartUpView startUpView;
    startUpView.show();
    return true;
}

bool Game::GetInput() {
    string inputStr;
    cin >> inputStr;
    if (inputStr == "4") {
        return false;
    }
    return true;
}

