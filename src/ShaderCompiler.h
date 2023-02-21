//
// Created by Vojta on 19.02.2023.
//

#ifndef OPENGLPROJECT_SHADERCOMPILER_H
#define OPENGLPROJECT_SHADERCOMPILER_H

#include "glad/gl.h"
#include <string>
#include <fstream>
#include <iostream>

class ShaderCompiler{
private:
    unsigned int vertexShader,fragmentShader,shaderProgram;
    int success,logLenth;
    std::string strShader;
    const char* bufferShader;
public:
    void initCompiler();
    void initLinker();
    void vertexShaderToString();
    void fragmentShaderToString();
    void compileShader();
    void testShaderSuccess();
    void testLinkerSuccess();
    void linkShader();
    void useProgram();
    void deleteShader();
};



#endif //OPENGLPROJECT_SHADERCOMPILER_H
