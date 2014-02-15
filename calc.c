#include<stdio.h>
#include<stdlib.h>

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
