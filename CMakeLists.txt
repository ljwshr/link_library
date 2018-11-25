cmake_minimum_required (VERSION 2.6)
project (Tutorial)
# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
include_directories ("${PROJECT_BINARY_DIR}")

include_directories ("${PROJECT_SOURCE_DIR}/MathFunctions")
#add_subdirectory (MathFunctions)
#set (EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)


add_executable (Tutorial tutorial.cpp)
target_link_libraries (Tutorial  ${CMAKE_SOURCE_DIR}/MathFunctions/libMathFunctions.a)
target_include_directories(Tutorial 
	PUBLIC ${CMAKE_SOURCE_DIR}/support_files
)