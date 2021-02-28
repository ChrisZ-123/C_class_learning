//
// Created by 17814 on 2021/2/25.
//

//#include <stdio.h>
//
//int main(void) {
//    int score;
//    printf("enter your score:\n");
//    scanf("%d", &score);
//
//    if (score <= 100 && score >= 90){
//        printf("A.\n");
//    }
//    if (score <= 89 && score >= 80){
//        printf("B.\n");
//    }
//    if (score <= 79 && score >= 70){
//        printf("C.\n");
//    }
//    if (score <= 69 && score >= 60){
//        printf("D.\n");
//    }
//    if (score < 60){
//        printf("E.\n");
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdbool.h>
int main(void) {
    int score;
    printf("enter your score:\n");
    scanf("%d", &score);
    switch (score) {
        case 90 ... 100:
            printf("A.\n"); break;
        case 80 ... 89:
            printf("B.\n"); break;
        case 70 ... 79:
            printf("C.\n"); break;
    }


    return 0;
}