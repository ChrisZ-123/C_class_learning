//Created by Zhang Xingjian DC027486
//
#include <stdio.h>
#include <malloc.h>

char* grade(int a);

int main(void){
    int score;
    char* grades;
    printf("Enter your exam mark (0..100):");
    scanf("%d", &score);

    grades = (char*)malloc(sizeof(grades));
    grades = grade(score);
    printf("Your grade is %s", grades);
    free(grades);
    return 0;
}

char* grade(int a){
    char* grades;
    grades = (char*)malloc(sizeof(grades));
    switch(a){
        case 93 ... 100:
            grades = "A"; break;
        case 88 ... 92:
            grades = "A-"; break;
        case 83 ... 87:
            grades = "B+"; break;
        case 78 ... 82:
            grades = "B"; break;
        case 73 ... 77:
            grades = "B-"; break;
        case 68 ... 72:
            grades = "C+"; break;
        case 63 ... 67:
            grades = "C"; break;
        case 58 ... 62:
            grades = "C-"; break;
        case 53 ... 57:
            grades = "D"; break;
        case 50 ... 52:
            grades = "D-"; break;
        case 0 ... 49:
            grades = "F"; break;
        default: grades = "Invalid grade!";

    }
    return grades;
}