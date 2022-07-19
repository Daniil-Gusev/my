#include <stdio.h>
#include <string.h>
#include "words.c"
int extract_word(char str[],int num,char word[])
{
if(words(str)<num)
{
word[0] ='\0';
return 0;
}
int c1=0,c2=1,n=0,l=strlen(str);
if(num==1)
{
int c3 =0;
for(;c1<l;c1++)
{
if(str[c1]==' ' || str[c1]=='\t')
{
c2++;
continue;
}
if(str[c1]!=' ' && str[c1]!='\t')
word[c3++] =str[c1];
if(str[c1]!=' ' && str[c2++]==' ')
return 1;
}
}
for(;c1<l;c1++)
{
if((str[c1]!=' ')&&(str[c2]==' '))
n++;
if(n==(num-1))
{
c2++;
break;
}
c2++;
}
int c3 =0;
for(;c2<l;c2++)
{
if(str[c2]==' ' || str[c2]=='\t')
continue;
if(str[c2]!=' ' && str[c2]!='\n' && str[c2]!='\0')
word[c3++]=str[c2];
else
return 1;
}
}
