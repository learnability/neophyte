#include<stdio.h>
#include<stdlib.h>

int add(int x, int y) ;
int multiply(int x, int y) ;
int divide(int x, int y) ;
int subtract(int x, int y) ;
int pow(int , int );

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
	
		case('^'):	z=pow(x,y);

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

int pow(int x, int y)
{
	int i=0,result=1;
	for(i=0;i<y;i++){
		result = result * x;
	}
	return(result);
}
