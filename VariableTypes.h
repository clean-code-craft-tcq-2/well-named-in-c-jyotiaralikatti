#ifndef __VARIABLE_TYPES_H__
#define __VARIABLE_TYPES_H__

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMinorColors,numberOfMajorColors;

#define MAX_COLORPAIR_NAME_CHARS  16
#endif
