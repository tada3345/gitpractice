#include <stdio.h>

int main(void){
    int x =17;
    int y=50;
    int z = 111;
    printf("x is %i\n", x);
    printf("y is %i\n", y);

//swapping
    int temp = x;
    x=y;
    y=temp;
//swapping is over

    printf("x is %i\n", x);
    printf("y is %i\n", y);
}
