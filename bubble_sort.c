#include <stdio.h>
int arr[100];

int bubblesort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i <n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

}
int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d", &n);

    arr[n];
    printf("\nEnter array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    bubblesort(arr, n);
    printf("\nSorted Array Elements are \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
}
