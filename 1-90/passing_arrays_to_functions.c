#include<stdio.h>
void cal(int *ptr, int n){
    
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d \n",i+1,*(ptr+n-(i+1)));
        
    }
    
    }
int main(){
        
        int a1[]={1,2,345,436,345,234,678};
        cal(a1,7);
    
    return 0;
}