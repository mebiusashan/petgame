//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : StartUpController.h                                          *
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


#ifndef PETGAME_STARTUPCONTROLLER_H
#define PETGAME_STARTUPCONTROLLER_H

#include <iostream>

class StartMenuSystem;

#include "../view/BaseView.h"

using namespace std;

class StartUpController {
public:
    StartUpController(BaseView *view);

    ~StartUpController();

    void SetCallback(void *c,
                     void (*StartNewGame)(void *pVoid),
                     void (*ShowRecView)(void *context),
                     void (*ShowOptView)(void *context));

    void Run();

    bool Input(string &arg);

protected:
    void selectExit();

protected:
    BaseView *bindView;

    void (*StartNewGame)(void *context);

    void (*ShowRecView)(void *context);

    void (*ShowOptView)(void *context);

    void *context;
};


#endif //PETGAME_STARTUPCONTROLLER_H
