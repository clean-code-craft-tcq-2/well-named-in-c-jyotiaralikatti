#ifndef __COLOR_CODE_H__
#define __COLOR_CODE_H__

#include "VariableTypes.h"
/*.. Function Declations ..*/
void      ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int       GetPairNumberFromColor(const ColorPair* colorPair);

#endif
