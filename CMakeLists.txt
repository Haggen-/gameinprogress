############################################################
#                                                          #
# Tested with: Lua5.2, SDL2 (2.0.3), SDL2-Image, GLEW 1.13 #
#                                                          #
############################################################

cmake_minimum_required(VERSION 3.0.2)

set(PROJECT_NAME "GameInProgress")
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=gnu++14 -DLINUX")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -O0 -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O3")

set(${PROJECT_NAME}_SOURCES
    src/main.cpp
    )

set(${PROJECT_NAME}_HEADERS
    )

add_subdirectory(Naglfar)

add_executable(${PROJECT_NAME} ${${PROJECT_NAME}_SOURCES} ${${PROJECT_NAME}_HEADERS} src/objects/Card.cpp src/objects/Card.h)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(SDL2 REQUIRED sdl2)
find_package(SDL2IMAGE REQUIRED sdl2image)
find_package(Lua REQUIRED)
find_package(GLEW REQUIRED)
find_package(OpenGL REQUIRED)

if(NOT ${LUA_FOUND})
    message(FATAL_ERROR "Could not find LUA dependency!")
endif()

if(NOT ${SDL2_FOUND})
    message(FATAL_ERROR "COULD NOT FIND SDL")
endif()

if(NOT ${SDL2IMAGE_FOUND})
    message(FATAL_ERROR "COULD NOT FIND SDL_IMAGE")
endif()

if(NOT ${OPENGL_FOUND})
    message(FATAL_ERROR "COULD NOT FIND OpenGL")
endif()

if(NOT ${GLEW_FOUND})
    message(FATAL_ERROR "COULD NOT FIND OpenGL Extension Wrangler")
endif()

include_directories(src ${LUA_INCLUDE_DIR} ${${PROJECT_NAME}_INCLUDE_DIRS} ${SDL2_INCLUDE_DIR} ${GLEW_INCLUDE_DIRS} ${OPENGL_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} ${LUA_LIBRARY} ${SDL2_LIBRARY} ${SDLIMAGE_LIBRARY} ${GLEW_LIBRARIES} ${OPENGL_LIBRARIES} Naglfar)