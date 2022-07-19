#include <string.h>
int words(str)
char str[];
{
int c1=0,c2=1,n=0,l=strlen(str);
for(;c1<l;c1++)
{
if((str[c1]!=' ')&&(str[c2]==' '))
n++;
c2++;
}
return n+1;
}
