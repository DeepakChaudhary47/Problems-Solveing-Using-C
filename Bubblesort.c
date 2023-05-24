#include <stdio.h>
void Arr(int* A,int n)
{
    for(int i=0;i<n;i++)
    {
       printf("%d ",A[i]);
    }
       printf("\n");
}
void bubblesort(int* A,int n){
    int temp;
    int sorted=0;
    for(int i=0;i<n-i;i++){
        printf("Working on pass %d\n",i+1);
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
            temp =A[j];
            A[j]=A[j+1];
            A[j+1]=temp;
            sorted=0;
            }
       }
          if(sorted)
          {
              return;
          }  
    }
    
}
int main(){
    int A[]={12,49,98,3,444,22,83,84,37,61};
    int n=10;
    Arr(A,n);
    bubblesort(A,n);
    Arr(A,n);
    
}
