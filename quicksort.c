#include <stdio.h>
void swap(int *a, int *b) {
int temp = *a;
*a = *b;
*b = temp;}
int part(int arr[], int low, int high) {
int pivot = arr[high];
int i = low - 1;
for (int j = low; j <= high - 1; j++)
{
if (arr[j] <= pivot) {
i++;
swap(&arr[i], &arr[j]);}}
swap(&arr[i + 1], &arr[high]);
return i + 1;}
void quickSort(int arr[], int low,
int high) {
if (low < high) {
int pIndex = part(arr,low,high);
quickSort(arr,low,pIndex-1);
quickSort(arr,pIndex+1,high);}}
int main() {
    int n,i;
    printf("Enter the array size\n");
    scanf("%d",&n);
    int Array[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
        scanf("%d",&Array[i]);
//int Array[] = {5, 2, 9, 1, 5, 6};
//int n = sizeof(Array) /
//sizeof(Array[0]);
quickSort(Array, 0, n - 1);
printf("Sorted array: \n");
for (int i = 0; i < n; i++) {
printf("%d ", Array[i]);}
}
