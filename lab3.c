#include <stdio.h>
#include <ctype.h>
int input = 0;
int userInput = 0;
int getInput();
int isValid(int input);
void printPattern(int maxValue);

int main(void){
    userInput = getInput();
    printf("input = %d\n", userInput);
    printPattern(userInput);
    return (0);
}


int getInput(){
    int input;
    do{
    printf("Please enter an odd number from 1- 9 > \n");
    scanf("%d", &input);
    printf("you chose %d, checking if that is valid... \n", input);
    }while(!isValid(input));
            return input;

}


int isValid(int input){
    if(input%2 == 0){
        printf("Your number is even fool! Try again\n");
            return 0;
    }if(input > 9){
        printf("Your number is too large! Yry again\n");
         return 0;
    }if(input <1){
        printf("Your number is too small! Try again\n");
        return 0;
    }if(isalpha(input)){
        printf("You have entered an illegal character - %d!\n", input);
        printf("Try again\n");
        return 0;
    }
    printf("%d is valid\n", input);
     return 1;
}

void printPattern(int maxValue){
    int i;
        for(i = 1; i <= maxValue; i+=2){
            int temp = 1;
            printf("%*s", maxValue - i, "");
                while(temp <= i){
                            printf("%d", temp);
                            temp++;
                    }
                    printf("\n");
                }
            for(i = maxValue - 1; i > 0; i-=2){
                int temp = 1;
                printf("%*s", maxValue - i, "");
                while(temp <= i){
                        printf("%d",temp);
                        temp++;
                }
                printf("\n");
            }
}


