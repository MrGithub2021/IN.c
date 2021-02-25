#include <stdio.h>
#include <string.h>
int main() {
        char c[];
        int a;
        char y[];
        printf("Enter your name: ");
        scanf("%c", &c);
        printf("Hello, %c!", &c");
        printf("How old are you?");
        scanf("%d", &a);
        printf("Oh, so you are %d?", &a);
        printf("Extra question.........");
        printf("Is this program good or bad?");
        scanf("%c", &y);
        if(y == "Good!"){
           printf("Thank you!");
       } 
       else {
        printf(":(");
       } 
        return 0;
}