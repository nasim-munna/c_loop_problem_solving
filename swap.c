#include <stdio.h>
#include <math.h>

int main()
{
  	int number, FirstDigit, DigitsCount, LastDigit, a, b, SwapNum;

  	printf("\n Please enter any number that you wish  : ");
  	scanf("%d", & number);

  	DigitsCount = log10(number);
  	FirstDigit = number / pow(10, DigitsCount);

  	LastDigit = number % 10;

  	SwapNum = LastDigit;
  	SwapNum = SwapNum  * (round(pow(10, DigitsCount)));
  	SwapNum = SwapNum + number % (int)(round(pow(10, DigitsCount)));
  	SwapNum = SwapNum - LastDigit;
  	SwapNum = SwapNum + FirstDigit;

	printf(" \n The Number after Swapping First Digit and Last Digit =  %d", SwapNum);

  	return 0;
}
