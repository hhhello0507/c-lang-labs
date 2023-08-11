#ifndef SHADER_UTILS_H
#define SHADER_UTILS_H
#include <GL/glew.h>
#include <string>
GLuint compileShader(GLenum type,  const std::string& source);

#endif
