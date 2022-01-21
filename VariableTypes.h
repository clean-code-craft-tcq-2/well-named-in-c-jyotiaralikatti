#ifndef __VARIABLE_TYPES_H__
#define __VARIABLE_TYPES_H__

#define MAX_COLORPAIR_NAME_CHARS  16
#define MAX_PAIR_NUMBER 25
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

char colorPairNames[MAX_COLORPAIR_NAME_CHARS];

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

extern int numberOfMinorColors,numberOfMajorColors;
void Print_reference_manual(void);

#endif
