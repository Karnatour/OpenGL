//
// Created by Vojta on 19.02.2023.
//

#ifndef OPENGLPROJECT_WINDOW_H
#define OPENGLPROJECT_WINDOW_H

#include "glad/gl.h"
#include "GLFW/glfw3.h"

class Window{
private:
    const int WIDTH = 800;
    const int HEIGHT = 600;
public:
    GLFWwindow *window{};
    void windowInit();
    void createWindow();
    void framebufferSizeCallback(GLFWwindow* window, int width, int height);
};

#endif //OPENGLPROJECT_WINDOW_H
