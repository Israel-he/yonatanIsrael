file (GLOB_RECURSE MY_SOURCE_FILES CONFIGURE_DEPENDS LIST_DIRECTORIES false RELATIVE ${CMAKE_CURRENT_LIST_DIR} *.cpp)
target_sources (${CMAKE_PROJECT_NAME} PRIVATE ${MY_SOURCE_FILES} "../include/Robot.h" "Robot.cpp" "../include/Guard.h" "Guard.cpp" "Rock.cpp" "../include/Wall.h" "Wall.cpp" "../include/Board.h" "Board.cpp" "../include/try.h" "try.cpp" "../include/Bomb.h" "Bomb.cpp")
