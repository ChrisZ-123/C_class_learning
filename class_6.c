////#include <stdio.h>
////
////int main()
////{
////    int year;
////    printf("please input the year:\n");
////    scanf("%d",&year);
////
////    if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0))
////    {printf("%d is a leap year.\n",year);}
////    else
////    {printf("%d is not a leap year.\n",year);}
////
////    return 0;
////}
////Figure 4.7  Program for Water-Bill Problem
///*
// * Computes and prints a water bill given an unpaid balance and previous and
// * current meter readings. Bill includes a demand charge of $35.00, a use
// * charge of $1.10 per thousand gallons, and a surcharge of $2.00 if there is
// * an unpaid balance.
// */
//
//#include <stdio.h>
//
//#define DEMAND_CHG  35.00  /* basic water demand charge	*/
//#define PER_1000_CHG 1.10  /* charge per thousand gallons used	*/
//#define LATE_CHG     2.00  /* surcharge assessed on unpaid balance	*/
//
///* Function prototypes	*/
//void instruct_water(void);
//
//double comp_use_charge(int previous, int current);
//
//double comp_late_charge(double unpaid);
//
//void display_bill(double late_charge, double bill, double unpaid);
//
//int
//main(void)
//{
//    int    previous;    /* input - meter reading from previous quarter
//                          in thousands of gallons	*/
//    int    current;     /* input - meter reading from current quarter	*/
//    double unpaid;      /* input - unpaid balance of previous bill	*/
//    double bill;        /* output - water bill	*/
//    int    used;        /* thousands of gallons used this quarter 	*/
//    double use_charge;  /* charge for actual water use 	*/
//    double late_charge; /* charge for non-payment of part of previous
//                          balance	*/
//
//    /* Display user instructions. 	*/
//    instruct_water();
//
//    /* Get data: unpaid balance, previous and current meter
//       readings.	*/
//    printf("Enter unpaid balance> $");
//    scanf("%lf", &unpaid);
//    printf("Enter previous meter reading> ");
//    scanf("%d", &previous);
//    printf("Enter current meter reading> ");
//    scanf("%d", &current);
//
//    /* Compute use charge. 	*/
//    use_charge = comp_use_charge(previous, current);
//
//    /* Determine applicable late charge 	*/
//    late_charge = comp_late_charge(unpaid);
//
//    /* Figure bill. 	*/
//    bill = DEMAND_CHG + use_charge + unpaid + late_charge;
//
//    /* Print bill. 	*/
//    display_bill(late_charge, bill, unpaid);
//    return (0);
//}
//
//
///*
// * Displays user instructions
// */
//void
//instruct_water(void)
//{
//    printf("This program figures a water bill ");
//    printf("based on the demand charge\n");
//    printf("($%.2f) and a $%.2f per 1000 ", DEMAND_CHG, PER_1000_CHG);
//    printf("gallons use charge.\n\n");
//    printf("A $%.2f surcharge is added to ", LATE_CHG);
//    printf("accounts with an unpaid balance.\n");
//    printf("\nEnter unpaid balance, previous ");
//    printf("and current meter readings\n");
//    printf("on separate lines after the prompts.\n");
//    printf("Press <return> or <enter> after ");
//    printf("typing each number.\n\n");
//}
//
///*
// * Computes use charge
// * Pre: previous and current are defined.
// */
//double
//comp_use_charge(int previous, int current)
//{
//    int used;  /* gallons of water used (in thousands)	*/
//    double use_charge;  /* charge for actual water use 	*/
//
//    used = current - previous;
//    use_charge = used * PER_1000_CHG;
//
//    return (use_charge);
//}
//
//
///*
// * Computes late charge.
// * Pre : unpaid is defined.
// */
//double
//comp_late_charge(double unpaid)
//{
//    double late_charge; /* charge for non-payment of part of previous balance	*/
//
//    if (unpaid > 0)
//        late_charge = LATE_CHG; /* Assess late charge on unpaid balance.	*/
//    else
//        late_charge = 0.0;
//
//    return (late_charge);
//}
//
///*
// * Displays late charge if any and bill.
// * Pre : late_charge, bill, and unpaid are defined.
// */
//void
//display_bill(double late_charge, double bill, double unpaid)
//{
//    if (late_charge > 0.0) {
//        printf("\nBill includes $%.2f late charge", late_charge);
//        printf(" on unpaid balance of $%.2f\n", unpaid);
//    }
//    printf("\nTotal due = $%.2f\n", bill);
//}

//#include <stdio.h>
//int leap(int year);
//
//int leap(int year)
//{
//    if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0)
//    {
//        printf("%d is a leap year.\n",year);
//    }
//    else
//    {
//        printf("%d is not a leap year.\n",year);
//    }
//}
//
//int main()
//{
//    int y;
//    printf("please input the year.\n");
//    scanf("%d",&y);
//    leap(y);
//    return 0;
//}

#include <stdio.h>
#define per_1000_galons 1.10
#define basic_demand 35.00

void instruction();
double compute_used_charge(int previous, int current);
double late_charge(double unpaid);

int main(void) {
    int previous, current;
    double unpaid;
    double used_charge, unpaid_charge, total_bill;

    instruction();

    printf("please enter the previous water reading:\n");
    scanf("%d", &previous);
    printf("please enter the current water reading:\n");
    scanf("%d", &current);
    printf("please enter the unpaid value:\n");
    scanf("%lf", &unpaid);

    used_charge = compute_used_charge(previous, current);
    unpaid_charge = late_charge(unpaid);
    total_bill = used_charge + unpaid_charge + basic_demand;

    printf("the total bill is $%lf", total_bill);

    return 0;
}


void instruction()
{
    printf("Computes and prints a water bill given an unpaid balance\ "
           "and previous and current meter readings. Bill includes a demand charge of $35.00, a use charge\ "
           "of $1.10 per thousand gallons, and a surcharge of $2.00 if there is an unpaid balance.");
}

double compute_used_charge(int previous, int current)
{
    int used;
    double used_charge;

    used = current - previous;
    used_charge = used * per_1000_galons;
    return used_charge;
}

double late_charge(double unpaid)
{
    double unpaid_charge;
    if (unpaid >0){
        unpaid_charge = 2.00;
    } else{
        unpaid_charge = 0.00;
    }
    return unpaid_charge;
}