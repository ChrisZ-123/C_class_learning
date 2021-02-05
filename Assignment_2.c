//
// Created by 张行健Chris Zhang DC027486
//
#include <stdio.h>
#define normal_hour_payroll 100
//定义两个副函数
double normal_payroll(double normal_hours);
double overtime_payroll(double overtime_hours);

//计算正常工资
double normal_payroll(double normal_hours)
{
    double total;
    total = normal_hours * normal_hour_payroll;
    return total;
}

//计算加班工资
double overtime_payroll(double overtime_hours)
{
    double total;
    total = overtime_hours * normal_hour_payroll * 1.5;
    return total;
}

//主函数
int main(void)
{
    double normal_hours, overtime_hours;
    double total_payroll, normal_payment, overtime_payment;
    //输入正常工时和加班工时
    printf("Please input your normal work hours\n");
    scanf("%lf", &normal_hours);
    printf("Please input your overtime work hours\n");
    scanf("%lf", &overtime_hours);

    //调用函数 计算工资
    normal_payment = normal_payroll(normal_hours);
    overtime_payment = overtime_payroll(overtime_hours);
    total_payroll = normal_payment + overtime_payment;
    //打印出总工资
    printf("Your total payroll is %.2lf", total_payroll);

    return 0;
}