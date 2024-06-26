#include<stdio.h>
#define SIZE 10

void bubblesort(int *const array,const size_t size);

int main()
{
    int a[SIZE]={2,6,4,8,10,12,89,68,45,37};

    puts ("Data items in original order ");

    for(size_t i=0;i<SIZE;++i)
    {
        printf("%4d",a[i]);
    }

    bubblesort(a,SIZE);
    puts("\n Data items in ascending order:");

    for(size_t i=0;i<SIZE;++i)
    {
        printf("%4d",a[i]);
    }
    puts("");
}

void bubblesort(int *const array, const size_t size)
{
    void swap(int *elemenptr,int *element2ptr);

    for(unsigned int pass=0;pass<size-1;++pass)
    {
        for(size_t j=0;j<size-1;++j)
        {
            if (array[j]>array[j+1])
            {
                swap(&array[j],&array[j+1]);
            }
        }
    }
}

void swap(int *elementptr,int *element2ptr)
{
    int hold =*elementptr;
    *elementptr=*element2ptr;
    *element2ptr=hold;
}
