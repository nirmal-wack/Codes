#include<stdio.h>
#include<string.h>

int encrypt(char *name ){
    int i,j;
    for ( i = 0; i<strlen(name); i++)
    {
        name[i]=name[i]+1;
        

    }
 return 0;
}
int main(){
    char name[11];
    scanf("%s",name);
    encrypt(name);
    printf("%s\n",name);
    
    return 0;
}