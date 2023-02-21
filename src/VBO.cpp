//
// Created by Vojta on 19.02.2023.
//

#include "VBO.h"
#include "Triangle.h"

void VBO::initVBO() {
    glGenBuffers(1,&m_VBO);
}

void VBO::bindVBO() {
    glBindBuffer(GL_ARRAY_BUFFER,m_VBO);
    glBufferData(GL_ARRAY_BUFFER,sizeof(triangleVertices),triangleVertices,GL_STATIC_DRAW);
}
