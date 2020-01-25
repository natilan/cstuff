#include <stdio.h>
#include <stdlib.h>

int *f();

int main()
{
   int *p;
   int i;
   
   p = f();
    
   for(i=0; i < 5 ; i++)
        printf("%d ", *(p+i));
        
  free(p);  
  
  return 0;
}

int *f()
{
    int *q;
    q = (int *)malloc(5 * sizeof(int));
    int i, y;
    
    y =5;
    for(i=0; i < 5 ; i++)
    {
        q[i] = y;
        y +=5;
    }
    return q;
}