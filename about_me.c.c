#include <stdio.h>
#include <string.h>
#define MAX_LEN 100
int main() { 
char name[MAX_LEN];
char course[MAX_LEN];
char hobby[MAX_LEN];
char reason[MAX_LEN];
char expectation[MAX_LEN];
char definition[MAX_LEN];
printf("=====================\n");
printf("WELCOME TO YOUR FIRST C PROGRAM!\n");
printf("=====================\n\n");
printf("1.What is your name?");
fgets(name,MAX_LEN,stdin);
name[strcspn(name,"\n")]='\0';
printf("2.What course are you taking?(BBIT,BSC)");
    fgets(course,MAX_LEN,stdin);
    course[strcspn(course,"\n")]='\0';
printf("3.What is your hobby?");
    fgets(hobby,MAX_LEN,stdin);
    hobby[strcspn(hobby,"\n")]='\0';
    printf("4.Why did you choose this course?");
    fgets(reason,MAX_LEN,stdin);
    reason[strcspn(reason,"\n")]='\0';
    printf("5.What do you expect to learn from this course?");
    fgets(expectation,MAX_LEN,stdin);
    expectation[strcspn(expectation,"\n")]='\0';
    printf("6.What is the definition of your course?");
    fgets(definition,MAX_LEN,stdin);
    definition[strcspn(definition,"\n")]='\0';
    printf("\n=====================\n");
    printf("Your Name: %s\n",name);
    printf("Your Course: %s\n",course);
    printf("Your Hobby: %s\n",hobby);
    printf("Reason for Choosing Course: %s\n",reason);
    printf("Expectation from Course: %s\n",expectation);
    printf("Programming is: %s\n", definition);
    return 0; 

}

