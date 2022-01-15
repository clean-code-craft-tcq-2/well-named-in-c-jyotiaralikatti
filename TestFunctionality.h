#ifndef __TEST_FUNCTIONALITY_H__
#define __TEST_FUNCTIONALITY_H__

#include "VariableTypes.h"

void testNumberToPair(int expectedPairNumber,
                    enum MajorColor major,
                    enum MinorColor minor);
void testPairToNumber( enum MajorColor major,
                    enum MinorColor minor,
                    int expectedPairNumber);

#endif
