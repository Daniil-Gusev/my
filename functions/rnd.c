#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int rnd(min,max)
int min, max;
{
int num;
int snum;
snum =time(NULL);
srand(snum);
if(!min) min =1;
if(!max) max =100;
num =min +(rand()%(max -min +1));
return(num);
}
