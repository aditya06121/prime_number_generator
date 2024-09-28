//the program is set to create infinite prime numbers, use ctrl+c to abort.
#include <stdio.h>
#include "prime_chech.h"

int main(){
	FILE *fp;
    long long n=1;
    fp = fopen("output.txt", "w");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (1)
	{
		if (prime_checker(n)==1)
		{
			printf("writing to file: %lld\n",n);
			fprintf(fp, "%lld\n", n);
		}
		n++;
	}
    fclose(fp);

    return 0;
	
}