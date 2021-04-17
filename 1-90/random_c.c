#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int h=2,user_choice;
    srand(time(0));
     int number =rand()%100;
     
     
     for (int i = 0; i < 5; i++)
     {
         scanf("%d",&user_choice);
         if(number>user_choice){
             printf("Try More High.");
         }
         else if(user_choice>number){
             printf("Tey less one.");
         }
         else if(user_choice==number){
             printf("yes you are right number is %d",user_choice);
             break;
         }
         else if (i==5)
         {
            printf("You lost.");
         }
         
         printf("you have %d chances left",5-(i+1));
     }
     
    

 
}