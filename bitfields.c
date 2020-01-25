#include <stdio.h>

struct bitf3
    {
        unsigned int a:3;
        unsigned int b:2;
    } b3;
    
    struct bitf4
    {
        unsigned char a:3;
        unsigned char b:2;
    } b4;
    
    struct bitf1
    {
        unsigned int a:3;
        unsigned int b:2;
        unsigned int c:30;
    } b1;
    
    struct bitf2
    {
        unsigned int a:3;
        unsigned int  :0;
        unsigned int b:2;
    } b2;
    
    
int main()
{
    
    unsigned int *p = (unsigned int*)(&b1);

    b3.a = 9; /*we will get warning large integer implicitly to unsigned type*/
    printf("b3.a = %d b3.b = %d \n",b3.a, b3.b);
    b1.a = 2;
    printf("b1.a = %d b1.b = %d \n",*p, *(p+1));
    b1.c = 3;
    printf("b1.a = %d b1.b = %d \n",*p, *(p+1));
    
    printf("sizeof unsighned int %lu \n", sizeof(int));
    
    printf("sizeof b1 %lu \n", sizeof(b1));
    printf("sizeof b2 %lu \n", sizeof(b2));
    printf("sizeof b3 %lu \n", sizeof(b3));
    printf("sizeof b4 %lu \n", sizeof(b4));
    
    return 0;
}
