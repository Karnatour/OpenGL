cmake_minimum_required(VERSION 3.24)
project(OpenGLProject)

set(CMAKE_CXX_STANDARD 23)
add_executable(OpenGLProject src/main.cpp src/Window.cpp src/Window.h src/Input.cpp src/Input.h src/Triangle.h src/VBO.cpp src/VBO.h src/ShaderCompiler.cpp src/ShaderCompiler.h)

set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)

add_subdirectory(vendor/glfw)
target_link_libraries(OpenGLProject glfw)

add_subdirectory(vendor/glad)
target_include_directories(OpenGLProject PRIVATE vendor/glad/gl_4.0_core_debug/include)
target_link_libraries(OpenGLProject glad)

#find_package(OpenGL REQUIRED)
#target_link_libraries(OpenGLProject OpenGL::GL)




