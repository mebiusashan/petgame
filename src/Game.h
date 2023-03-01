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
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */

#ifndef PETGAME_GAME_H
#define PETGAME_GAME_H

#include "system/ConfigSystem.h"

//这个类是游戏的主逻辑入口
//负责初始化游戏中的配置模块
//读取已经保存的玩家数据列表
//接受玩家的输入
class Game {

public:
    bool Init();

    bool GetInput();

protected:
    ConfigSystem *configSys;
};


#endif //PETGAME_GAME_H
