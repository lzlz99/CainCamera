//
// Created by CainHuang on 2019/3/13.
//

#include <AndroidLog.h>
#include "GLInputFilter.h"

GLInputFilter::GLInputFilter() {

}

GLInputFilter::~GLInputFilter() {

}

GLboolean GLInputFilter::uploadTexture(Texture *texture) {
    return GL_TRUE;
}

GLboolean GLInputFilter::renderTexture(Texture *texture, float *vertices, float *textureVertices) {
    return GL_TRUE;
}

void GLInputFilter::drawTexture(GLuint texture, float *vertices, float *textureVertices) {
    GLFilter::drawTexture(texture, vertices, textureVertices);
}
