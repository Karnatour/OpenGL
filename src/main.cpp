#include "Input.h"

#include "ShaderCompiler.h"

int main()
{
    Window window;
    Input input;
    window.windowInit();
    window.createWindow();
    while (!glfwWindowShouldClose(window.window))
    {
        input.processInput(window.window);
        glClearColor(0.2f, 0.8f, 0.3f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
        glfwSwapBuffers(window.window);
        glfwPollEvents();
    }
    glfwTerminate();
    return 0;
}


