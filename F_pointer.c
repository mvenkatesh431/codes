#include <stdio.h>
#include <stdlib.h>

int add( int x, int y){
    return x+y;
}

int sub ( int x, int y){
    return x-y;
}

int mul(int x, int y){
    return x*y;
}

int main()
{
//    int result;
//    // lets declare a function pointer.
//    int (*ptr) (int,int);
//    ptr = add;    // ptr = &add;
//    result = ptr(10,20);   // (*ptr)(10,20)
//    printf("Result is : %d \n", result);

    int result;
    // we can also initialize directly.
      int (*ptr[3]) (int, int) = {add, sub, mul};

    int (*ptr[3]) (int, int);
    *ptr = add;
    *(ptr+1) = sub;
    *(ptr+2) = mul;

    printf("Add : %d \t sub : %d \t mul : %d \n", ptr[0](200,100), ptr[1](200,100), ptr[2](200,100));

    return 0;
}
