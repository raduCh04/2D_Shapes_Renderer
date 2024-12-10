cmake_minimum_required(VERSION 3.20)

project(Renderer)

add_subdirectory(vendor/glfw)

add_executable(Renderer vendor/glad/src/glad.c src/main.cpp)
target_include_directories(Renderer PUBLIC vendor/glfw/include vendor/glad/include)
target_link_libraries(Renderer glfw)
