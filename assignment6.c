#include <stdio.h>
char str[100];
char*inputString()
{
    printf("enter a string:");
    scanf("%s",str);
    return str;
}
int main()
{
    char*result;
    result=inputString();
    printf("String =%s",result);
    return 0;
}