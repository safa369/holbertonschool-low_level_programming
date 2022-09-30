#include <stdio.h>
/**
* main - size of various type.
*Return:0;
*/
int main(void)
{
char ctype;
int itype;
long int litype;
long long int llitype;
printf("Size of char: %zu bytes\n", sizeof(ctype));
printf("Size of int: %zu bytes\n", sizeof(itype))
printf("Size of long int: %zu bytes\n" sizeof(litype));
printf("Size of long long int: %zu bytes\n" sizeof(llitype));
return (0);
}
