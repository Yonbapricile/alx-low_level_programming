#include <stdio.h>
/**
 *  *Description:main-prints out a string to stdout.
 *  *Return:0 if success
 */
int main(void)
{
printf("Size of a char: %ld byte(s)", sizeof(char));
printf("Size of an int: %ld byte(s)", sizeof(int));
printf("Size of a long int: %ld byte(s)", sizeof(long int));
printf("Size of a long long  int: %ld byte(s)", sizeof(long long int));
printf("Size of a float: %ld  byte(s)", sizeof(float));
return (0);
}
