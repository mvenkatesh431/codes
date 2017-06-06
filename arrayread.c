#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {

  int arr[10];

  int i;
  printf("Enter array Elements : ");

  for(i=0;i<10;i++){
    scanf("%d",&arr[i]);
  }
  printf("Array Size : %d \t and array lenght is : %d \n", sizeof(arr), sizeof(arr)/sizeof(int) );
  printf("Printing the final array : ");

  for(i=0; i<10; i++){
    printf("%d ",arr[i]);
  }
    return 0;
}
