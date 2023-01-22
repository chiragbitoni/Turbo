#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}
void SelectionSort(int A[],int n)
{
 int i,j,k;

 for(i=0;i<n-1;i++)
 {
 for(j=k=i;j<n;j++)
 {
 if(A[j]<A[k])
 k=j;
 }
 swap(&A[i],&A[k]);
 }
}
int main()
{
  clrscr();
  int *A,n,i;

 printf("Enter the size of array");
 scanf("%d",&n);
 A=(int *)malloc(n*sizeof(int));
 printf("Enter the array");
 for(i=0;i<n;i++)
 {
	scanf("%d",&A[i]);
 }

 SelectionSort(A,n);

 for(i=0;i<n;i++)
 printf("%d ",A[i]);
 printf("\n");
 getch();
 return 0;
}

//Best Case =  0(n^2)
//Worst Case = 0(n^2)
//Average Case = 0(n^2) 