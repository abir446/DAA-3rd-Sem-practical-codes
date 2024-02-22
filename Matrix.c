#include<stdio.h>

int main()
{
    int arr[3][3];
    int brr[3][3];
    printf("Enter the First matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter the Second matrix: \n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            scanf("%d",&brr[i][j]);
        }
    }
    printf("Addition of the two matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j] + brr[i][j]);
        }
        printf("\n");

    }
    printf("Subtraction of the two matrix: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",arr[i][j] - brr[i][j]);
        }
        printf("\n");

    }

    return 0;
}
