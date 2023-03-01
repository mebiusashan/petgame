//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : StartUp.cpp                                                  *
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

#include <iostream>

#include "StartUpView.h"
#include "../PetGame.h"
#include "../utils/Language.h"

using namespace std;

void StartUpView::show() {
    cout << GAME_NAME << endl;
    cout << GETLANG(MAIN_MENU_DES);
    cout << GETLANG(MAIN_MENU_1);
    cout << GETLANG(MAIN_MENU_2);
    cout << GETLANG(MAIN_MENU_3);
    cout << GETLANG(MAIN_MENU_4);
}

void StartUpView::destory() {

}