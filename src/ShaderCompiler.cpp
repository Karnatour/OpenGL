//
// Created by Vojta on 19.02.2023.
//

#include "ShaderCompiler.h"
#include <iostream>

void ShaderCompiler::initCompiler() {
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
}

void ShaderCompiler::shaderToString() {
    std::ifstream ifs("..\\shaders\\triangle.glsl");

    strShader.assign((std::istreambuf_iterator<char>(ifs)),
                       (std::istreambuf_iterator<char>()));
    strTriangle = strShader.c_str();
}

void ShaderCompiler::attachShader() {
    glShaderSource(vertexShader, 1,&strTriangle, nullptr);
    glCompileShader(vertexShader);
}
