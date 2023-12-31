//structs are like classes, but no methods, OOP
#include <stdio.h>
#include <string.h>

//typedef gives a "nickname" to a datatype
typedef struct{
    char name[12];
    float gpa;

} Student;

int main(){

    Student student1 = {"Spongebob", 3.0};
    Student student2 = {"Patrick", 1.0};
    Student student3 = {"Sandy", 4.0};
    Student student4 = {"Squidward", 3.2};

    Student students[] = {student1, student2, student3, student4};

    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++){
        printf("%-12s\t", students[i].name);
        printf("%.2f\n", students[i].gpa);
    }

    return 0;
}