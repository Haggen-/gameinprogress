cmake_minimum_required(VERSION 3.0.2)

set(PROJECT_NAME "Pillage")
set(ENGINE_NAME "Engine")
project(${PROJECT_NAME})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic -std=gnu++14")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -g")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS} -O1")

set(${ENGINE_NAME}_SOURCES
    src/Engine/Renderer/Renderer.cpp
)

set(${ENGINE_NAME}_HEADERS
    src/Engine/Entity/Entity.h
    src/Engine/Entity/GraphicsEntity.h
    src/Engine/Entity/InputEntity.h
    src/Engine/Entity/PhysicsEntity.h
    src/Engine/Renderer/Renderer.h
)

set(${PROJECT_NAME}_SOURCES
    src/main.cpp
    src/Engine/Entity/Window.cpp
    src/Engine/Events/WindowEvent.cpp
    src/Engine/Input/InputHandler.cpp
    src/Engine/Input/WindowEventHandler.cpp
    src/Game/Controls/MoveCommand.cpp
    src/Game/Player.cpp
    )

set(${PROJECT_NAME}_HEADERS
    src/Engine/Entity/Window.h
    src/Engine/Events/WindowEvent.h
    src/Engine/Input/InputHandler.h
    src/Engine/Input/WindowEventHandler.h
    src/Game/Actors/GameObject.h
    src/Game/Actors/Movable.h
    src/Game/Controls/Command.h
    src/Game/Controls/MoveCommand.h
    src/Game/Player.h
    )

set(CMAKE_CXX_COMPILER "g++")
set(${PROJECT_NAME}_INCLUDE_DIRS "")

add_executable(Pillage ${${ENGINE_NAME}_SOURCES} ${${ENGINE_NAME}_HEADERS} ${${PROJECT_NAME}_SOURCES} ${${PROJECT_NAME}_HEADERS} src/Engine/Entity/DrawMeGraphics.cpp src/Engine/Entity/DrawMeGraphics.h src/Engine/Entity/DrawMeInput.cpp src/Engine/Entity/DrawMeInput.h src/Engine/Entity/DrawMePhysics.cpp src/Engine/Entity/DrawMePhysics.h src/Engine/Messeaging/Listener.h src/Engine/Messeaging/Subject.h)


set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(SDL2 REQUIRED sdl2)
find_package(SDL2IMAGE REQUIRED sdl2image)
find_package(Lua REQUIRED)

if(NOT ${LUA_FOUND})
    message(FATAL_ERROR "Could not find LUA dependency!")
endif()

if(NOT ${SDL2_FOUND})
    message(FATAL_ERROR "COULD NOT FIND SDL")
endif()

if(NOT ${SDL2IMAGE_FOUND})
    message(FATAL_ERROR "COULD NOT FIND SDL_IMAGE")
endif()

include_directories(src ${LUA_INCLUDE_DIR} ${Pillage_INCLUDE_DIRS} ${SDL2_INCLUDE_DIR})
target_link_libraries(Pillage ${LUA_LIBRARY} ${SDL2_LIBRARY} ${SDLIMAGE_LIBRARY})
