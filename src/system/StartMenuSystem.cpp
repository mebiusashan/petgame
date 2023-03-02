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

#include <iostream>

#include "StartMenuSystem.h"
#include "SystemManager.h"

#include "../view/StartUpView.h"

bool StartMenuSystem::InitSystem() {
    return true;
}

bool StartMenuSystem::Input(std::string &arg) {
    if (curView == 0) {
        return startUpCtl->Input(arg);
    }
    return true;
}

void StartMenuSystem::ShowMenuView() {
    if (curView == 0) {
        StartUpView *startUpView = new StartUpView;
        startUpCtl = new StartUpController(startUpView);
        startUpCtl->SetCallback(this,
                                &StartMenuSystem::startNewGameWrapper,
                                &StartMenuSystem::showRecViewWrapper,
                                &StartMenuSystem::showOptViewWrapper);
        startUpCtl->Run();
    }

}

void StartMenuSystem::startNewGame() {
    std::cout << "新游戏";
}

void StartMenuSystem::showRecView() {
    std::cout << "记录";
}

void StartMenuSystem::showOptView() {
    std::cout << "选项";
}

void StartMenuSystem::startNewGameWrapper(void *c) {
    ((StartMenuSystem *) c)->startNewGame();
}

void StartMenuSystem::showRecViewWrapper(void *c) {
    ((StartMenuSystem *) c)->showRecView();
}

void StartMenuSystem::showOptViewWrapper(void *c) {
    ((StartMenuSystem *) c)->showOptView();
}