#include<stdio.h>
#include<string.h>
int main(){
    FILE *ptr;
    int i;
    char num[13];
    ptr=fopen("new2.txt","w");
    
    fprintf(ptr,"Hey this is new language.");
    fclose(ptr);
   

    return 0;
}