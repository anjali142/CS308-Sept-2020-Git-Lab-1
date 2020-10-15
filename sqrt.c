/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// to run the code ./a.out no_whose_square_root_to_find
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	if(input<0)
	{
		printf("Sqrt of %d is %f\n",input,sqrt(-1*input));
		return(0);
	}
	int input = atoi(argv[1]);
	printf("Square root of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting\n");
	return(0);

} // end main
