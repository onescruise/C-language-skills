#include <stdio.h>
#include <time.h>
#include <stdlib.h>
main() 
{
	int i;
	srand((int)time(NULL));
	for(i=0;i<13;i++)
	  printf("%lf ",rand() /(double)(RAND_MAX/10)+1);
}
