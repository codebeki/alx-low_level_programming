#include <stdio.h>

int main(void)
{
int m;
int b[5];
int *p;

b[2] = 1024;
p = &m;
/*
* write a code here...
* Remark:
* - you are not allowed to use b
* - you are not allowed to modify p
* - only one statement
*/
*(p + 5) = 98;
/*  this prints 98\n */
printf("a[2] = %d\n", b[2]);
return (0);
}
