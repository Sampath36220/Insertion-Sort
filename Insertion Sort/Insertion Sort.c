// Insertion Sort
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int* p;
    p=(int*)malloc(n*sizeof(int));
    printf("enter the values of n:\n");
    for(i=0;i<n;i++){
        scanf("%d",(p+i));
    }
    printf("the elements before sorting are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }

InsertionSort(p,n);
 printf("the elements after sorting are:\n");
    for(i=0;i<n;i++){
        printf("%d\t",*(p+i));
    }
    void InsertionSort(int *p,int n)
{
    int key,i,j;
    for(i=0;i<n;i++)
    {
        key=p[i];
        j=j-1;
        while(j<=0 && p[j>key])
        {
            p[j+1]=p[j];
            j--;
        }
        p[j+1]=key;
}
}
    }
}
