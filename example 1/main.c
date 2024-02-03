/*
 * main.c
 *
 *  Created on: Feb 3, 2024
 *      Author: Lenovo
 */


#include<stdio.h>
int main()
{
	int rows;
	printf("please enter the rows number: ");
	fflush(stdout);
	scanf("%i",&rows);
	for(int column=0;column<=rows;column++)
	{
	   for(int counter=column;counter<=rows;counter++)
     	{
		printf("%i\t",counter);
	    }
	   printf("\n");
	}
return  0;
}
