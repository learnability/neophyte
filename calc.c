#include<stdio.h>
#include<stdlib.h>

int add(int, int);
int mult(int, int);
int subtract(int num1, int num2);

int main(){
	int x,y;
	char ch;
	scanf("%d %c %d",&x,&c,&y);
	switch(c){
		case('+'):
			z=add(x,y);
			break;
		case('*'):
			z=multiply(x,y);
			break;
		case('/'):
			z=divide(x,y);
			break;
		case('-'):
			z=subtract(x,y);
			break;
	}
	printf("result is %d\n",z);
}

int add(int num1, int num2){ // this function is corresponds to Addition
	return num1+num2;

}

int subtract(int num1, int num2){ //this function corresponds to subtraction
	return num1-num2;
}

int mult(int num1, int num2){ //this function corresponds to multiplication
	return num1*num2;
}
