cmake_minimum_required(VERSION 3.26)
project(example)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(OpenGL REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(SDL2_IMAGE_PATH "/opt/homebrew/Cellar/sdl2_image/2.6.3_1")
set(SDL2_PATH "/opt/homebrew/Cellar/sdl2/2.28.2")
set(GLEW_PATH "/opt/homebrew/Cellar/glew/2.2.0_1")
set(GLM_PATH "/opt/homebrew/Cellar/glm/0.9.9.8")

add_executable(example
        main.cpp
        physics/Vector2.h
        physics/Vector2.cpp
        physics/Vector3.cpp
        physics/Vector3.h
        shader_utils.cpp
)
if (APPLE)
    include_directories(${SDL2_PATH}/include)
    include_directories(${SDL2_IMAGE_PATH}/include)
    include_directories(${GLEW_PATH}/include)
    include_directories(${GLM_PATH}/include)

    target_link_libraries(example PRIVATE
            ${SDL2_PATH}/lib/libSDL2-2.0.0.dylib
            ${SDL2_IMAGE_PATH}/lib/libSDL2_image-2.0.0.dylib
            ${GLEW_PATH}/lib/libGLEW.2.2.dylib
    )
    target_compile_definitions(example PRIVATE GL_SILENCE_DEPRECATION)
    find_library(COCOA_LIBRARY Cocoa REQUIRED)
    find_library(GLUT_LIBRARY GLUT REQUIRED)
    find_library(OpenGL_LIBRARY OpenGL REQUIRED)
    mark_as_advanced(COCOA_LIBRARY GLUT_LIBRARY OpenGL_LIBRARY)
    target_link_libraries(example PRIVATE ${COCOA_LIBRARY} ${GLUT_LIBRARY} ${OpenGL_LIBRARY} ${SDL2_LIBRARIES})
endif()
