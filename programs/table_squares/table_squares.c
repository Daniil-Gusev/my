#include <stdio.h>
#include <stdlib.h>
void main()
{
printf("введите число, от которого показать таблицу квадратов\n");
int num1, num2, num3;
if(scanf("%d", &num1) ==0)
{
printf("введено недопустимое значение, программа будет закрыта!\n");
exit(0);
}
else
{
while(num1 < 1)
{
printf("минимальное число меньше 1, повторите\n");
scanf("%d", &num1);
}
}
printf("введите число, до которого показать таблицу квадратов\n");
if(scanf("%d", &num2) ==0)
{
printf("введено недопустимое значение, программа будет закрыта!\n");
exit(0);
}
else
{
while(num2 < num1)
{
printf("максимальное число меньше минимального, повторите\n");
scanf("%d", &num2);
}
}
for(;num1 <= num2;++num1)
{
num3 =num1*num1;
printf("%d =%d\n", num1, num3);
}
}
