﻿#include <stdio.h>
int main()
{
	int a;
	int b;
	int arr[3][10]={
		{0,1,2,3,4,5,6,7,8,9},
		{10,11,12,13,14,15,16,17,18,19},
		{20,21,22,23,24,25,26,27,28,29}
		};
	for(a = 0;a < 3;a++)
		{
			for(b = 0;b < 10;b++)
			{
				printf("%4d",arr[a][b]);
			}
			printf("\n");
		}
}
