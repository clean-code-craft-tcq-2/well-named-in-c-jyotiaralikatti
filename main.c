#include <stdio.h>
#include "TestFunctionality.h"
#include "VariableTypes.h"

int main()
{
    printf("entered main\n");
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    printf("entered PairToNumber\n");
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
