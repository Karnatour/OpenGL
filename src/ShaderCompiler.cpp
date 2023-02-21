//
// Created by Vojta on 19.02.2023.
//


#include "ShaderCompiler.h"
#include "VAO.h"

void ShaderCompiler::initCompiler() {
    vertexShader = glCreateShader(GL_VERTEX_SHADER);
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
}

void ShaderCompiler::vertexShaderToString() {
    std::ifstream ifs("..\\shaders\\vertexTriangle.glsl");
    strShader.assign((std::istreambuf_iterator<char>(ifs)),
                     (std::istreambuf_iterator<char>()));
    bufferShader = strShader.c_str();
}

void ShaderCompiler::fragmentShaderToString() {
    std::ifstream ifs("..\\shaders\\fragmentTriangle.glsl");
    strShader.assign((std::istreambuf_iterator<char>(ifs)),
                     (std::istreambuf_iterator<char>()));
    bufferShader = strShader.c_str();
}

void ShaderCompiler::compileShader() {
    vertexShaderToString();
    glShaderSource(vertexShader, 1, &bufferShader, nullptr);
    glCompileShader(vertexShader);
    testShaderSuccess();
    fragmentShaderToString();
    glShaderSource(fragmentShader, 1, &bufferShader, nullptr);
    glCompileShader(fragmentShader);
    testShaderSuccess();
}

void ShaderCompiler::testShaderSuccess() {
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    glGetShaderiv(vertexShader, GL_INFO_LOG_LENGTH, &logLenth);
    char *msg = new char[logLenth];
    if (!(success)) {
        glGetShaderInfoLog(vertexShader, logLenth, nullptr, msg);
        std::cerr << msg << std::endl;
    }
    delete[] msg;
}

void ShaderCompiler::initLinker() {
    shaderProgram = glCreateProgram();
}

void ShaderCompiler::linkShader() {
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
    testLinkerSuccess();
}

void ShaderCompiler::useProgram(){
    glUseProgram(shaderProgram);
    glDrawArrays(GL_TRIANGLES,0,6);
}

void ShaderCompiler::deleteShader() {
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
}

void ShaderCompiler::testLinkerSuccess() {
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    glGetProgramiv(shaderProgram, GL_INFO_LOG_LENGTH, &logLenth);
    char *msg = new char[logLenth];
    if (!(success)) {
        glGetProgramInfoLog(shaderProgram, logLenth, nullptr, msg);
        std::cerr << msg << std::endl;
    }
    delete[] msg;
}





