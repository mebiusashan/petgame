//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : StartMenuSystem.h                                            *
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


#ifndef PETGAME_STARTMENUSYSTEM_H
#define PETGAME_STARTMENUSYSTEM_H

#include "BaseSystem.h"
#include "../controller/StartUpController.h"

class StartMenuSystem : public BaseSystem {
public:
    bool InitSystem();

    void ShowMenuView();

    bool Input(string &arg);

protected:
    void startNewGame();

    void showRecView();

    void showOptView();

    static void startNewGameWrapper(void *c);

    static void showRecViewWrapper(void *c);

    static void showOptViewWrapper(void *c);

private:
    int curView = 0;

    StartUpController *startUpCtl;

};


#endif //PETGAME_STARTMENUSYSTEM_H
