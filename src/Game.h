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
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#ifndef PETGAME_GAME_H
#define PETGAME_GAME_H

#include "system/ConfigSystem.h"
#include "system/StatusSystem.h"
#include "system/SystemManager.h"
#include "controller/StartUpController.h"


#define INIT_SYS(val, cls, name) cls *val = new cls; \
sysMgr.AddSystem((val), name);                       \
val->SetSysMgr(&sysMgr);                             \
if(!(val)->InitSystem()){return false;}

//这个类是游戏的主逻辑入口
//负责初始化游戏中的配置模块
//读取已经保存的玩家数据列表
//接受玩家的输入
class Game {

public:
    bool Init();

    void Run();

    bool GetInput();

protected:
    SystemManager sysMgr;
    BaseSystem *curSys;
};


#endif //PETGAME_GAME_H
