cmake_minimum_required(VERSION 3.0.2)

set(ENGINE_NAME "Naglfar")
project(${ENGINE_NAME})

set(${ENGINE_NAME}_SOURCES
    src/window/Window.cpp
    src/graphics/Renderer.cpp
)

set(${ENGINE_NAME}_HEADERS
    src/window/Window.h
    src/graphics/Renderer.h

    src/components/Entity.h
    src/components/GraphicsEntity.h
    src/components/InputEntity.h
    src/components/PhysicsEntity.h
    src/components/Scene.h
)

include_directories(${${ENGINE_NAME}_HEADERS})

add_library(${ENGINE_NAME} ${${ENGINE_NAME}_SOURCES} ${${ENGINE_NAME}_HEADERS} )
