#include<stdio.h>

int main()
{
    int arr[3][3];
    int brr[3][3];
    int ans[3][3];
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

    //calculate ans
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k<3; k++)
            {
                ans[i][j] += arr[i][k] * brr[k][j];
            }
        }

    }
    printf("Mul of the two matrix: \n");
 for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            printf("%d\t",ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}

