//
// Created by Vojta on 21.02.2023.
//

#include "VAO.h"


void VAO::initVAO() {
    glGenVertexArrays(1, &m_VAO);
}

void VAO::bindVAO(){
    glBindVertexArray(m_VAO);
}

void VAO::setPtr(){
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
};

