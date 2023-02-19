//
// Created by Vojta on 19.02.2023.
//

#include "Input.h"

void Input::processInput(GLFWwindow *window) {
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}
