// A simple program that computes the square root of a number

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// include our own function
#  include "MathFunctions.h"


int main(int argc, char* argv[])
{
  if (argc < 2) {
    fprintf(stdout, "%s Version test\n", argv[0]);
    fprintf(stdout, "Usage: %s number\n", argv[0]);
    return 1;
  }

  double inputValue = atof(argv[1]);
  double outputValue = 0;

  if (inputValue >= 0) {
	// use our own function
    outputValue = mysqrt(inputValue);
  }

  fprintf(stdout, "The square root of %g is %g\n", inputValue, outputValue);
  return 0;
}
