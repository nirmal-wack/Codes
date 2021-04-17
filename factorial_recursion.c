#include<stdio.h>
int calculate(int n);
int main(){
	int n=8;
	n=calculate(n);
	printf("%d\n",n);
	
}
int calculate(int n){
	if(n==0 || n==1){
		return 1;
	
	}
	else{
		return n *calculate(n-1);
	
	}
}