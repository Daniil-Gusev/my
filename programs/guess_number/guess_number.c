#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game();
int rnd();
int main()
{
int option;
printf("Добро пожаловать в игру угадай число!\n");
while(1)
{
printf("1: Начать игру.\n");
printf("2: Выйти.\n");
printf("Сделайте св�ой выбор!\n");
scanf("%i",&option);
switch(option)
{
case 1:
game(0);
break;
case 2:
printf("Прощайте!\n");
exit(1);
break;
default:
printf("Это выбрать нельзя.\n");
break;
}
}
}
int game()
{
int max,num1,num2,degree=0,try,answer;
printf("От 1 и до какого числа будете угадывать?\n");
while(max<1)
{
scanf("%i",&max);
if(max<5)
{
printf("Но какой в этом смысл? Максимальное числ�ло должно быть не меньше 5!\n");
max=0;
}
}
num1=rnd(1,max);
for(num2=num1;num2>1;num2=num2/2)
{
degree++;
}
try=degree+rnd(1,5);
printf("Отгадайте число от 1 до %i, на это у вас есть %i попыток.\n",max,try);
while(try>0)
{
try--;
scanf("%i",&answer);
if(answer<num1)
{
printf("Попробуйте число побольше.\nОсталось попыток: %i!\n",try);
}
else if(answer>num1)
{
printf("Попробуйте число поменьше.\nОсталось попыток: %i!\n",try);
}
else
{
printf("Поздравляем, вы угадали!\n");
return(0);
}
}
printf("Ну ничего, в следующий раз повезет.\n");
return(0);
}
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
