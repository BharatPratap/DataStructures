#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[10];
    int size;
    int length;
};

/*****************Functions****************/
void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
        printf("%d ",arr.A[i]);
}

void Append(struct Array *arr,int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr,int index,int x)
{
    if(index>=0 && index<=arr->length)
    {
        for(int i = arr->length;i>index;i--)
            arr->A[i] = arr->A[i-1];
        arr->A[index] =x;
        arr->length++;
    }
}

int Delete(struct Array *arr,int index)
{
    if(index>=0 && index<=arr->length)
    {
        int x = arr->A[index];
        for(int i=index;i<arr->length-1;i++)
        {
            arr->A[i] = arr->A[i+1];
        }
        arr->A[arr->length-1] = 0;
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x,int *y)
{
    int temp = *x;
    *x=*y;
    *y = temp;
}

int LinearSearch(struct Array *arr,int key)
{
    for(int i=0;i<arr->length;i++)
    {
        if(key==arr->A[i])
        {
            // swap(&arr->A[i],&arr->A[i-1]); transposition
            
            swap(&arr->A[i],&arr->A[0]);//move to front
            return 0;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr,int key)
{
    int l=0;
    int h = arr.length;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(key == arr.A[mid])
            return mid;
        else if(key<arr.A[mid])
            h=mid-1;
        else 
            l=mid+1;
    }
    return -1;

}
int get(struct Array arr,int index)
{
    if(index>=0 && index<=arr.length)
        return arr.A[index];
}

void set(struct Array arr,int index,int value)
{
    if(index>=0 && index<=arr.length)
         arr.A[index] = value;
}

int max(struct Array arr)
{
    int ret = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>ret)ret = arr.A[i];
    }
    return ret;
}

int min(struct Array arr)
{
    int ret = arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i]>ret)ret = arr.A[i];
    }
    return ret;
}

int sum(struct Array arr)
{
    int ret = 0;
    for(int i=0;i<arr.length;i++)
    {
        ret+=arr.A[i];
    }
    return ret;
}
void Reverse(struct Array *arr)
{
    int *B;
    int i,j;
    B = (int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++)
        B[j] = arr->A[i];
    for(i=0;i<arr->length;i++)
        arr->A[i]=B[i];
}

void Reverse2(struct Array *arr)
{
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(&arr->A[i],&arr->A[j]);
    }
}

/*****************Main method****************/
int main()
{
    struct Array arr = {{25,37,41,56,61,72},10,6};
    
    Reverse2(&arr);
    Display(arr);



    return 0;
}