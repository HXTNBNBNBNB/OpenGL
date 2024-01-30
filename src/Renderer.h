#pragma once
#include <iostream>
#include<GL/glew.h>

// 断言
#define ASSERT(x) if(!(x)) __debugbreak();
// 错误检查 精准定位
#define GLCall(x) GLClearError();\
    x;\
    ASSERT(GLLogCall(#x, __FILE__, __LINE__))

void GLClearError();
bool GLLogCall(const char* function, const char* file, int line);