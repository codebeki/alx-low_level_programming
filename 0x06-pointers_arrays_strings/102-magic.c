# include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* write a code here...
* Remark:
* - you are not allowed to use b
* - you are not allowed to modify p
* - only one statement
*   ou are not allowed to code anything else than the line of expected line of code at the expected line
*/
*(p + 5) = 98;
/*  this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
