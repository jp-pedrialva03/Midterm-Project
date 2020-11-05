#include <stdio.h>
int main()
{
	int i;
	char name;
	char ch_arr[5][50]= {
		"\nPedrialva, James Patrick"
		"\nData Structure"
		};
		for(i = 0;i < 5; i++)
		{
			printf("%s",ch_arr+i);
		}
		printf("\n");
}
