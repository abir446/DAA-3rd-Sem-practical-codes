#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int idx = 0;

    int row[100];
    int col[100];
    int val[100];

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {

            if (arr[i][j] != 0)
            {
                row[idx] = i;
                col[idx] = j;
                val[idx] = arr[i][j];
                idx++;
            }
        }
    }
    for (int i = 0; i < idx; i++)
        printf("%d\t",row[i]);
    printf("\n");
    for (int i = 0; i < idx; i++)
        printf("%d\t",col[i]);
printf("\n");
    for (int i = 0; i < idx; i++)
        printf("%d\t",val[i]);
printf("\n");

    return 0;
}
