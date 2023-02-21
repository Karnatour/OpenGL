//
// Created by Vojta on 19.02.2023.
//

#ifndef OPENGLPROJECT_VBO_H
#define OPENGLPROJECT_VBO_H

#include "glad/gl.h"


class VBO{
public:
    unsigned int m_VBO;
    void initVBO();
    void bindVBO();
};

#endif //OPENGLPROJECT_VBO_H
