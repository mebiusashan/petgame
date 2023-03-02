//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : BaseSystem.h                                                 *
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


#ifndef PETGAME_BASESYSTEM_H
#define PETGAME_BASESYSTEM_H

#include <iostream>

class SystemManager;

using namespace std;

class BaseSystem {
public:
    virtual bool InitSystem() = 0;

    virtual bool Input(string &arg) = 0;

    void SetSysMgr(SystemManager *mgr) { sysMgr = mgr; };

protected:
    SystemManager *sysMgr;
};

#endif //PETGAME_BASESYSTEM_H
