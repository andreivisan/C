#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int playing_with_strings()
{
    char ch;
    char s[100];
    char sen[100];
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%c", &ch);
    scanf(" %[^\n]%*c", s);
    scanf(" %[^\n]%*c", sen);
    
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sen);
    return 0;
}

int main()
{
    playing_with_strings();
    return 0;
}