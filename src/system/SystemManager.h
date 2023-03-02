//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : SystemManager.h                                              *
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


#ifndef PETGAME_SYSTEMMANAGER_H
#define PETGAME_SYSTEMMANAGER_H

#define CFG_SYS "cfgSys"
#define STA_SYS "staSys"
#define STM_SYS "stmSys"

class BaseSystem;

#include <iostream>
#include "map"


using namespace std;

class SystemManager {
public:
    void AddSystem(BaseSystem *sys, string name) {
        sysPool.insert(pair<string, BaseSystem *>(name, sys));
    };

    template<typename T>
    T GetSystemByName(string name) {
        auto iter = sysPool.find(name);
        if (iter != sysPool.end())
            return dynamic_cast<T>(iter->second);
        return nullptr;
    };

protected:
    map<string, BaseSystem *> sysPool;
};

#endif //PETGAME_SYSTEMMANAGER_H
