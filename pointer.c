#include<stdio.h>
#include<conio.h>
void main()
{
	int *p,(*ptr)[5],a[5];
	p=a;
	ptr=&a;
	printf("p=%d\tptr=%d",p,ptr);
	p++;
	ptr++;
	printf("\np=%d\tptr=%d",p,ptr);
}
