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
 *                  Last Update : 03/02/22                                                     *
 *                                                                                             *
 *                                                                                             *
 *---------------------------------------------------------------------------------------------*
 * Functions:                                                                                  *
 * - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - */


#ifndef PETGAME_CONFIGSYSTEM_H
#define PETGAME_CONFIGSYSTEM_H

#include "../libs/json.hpp"

#include "BaseSystem.h"

class ConfigSystem : public BaseSystem {
public:
    bool InitSystem();

    bool Input(string &arg);

protected:
    nlohmann::json petJsonData;
};


#endif //PETGAME_CONFIGSYSTEM_H
