#include <stdio.h>

void calculateAge(int Age);

int main(){

    int Age;

    printf("Enter your Age: ");
    scanf("%d", &Age);

    calculateAge(Age);

    return 0;
}

void calculateAge(int Age){
    if(Age >= 18){
        printf("You are eligible to vote. \n");
    }else {
        printf("You are not eligible to vote. \n");
    }
}