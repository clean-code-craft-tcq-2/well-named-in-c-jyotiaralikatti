#include <stdio.h>
#include "TestFunctionality.h"
#include "VariableTypes.h"
#include "ColorCode.h"

int main()
{
    int choice;
    printf("entered main\n");
    printf("Enter choices To\n1. Test testNumberToPair()\n2. Test testPairToNumber()\n3. Print Reference manual\n");
    scanf("%d",&choice);
    
    switch(choice)
    {
    case 1:
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE); break;
    
    case 2:
    printf("entered PairToNumber\n");
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);break;
    
    case 3:
    Print_reference_manual();break;
    
    default: printf("Invalid input\n");break;
    }
    return 0;
}
void Print_reference_manual()
{
	int PairNumber, expectedpairNumber;

	printf ("\n*********%d-Pair Colour codes**********\n", MAX_PAIR_NUMBER);
	printf ("____________________________\n");
	printf ("Pair_Num\tColour-Pair\n");
	printf ("____________________________\n");
	
	for (PairNumber = 1; PairNumber <= MAX_PAIR_NUMBER; PairNumber++)
	{
    Get_ColorCodePair_AsString(PairNumber,&expectedpairNumber);
		if (expectedpairNumber == PairNumber){
			printf ("%-8d\t%s\n", PairNumber, colorPairNames);
			printf("-----------------------------\n");
		}
	}
}



