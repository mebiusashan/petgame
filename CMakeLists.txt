cmake_minimum_required(VERSION 3.25)
project(petgame)

set(CMAKE_CXX_STANDARD 11)

add_executable(petgame src/main.cpp src/Game.cpp src/Game.h src/view/BaseView.h src/view/StartUpView.cpp src/view/StartUpView.h src/PetGame.h src/utils/Language.cpp src/utils/Language.h src/system/ConfigSystem.cpp src/system/ConfigSystem.h src/utils/Path.cpp src/utils/Path.h)
