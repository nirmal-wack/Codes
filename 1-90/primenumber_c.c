#include<stdio.h>
int main(){
	int i=2,z,j=0;
	z=16;
	while(i<z){
		if(z%i==0){
			printf("%d is Not Prime. beacuse of %d.\n",z,i);
			break;
			
		}
		else{
			j=j+1;
		}
		i++;
		}	
if(j>1){
	
	printf("Its Prime.\n");
}
	
}
