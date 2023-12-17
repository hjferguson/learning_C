#include <stdio.h>
#include <string.h> //string functions

int main(){

    char name[25]; //bytes
    int age;

    printf("What is your name?\n");
    //scanf("%s", &name); //reads up to a whitespace
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'; //remove newline from end of string

    printf("How old are you?\n");
    scanf("%d", &age);


    printf("Hello, %s. You are %d years old.", name, age);

    return 0;
}