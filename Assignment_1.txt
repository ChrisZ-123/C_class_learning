//
// Created by Chris Zhang(张行健)_DC027486
//

#include <stdio.h>
#define Exchange_Rate 0.1449 //一元人民币等于多少美元

int main()
{
    //设各种所需变量
    int yuan_1, yuan_5, yuan_10, yuan_20, yuan_50, yuan_100;
    double us_dollars, total_rmb;

    //分别输入 不同数量不同面值的人民币
    printf("please input the number of 1_yuan in RMB\n");
    scanf("%d",&yuan_1);
    printf("please input the number of 5_yuan in RMB\n");
    scanf("%d",&yuan_5);
    printf("please input the number of 10_yuan in RMB\n");
    scanf("%d",&yuan_10);
    printf("please input the number of 20_yuan in RMB\n");
    scanf("%d",&yuan_20);
    printf("please input the number of 50_yuan in RMB\n");
    scanf("%d",&yuan_50);
    printf("please input the number of 100_yuan in RMB\n");
    scanf("%d",&yuan_100);

    //计算输入人民币的总面值
    total_rmb = yuan_1*1 + yuan_5*5 + yuan_10*10 + yuan_20*20 + yuan_50*50 + yuan_100*100;
    printf("the total money in RMB are %.2lf\n",total_rmb);

    //换算成美元
    us_dollars = total_rmb * Exchange_Rate;

    //印出结果
    printf("the total money in USD are %.2lf",us_dollars);
    return 0;
}
