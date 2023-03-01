//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : ConfigSystem.h                                               *
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


#ifndef PETGAME_CONFIGSYSTEM_H
#define PETGAME_CONFIGSYSTEM_H

#include "../libs/json.hpp"

class ConfigSystem {
public:
    bool InitSystem();

protected:
    nlohmann::json petJsonData;
};


#endif //PETGAME_CONFIGSYSTEM_H
