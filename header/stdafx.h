#pragma once

#define WIN32_LEAN_AND_MEAN         // exclude rarely-used stuff from Windows headers
#include <windows.h>


/**
 * Pseudo-Funktionen, die ihrem Namen entsprechende feste Werte zur�ckzugeben.
 * Alle Parameter werden ignoriert.
 */
BOOL _TRUE (...);
BOOL _FALSE(...);


/**
 * Pseudo-Funktionen, die ihrem Namen entsprechende variable Werte zur�ckzugeben.
 * Au�er dem ersten werden alle �bergebenen Parameter ignoriert.
 */
BOOL _BOOL(BOOL value, ...);
