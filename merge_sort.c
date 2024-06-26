#include <stdio.h>
int a[40], b[40];
void merge(int l, int mid, int h){
int i = l, j = mid + 1, k = l;
while (i <= mid && j <= h) {
       if (a[i] <= a[j]) {
             b[k] = a[i++];
        }
     else{
          b[k] = a[j++];
       }
      k++;
}
while (i <= mid) {
      b[k++] = a[i++];
    }
while (j <= h){
      b[k++] = a[j++];
}
for (k = l; k <= h; k++) {
     a[k] = b[k];  }
}
void mergesort(int l, int h){
int mid;
if (l < h){
   mid = (l + h) / 2;
   mergesort(l, mid);
   mergesort(mid + 1, h);
   merge(l, mid, h);
  }
}
int main(){
int n, i;
printf("Enter the array size:\n");
scanf("%d", &n);
printf("\nEnter the elements:\n");
for (i = 0; i < n; i++){
     scanf("%d", &a[i]);
   }
mergesort(0, n - 1);
printf("\nthe sorted array is\n");
for (i = 0; i < n; i++){
     printf(" %d", a[i]);
  }
}
