#include<stdio.h>
int checkIfSorted(int arr[],int n){
  if(n==1)
  return 1;
  else return(arr[n-1]<arr[n-2]?0:checkIfSorted(arr,n-1));
}
int main(){
  int n,i;
  printf("Enter length of an array \n");
  scanf("%d",&n);
  int arr[n]; //initialize
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  if(checkIfSorted(arr,n))
    printf("Sorted");
  else
    printf("not sorted");
}
   

