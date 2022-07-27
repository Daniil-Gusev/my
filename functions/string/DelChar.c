#include <string.h>
int DelChar(char str[], int num)
{
int i, l =strlen(str);
if(num > l)
return 0;
for(i =num;i <= l;i++)
str[i] =str[i+1];
return 1;
}
