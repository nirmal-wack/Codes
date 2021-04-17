#include<stdio.h>
int calculate(int n);
int main(){
	int i,n1=1,n2=1,total;
	for (size_t i = 0; i < 10; i++)
	{
		total=n1+n2;
		printf("%d\n",total);
		n1=n2;
		n2=total;
	}
	
}