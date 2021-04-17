#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int s=10;
    int a1[5];
    for(int i=0;i<6;i++){
        if(s%2==0){
            // printf("%d",0);
            a1[i]=0;
            s=s/2;
            
        }else{
            // printf("%d",1);
            s=floor(s/2);
            a1[i]=1;
        }
    }
    
    for(int i=2;i<6;i++){

        printf("%d",a1[5-i]);

    }

    
    return 0;
}