#include<stdio.h>
int main(){
	int i,j=7,k=j-1,l=1,total;
	for ( i = 0; i <= j; i++)
	{
		if(j==1){
			break;
		}
		
		else{
			total=j*k*l;
			l=total;
			printf("%d\n",total);
			j=j-2;
			k=k-2;
			
		}

	}

	return 0;	
}
