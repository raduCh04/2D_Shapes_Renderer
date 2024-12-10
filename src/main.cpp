#include <iostream>
#include "glad/glad.h"
#include "GLFW/glfw3.h"

int main()
{
    glfwInit(); 
    GLFWwindow *window = glfwCreateWindow(800, 600, "2D Shapes Renderer", NULL, NULL);
    glfwMakeContextCurrent(window);

    if (gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
        std::cout << "Glad loaded!\n";

    while(!glfwWindowShouldClose(window))
    {
        glfwSwapBuffers(window);
        glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwPollEvents();
    }
}