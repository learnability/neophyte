#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double add(double x, double y) ;
double subtract(double x, double y) ;

double multiply(double x, double y) ;
double divide(double x, double y) ;

int mod(int x, int y) ;
double pow(double x, double y);

int main()
{
	double x,y,z;
	char c;
	scanf("%lf %c %lf",&x,&c,&y);
	switch(c)
	{
		case('+'):	z = add(x,y) ;
				break ;

		case('-'):	z = subtract(x,y) ;
				break ;

		case('*'):	z = multiply(x,y) ;
				break ;

		case('/'):	z = divide(x,y) ;
				break ;
	
		case('%'):	z = mod((int)x,(int)y) ;
				break ;

		case('^'):	z = pow(x,y) ;
				break ;

		case('l'):	z = log(x)/log(y) ;
				break ;
	}
	if(c == '%')
		printf("RESULT = %d\n",(int)z) ;
	else
		printf("RESULT = %lf\n",z);

	return 0 ;
}

double add(double x, double y)
{
	return x + y ;
}

double subtract(double x, double y)
{
	return x - y ;
}

double multiply(double x, double y)
{
	return x * y ;
}

double divide(double x, double y)
{
	return x / y ;
}

int mod(int x, int y)
{
	return x % y ;
}

double pow(double x, double y)
{
	int i=0 ;
	double result = 1 ;
	for(i=0;i<y;i++)
	{
		result = result * x ;
	}
	return(result) ;
}

