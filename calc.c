#include<stdio.h>
#include<stdlib.h>

int add(int x, int y) ;
int multiply(int x, int y) ;
int divide(int x, int y) ;
int subtract(int x, int y) ;

int main(){
	int x,y;
	char ch;
	scanf("%d %c %d",&x,&c,&y);
	switch(c)
	{
		case('+'):	z=add(x,y);
				break;

		case('-'):	z=subtract(x,y);
				break;

		case('*'):	z=multiply(x,y);
				break;

		case('/'):	z=divide(x,y);
				break;
	}
	printf("RESULT = %d\n",z);
}

int add(int x, int y)
{
	return x + y ;
}

int subtract(int x, int y)
{
	return x - y ;
}

int multiply(int x, int y)
{
	return x * y ;
}

int divide(int x, int y)
{
	return x / y ;
}
