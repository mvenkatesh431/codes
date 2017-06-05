#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[]) {
  int num, i,j,cnt=0;

  printf("Enter Number : ");
  scanf("%d",&num );

  if(num < 2){
    printf("Invalid Number \n" );
  }

  for ( i = 2; i <= num; i++) {
    cnt = 0;
    for(j=2; j <= sqrt(i); j++){
      if(i%j == 0)
        cnt++;
    }
    if(cnt == 0)
      printf("%d ", i );
  }

  return 0;
}
