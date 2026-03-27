#include <stdio.h>

int sum(int arr[], int n){
  int t_sum=0;
  for(int i=0; i<n; i++){
    t_sum+=arr[i];
  }
  return t_sum;
}
double average(int arr[], int n){
  return (double)sum(arr,n)/n;
}
int max(int arr[], int n){
  int maxi=arr[0];
  for(int i=1; i<n; i++){
    if(arr[i]>maxi)
      maxi=arr[i];
  }
  return maxi;
  
}

int main(){
  int arr[] ={3,7,1,9,4,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  printf("sum: %d\n", sum(arr, n));
  printf("avg: %.2f\n", average(arr,n));
  printf("max: %d\n", max(arr,n));

  return 0;
}
