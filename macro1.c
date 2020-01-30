#include <stdio.h>

#define message(a, b) \
        printf("message from "#a " to " #b "\n");
        
#define tokenprn(n) \
        printf("token" #n " = %d\n", token##n );
        
/*the # sign make a string*/
/*the ## glue two things to one word*/

int main()
{
    int token50 = 190;
    
    /*this is a macro it's going to be replaced during pre-complile stage
    so don't put ; at the end*/
    message(Bob, Alice)
    tokenprn(50)

    return 0;
}
