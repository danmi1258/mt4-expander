#pragma once

#define  NOMINMAX                      // another way to prevent std::min|max errors: std::min<int>(3, 4)
#define _USE_32BIT_TIME_T

#define WIN32_LEAN_AND_MEAN            // exclude rarely-used stuff from Windows headers
#include <windows.h>
