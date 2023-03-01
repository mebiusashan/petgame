//
// Copyright 2022 max2d.com
//

/***********************************************************************************************
 ***                                 max2d.com - PetGame                                     ***
 ***********************************************************************************************
 *                                                                                             *
 *                 Project Name : PetGame                                                      *
 *                                                                                             *
 *                    File Name : Path.h                                                       *
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


#ifndef PETGAME_PATH_H
#define PETGAME_PATH_H

#include <iostream>

using namespace std;

class Path {
public:
    string GetFullResPath();
    string GetFullCfgPath();
    string GetFullRECPath();

    string GetFullResPath(string &file);
    string GetFullCfgPath(string &file);
    string GetFullRECPath(string &file);

    bool IsExistsFile(string &file);
};


#endif //PETGAME_PATH_H
