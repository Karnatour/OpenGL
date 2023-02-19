//
// Created by Vojta on 19.02.2023.
//

#include "Window.h"

void Window::windowInit() {
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 2);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
}

void Window::createWindow() {
    window = glfwCreateWindow(WIDTH, HEIGHT, "Test", nullptr, nullptr);
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window,framebufferSizeCallback);
    gladLoadGL(GLADloadfunc(glfwGetProcAddress));
}

void Window::framebufferSizeCallback(GLFWwindow *window, int width, int height) {
    glViewport(0, 0, width, height);
}
