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


#include "StartUpController.h"

#include "../Application.h"

StartUpController::StartUpController(BaseView *view) {
    bindView = view;
}

StartUpController::~StartUpController() {
    if (bindView != nullptr)
        bindView->destory();
    bindView = nullptr;
}

void StartUpController::Run() {
    if (bindView != nullptr)
        bindView->show();

}

void StartUpController::SetCallback(void *c,
                                    void (*_StartNewGame)(void *pVoid),
                                    void (*_ShowRecView)(void *context),
                                    void (*_ShowOptView)(void *context)
) {
    StartNewGame = _StartNewGame;
    ShowRecView = _ShowRecView;
    ShowOptView = _ShowOptView;
    context = c;
}

bool StartUpController::Input(std::string &arg) {
    if (arg == "1") { //开始新游戏
        StartNewGame(context);
        return true;
    }
    if (arg == "2") { //读取记录
        ShowRecView(context);
        return true;
    }
    if (arg == "3") { //打开选项面板
        ShowOptView(context);
        return true;
    }
    if (arg == "4") { //退出游戏
        selectExit();
    }
    return true;
}

void StartUpController::selectExit() {
    Application::Exit();
}