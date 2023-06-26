#include "main.h"
#include <stdio.h>
/**
 * main - updates pointer to parameter
 * Return: Always 0.
 */
int main(void)
{
int number = 0;
printf("Before update: %d\n", number);
updateValue(&number);
printf("After update: %d\n", number);
return 0;
}
