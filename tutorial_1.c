//
// Created by 17814 on 2021/1/28.
//

#include <stdio.h>
#define KMS_PER_MILE 1.609 //将公里转换成英里

int main()
//{
//    double miles;
//    double kms;
//
//    scanf("%lf",&miles);
//    printf("the distance in mile is %.2lf\n",miles);
//
//    kms = KMS_PER_MILE * miles;
//
//    printf("that equals to %.2lfkms\n",kms);
//
//    return 0;
//}

{
    int i, j;
    int k;
    printf("input value of i\n");
    scanf("%d",&i);
    printf("i = %d\n",i);

    j = 5;
    k = i+j;
    j = j+i;
    k = i+j;
    k = i*k;
    k = k/j;
    k = k/5;

    printf("i=%d, j=%d, k=%d",i,j,k);
    return 0;


}

