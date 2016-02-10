#include <stdio.h>

int main()
{
	int cel;
	int fhr;
	printf("_____________________________\n");
	printf("| Fahrenheit |   Celsius    |\n");
	printf("|____________|______________|\n");
		
	for (fhr=0; fhr<= 300; fhr = fhr+10)
	{
		cel = 5*(fhr-32)/9;
		printf ("|%7d     | %7d      | \n",fhr, cel);
		printf("|____________|______________|\n");
	}
	return 0;
}
