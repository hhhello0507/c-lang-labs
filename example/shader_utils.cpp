#include "shader_utils.h"
#include <iostream>

GLuint compileShader(GLenum shaderType, const std::string& source) {
    GLuint shader = glCreateShader(shaderType);
    const char* sourcePtr = source.c_str();
    glShaderSource(shader, 1, &sourcePtr, NULL);
    glCompileShader(shader);

    GLint success;
    glGetShaderiv(shader, GL_COMPILE_STATUS, &success);
    if (!success) {
        GLchar infoLog[512];
        glGetShaderInfoLog(shader, 512, NULL, infoLog);
        std::cerr << "½¦ÀÌ´õ ½ÇÆÐ: " << infoLog << std::endl;
        glDeleteShader(shader);
        return 0;
    }
    return shader;
}
