
#include <stdio.h>

#define print_vec(func_name, type, format)\
void func_name(type a[], int n)\
{\
    int i;\
    for(i=0; i < n; i++)\
        printf(#format, a[i]);\
    putchar('\n');\
}

print_vec(print_int_vec, int, %d\t)
print_vec(print_double_vec, double, %f\t)

int main()
{
    int a1[] = {10, 20, 30};
    double a2[] = {2.3, 6.8, 4.6, 3,14};
    
    printf("\n printing arrays \n");
    
    print_int_vec(a1,3);
    print_double_vec(a2, 4);
    
    return 0;
}
