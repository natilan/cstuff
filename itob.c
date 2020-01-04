#include <stdio.h>
#include <string.h>

#define MAXLEN 10000

char letters[] = "0123456789ABCDEF"; /* all possible digits */


void itob(int n, char s[], int b);
void reverse(char s[]);
/* converts the integer n into a base b (2-16) of charcaters
representation in the string s */
int main()
{
    
    int decnum = -255, b = 8;
    char s[MAXLEN]; /* string to hold the converted value */
    printf("Decimal %d in base of %d is ", decnum, b);
    itob(decnum, s, b);
    
    return 0;
}
/* converts the integer n into a base b character in the string s*/
void itob(int n, char s[], int b)
{
    if (b < 2 || b > 16)
    {
        printf("not supported\n");
        return;
    }
    
    int r, i = 0, sign; /* reminder */
    if(n < 0){
        sign = -1;
        n = -n;
    }
    while(n) /* while n is not 0*/
    {
      r = n % b; /* calc reminder */
      s[i++] = letters[r];   
      n = n/b;
    }
    if(sign < 0)
    {
     s[i++] = '-';
    }
    s[i] = '\0';
    
    reverse(s);
    printf("%s",s);
}

void reverse (char s[])
{ 
    int i, j, c;
    for(i = 0, j = (strlen(s)-1); i < j ; i++, j-- )
    {
      /*swap*/
       c = s[i];
       s[i] = s[j];
       s[j] = c;
    }
}