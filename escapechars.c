#include <stdio.h>
#define MAXLINE 100

void escape(char s[], char t[]);

int main()
{
    int i = 0, c;
    char t[MAXLINE];
    char s[MAXLINE];
    
    while(i <(MAXLINE-1) && (c = getchar()) !=EOF && c != '\n')
    {
        t[i++] = c;
    }
    if(c = '\n')
        t[i++] = '\n';
        
    t[i] = '\0';
    printf("my t before escape = %s",t);
    escape(s, t);
    printf("my s after escape = %s",s);
    return 0;
}

void escape(char s[], char t[])
{
    int i=0, j=0;
    while(t[i]) /* while not null*/
    {
        /*printf("%d %c\n", i ,t[i++]);*/
        
        switch(t[i])
            {
            case '\t':
                s[j++] = '\\';
                s[j++] = 't';
                break;
            case '\n':
                s[j++] = '\\';
                s[j++] = 'n';
                break;
            case '\b':
                s[j++] = '\\';
                s[j++] = 'b';
                break;   
            default:
             /*  This is not a special character, so just copy it  */
                s[j++] = t[i];
            }
         i++;
    }
    s[j] = t[i]; /* copy null*/
}





