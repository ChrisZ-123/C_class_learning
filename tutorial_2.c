////
//// Created by 17814 on 2021/2/4.
////
//
//#include <stdio.h>
//int main(void) {
//    char a, b, c;
//    int year, day, hour, minutes, second;
//    double total_hour;
//
//    printf("please input three letters to be on behalf of you:\n");
//    scanf("%c%c%c", &a, &b, &c);
//    printf("hello, %c%c%c, let us do a little calculation.\n", a, b, c);
//
//    printf("input day and hour and minutes\n");
//    scanf("%d\n%d\n%d", &day, &hour, &minutes);
//
//    printf("you have input day:%d, hour:%d, minute:%d\n", day, hour, minutes);
//
//    total_hour = hour + (minutes / 60);
//
//    year = (day + (total_hour / 24))/ 365;
//    printf("it equals to %d years.\n", year);
//
//    second = day * 24 * 60 * 60 + hour * 60 * 60 + minutes * 60;
//    printf("it equals to %d seconds.", second);
//
//    return 0;
//
//}