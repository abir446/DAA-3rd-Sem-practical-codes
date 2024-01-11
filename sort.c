#include <stdio.h>
#include<stdlib.h>
void swap(int* arr, int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

void swapSelection(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)

		for (j = 0; j < n - i - 1; j++)
			if (arr[j] > arr[j + 1])
				swap(arr, j, j + 1);
}

void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;


    for (i = 0; i < n - 1; i++) {

        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;

        swapSelection(&arr[min_idx], &arr[i]);
    }
}

void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

int main()
{
	int *arr;
	int s,choice;

	arr = malloc(sizeof(int)*10);
	printf("Enter the number of array elements: ");
	scanf("%d",&s);
	for (int i = 0;i < s; i++)
    {
        scanf("%d",&arr[i]);
    }
    do
    {

    printf("Enter 1 for Bubble Sort:\nEnter 2 for selection Sort:\nEnter 3 for Insertion Sort:\nEnter 4 to exit:");
    scanf("%d",&choice);
    switch(choice){

case 1:
	bubbleSort(arr, s);
	printArray(arr, s);
	break;
case 2:
    selectionSort(arr, s);
    printArray(arr, s);
    break;
case 3:
    insertionSort(arr, s);
    printArray(arr, s);
    break;
case 4:
    exit(0);

    }
    }while(1);
	printf("Sorted array: ");

	return 0;
}
