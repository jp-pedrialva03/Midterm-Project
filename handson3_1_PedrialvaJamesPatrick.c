#include<stdio.h>
void multiplicatioTable();

int main()
{
    multiplicatioTable();
}

void multiplicatioTable()
{
    int a[100][100];

    for (int i=1; i<=10; i++)
    {
        for (int j=1; j<=10; j++)
        {
                a[i][j]= i*j;
        }
    }
    for (int i =1; i <= 10; i++)
    {
        for (int j=1; j<=10; j++)
        {
                printf("%d\t ",a[i][j]);
        }
    }

}
