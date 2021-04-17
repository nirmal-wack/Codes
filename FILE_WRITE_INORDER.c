#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    char c;
    char name[13];int i,num;
    
    ptr=fopen("text.txt","w");
   
   
   for ( i = 0; i < 2; i++)
   {
      scanf("%s",name);
      fprintf(ptr,"%d. Name : %s  ",i+1,name);
      scanf("%d",&num);
      fprintf(ptr," Num: %d\n",num);

      

   }
   
 

    return 0;
}