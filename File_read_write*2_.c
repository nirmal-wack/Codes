#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    char c;
    int i,num;
    
    ptr=fopen("text.txt","r");
   
   fscanf(ptr,"%d",&num);
   printf("%d",num);
   ptr=fopen("new1.txt","w");
   i=num*2;
   fprintf(ptr,"%d",i);



   
 

    return 0;
}