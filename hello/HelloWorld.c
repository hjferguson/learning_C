#include <stdio.h>
#include <stdbool.h> //needed to use booleans

int main(){
    //comments are set like this

    /*muliline comments use 
    this
    */
    // int x;
    // x = 123;
    // int y = 321;

    // int age = 21;
    // float gpa = 2.05;
    // char grade = 'C';
    // char name[] = "bro"; //array of char
    
    // printf("Hello %s\n", name); // %s for string
    // printf("You are %d years old\n", age); // %d for decimal
    // printf("Your average grade is %c\n", grade); // %c for char
    // printf("Your GPA is %0.2f\n", gpa); // %f for float. 0.2 specifies 2 decimal points

    
    // char a = 'C';
    // char b[] = "Bruh";

    // float c = 3.141592;
    
    // bool e = true; // true = 1, false = 0. use %d to display in a print

    // char xx = 120; //char can store the ascii value. can print the digit with %d or the ascii value with %c
    // unsigned char g = 254; //unsigned u can store 0-255

    // long long int l = 9223343243234324; //-9 quintillion to +9 quintillion %lld

    // int age;

    // printf("\nEnter your age: ");
    // scanf("%d", &age);

    // if(age >= 18){
    //     printf("You are now signed up!");
    // }
    // else if(age < 0){
    //     printf("You haven't been born yet!");

    // }else{
    //     printf("You are too young to sign up!");
    // }

    //switch case
    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);
    
    switch(grade){
        case 'A':
            printf("perfect!\n");
            break;
        case 'B':
            printf("you dun good\n");
            break;
        case 'C':
            printf("better luck next time\n");
            break;
        case 'D':
            printf("atleast it's not an F\n");
            break;
        case 'F':
            printf("F in the chat\n");
            break;
        default:
            printf("please enter only valid letter grades");
    }


    return 0;

}