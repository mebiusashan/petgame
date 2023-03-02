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


#ifndef PETGAME_STATUSSYSTEM_H
#define PETGAME_STATUSSYSTEM_H

#include "../Application.h"
#include "BaseSystem.h"

class StatusSystem : public BaseSystem {

public:
    StatusSystem();

    ~StatusSystem();

    bool InitSystem();

    bool Input(string &arg);

    void Run();

    GameStatus GetCurStatus();

private:
    GameStatus curStatus = MENU;
    BaseSystem *curSys;


};


#endif //PETGAME_STATUSSYSTEM_H
