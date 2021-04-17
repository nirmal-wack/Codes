#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    char c;
    char num[13];
    
    ptr=fopen("text.txt","r");
    c = fgetc(ptr);
   
   while (c!=EOF)
   {
       if (c==' ')
       {
          printf("\n");
       }
       
       
       printf("%c",c);
       

       c=fgetc(ptr);
       
   }
   

    return 0;
}