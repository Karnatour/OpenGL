//
// Created by Vojta on 19.02.2023.
//

#ifndef OPENGLPROJECT_SHADERCOMPILER_H
#define OPENGLPROJECT_SHADERCOMPILER_H

#include "glad/gl.h"
#include <string>
#include <fstream>


class ShaderCompiler{
private:
    unsigned int vertexShader;
    std::string strShader;
    const char *strTriangle;
public:
    void initCompiler();
    void shaderToString();
    void attachShader();
};

#endif //OPENGLPROJECT_SHADERCOMPILER_H
