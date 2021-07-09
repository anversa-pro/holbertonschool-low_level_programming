#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the minimum number of coins to make change for a given amount
 * @argc: argument number
 * @argv: array of arguments
 * Return: number of coins or 1
 **/
int main(int argc, char *argv[])
{
int number,  module, coins = 0;
  
if (argc != 2)
{
printf("Error\n");
return (1);
}
number = atoi(argv[1]);
if (number < 0)
printf("0\n");
else
{
while (number > 0)
{
if(number / 25 != 0)
module = 25;
else if(number / 10 != 0)
module = 10;
else if(number / 5 != 0)
module = 5;
else if(number / 2 != 0)
module = 2;
else
{
coins = coins + number;
number = 0;
break;
}
coins = coins + (number / module);
number = number % module;
}
}
printf("%d\n", coins);
return (0);
return (0);
}
