#include <stdio.h>

#define check(a,n,r) \
{\
  int i;\
  r = 0;\
  for(i=0;i<n;i++)\
    if(m(a[i]))\
    {\
      printf("\n %d \n", a[i]); \
      r++;\
    }\
}

#define m(n) (n)%2==0 
#define m1(a) #a /*make a string from the parameter*/

int main()
{
    
    int b[] = {10, 15, 20, 25, 35};
    int result;
    int i;
    
    printf(m1(m(5))); /*the order the macro assembly is outside-inside*/
    
    for(i = 0; i < 5; i++)
        printf("\n %d \n", b[i]);
    
    check(b,5,result)
    
    printf("\n %d Even numbers", result);
    
    return 0;
}
