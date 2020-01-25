#include <stdio.h>
enum mytypes {myint, mydouble, mychar};

/*define an array of three characters
each hold a struct, each struct has two fields - enum & union
the union has three optinal variables - int, double & char*/
struct st {
    
    enum mytypes typ;
    union u{
        int x;
        double y;
        char z;
    } data;
    
} a[3];


int main()
{
    int i;
    //manually initialize an array of structs
    a[0].typ = myint;
    a[0].data.x = 8;
    
    a[1].typ = mydouble;
    a[1].data.y = 3.14;
    
    a[2].typ = mychar;
    a[2].data.z = 'A';
    
    for(i = 0; i < 3; i++)
    {
        switch (a[i].typ){
            
            case myint :
                printf("%d\n", a[i].data.x);
            break;
            case mydouble :
                printf("%f\n", a[i].data.y);
            break;
            case mychar :
                printf("%c\n", a[i].data.z);
            break;
        }
    }
    
    return 0;
}
