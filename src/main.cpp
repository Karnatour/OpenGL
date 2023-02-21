#include "Input.h"
#include "ShaderCompiler.h"
#include "VAO.h"
#include "VBO.h"
int main()
{

    Window window;
    Input input;
    ShaderCompiler shader;
    VAO vao{};
    VBO vbo{};
    window.windowInit();
    window.createWindow();
    shader.initCompiler();
    shader.compileShader();
    shader.initLinker();
    shader.linkShader();
    shader.deleteShader();
    vao.initVAO();
    vbo.initVBO();
    vao.bindVAO();
    vbo.bindVBO();
    vao.setPtr();
    while (!glfwWindowShouldClose(window.window))
    {
        input.processInput(window.window);
        glClearColor(0.2f, 0.8f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        shader.useProgram();
        glfwSwapBuffers(window.window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}


