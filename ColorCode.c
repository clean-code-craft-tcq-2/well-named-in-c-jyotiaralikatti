#include <stdio.h>
#include <string.h>
#include "ColorCode.h"

const char* MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};

 int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
 int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    *buffer = '\0';
/*    printf("%s %s\n",
        MajorColorNames[colorPair->majorColor],
        MinorColorNames[colorPair->minorColor]);*/
        
    strcat(buffer,MajorColorNames[colorPair->majorColor]);
    strcat(buffer," ");
    strcat(buffer,MinorColorNames[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void Get_ColorCodePair_AsString(int index, int* expectedpairNumber)
{
    int Pairindex;
    ColorPair colorPair;

    colorPair = GetColorFromPairNumber(index);
    ColorPairToString(&colorPair,colorPairNames);
    
    *expectedpairNumber = GetPairNumberFromColor(&colorPair);
}
