#include<stdio.h> 
#include<time.h.>
#include<stdlib.h>

int main(){ 
    int number, input, noofguess=0;
    srand(time(0));
    number = rand()%100 + 1;
    
    do
    {
        printf("Enter your number between 1-100 \n");
        scanf("%d", &input);
        if (input==number){
            printf("You have given correct answer in %d attempts\n", noofguess);
            break;
        }
        else if(input<number){
            printf("the input is lesser \n ");
        }
        else if(input>number){
            printf("The unput is greater \n");
        }
        noofguess++;

    } while (input!=number);
    

     return 0;
}