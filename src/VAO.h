//
// Created by Vojta on 21.02.2023.
//

#ifndef OPENGLPROJECT_VAO_H
#define OPENGLPROJECT_VAO_H

#include "glad/gl.h"

class VAO{
private:
    unsigned int m_VAO;
public:
    void initVAO();
    void bindVAO();
    void setPtr();
};

#endif //OPENGLPROJECT_VAO_H
