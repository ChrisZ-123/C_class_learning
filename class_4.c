//
// Created by 17814 on 2021/2/2.
//

//#include <stdio.h>
//#include <math.h>
//
//int main(void)
//
//{
//    double  first, second;
//    double first_sqrt, second_sqrt;
//    double sum_sqrt;
//
//    printf("enter the first number\n");
//    scanf("%lf", &first);
//    printf("enter the second number\n");
//    scanf("%lf", &second);
//
//    first_sqrt = sqrt(first);
//    second_sqrt = sqrt(second);
//
//    sum_sqrt = first_sqrt + second_sqrt;
//    printf("sum_sqrt = %.2lf", sum_sqrt);
//
//    return 0;
//}
#include <stdio.h>
//
#define PI 3.1415926
#include <math.h>
int main()
{
    double r, d;
    double c, s;

    printf("input the r of the circle:\n");
    scanf("%lf", &r);
    d = r * 2;
    c = PI * 2 * r;
    s = PI * pow(r, 2);

    printf("the d of the circle is %.2lf\n", d);
    printf("the c of the circle is %.2lf\n", c);
    printf("the s of the circle is %.2lf\n", s);

    return 0;

}

//Figure 3.14  Program to Draw a Stick Figure
/* Draws a stick figure */

#include <stdio.h>

/* Function prototypes */
//void draw_circle();	/* Draws a circle	*/
//
//void draw_intersect();	/* Draws intersecting lines	*/
//
//void draw_base();	/* Draws a base line 	*/
//
//void draw_triangle();	/* Draws a triangle	*/
//
//void draw_long_base();
//
//void draw_base_triangle();



//int
//main(void)
//{
//
//    /* Draw a circle. 	*/
//    draw_circle();
//
//    /* Draw a triangle. 	*/
//    draw_triangle();
//
//    draw_triangle();
//
//    draw_base_triangle();
//
//
//    printf("\n");
//
//    return (0);
//}
//
///*
// * Draws a circle
// */
//void
//draw_circle()
//{
//    printf("\t   *   \n");
//    printf("\t *   * \n");
//    printf("\t  * *  \n");
//}
//
///*
// * Draws intersecting lines
// */
//void
//draw_intersect()
//{
//    printf("\t  / \\  \n"); /* Use 2 \'s to print 1 */
//    printf("\t /   \\ \n");
//    printf("\t/     \\\n");
//}
//
///*
// * Draws a base line
// */
//void
//draw_base()
//
//{
//    printf("\t-------\n");
//}
//
///*
// * Draws a triangle
// */
//void
//draw_triangle()
//{
//    draw_intersect();
//    draw_base();
//}
//
//void
//draw_long_base()
//{
//    printf("     ______________\n");
//}
//
//void
//draw_base_triangle()
//{
//    draw_intersect();
//    draw_long_base();
//}

// Figure 3.3  Calculating the Area and the Circumference of a Circle
/*
 * Calculates and displays the area and circumference of a circle
 */

#include <stdio.h>
#include <math.h>
#define PI 3.14159

void print_instruct(void);
double find_area(double radius);
double find_circum(double radius);

int
main(void)
{
    double radius; /* input - radius of a circle	*/
    double area;   /* output - area of a circle 	*/
    double circum; /* output - circumference 	*/

    /* Get the circle radius */
    printf("Enter radius> ");
    scanf("%lf", &radius);

    /* Calculate the area */
    area = find_area(radius);

    /* Calculate the circumference */
    circum = find_circum(radius);

    /* Display the area and circumference */
    printf("The area is %.4f\n", area);
    printf("The circumference is %.4f\n", circum);

    return (0);
}
void print_instruct(void)
{
    printf("This program computes the area and circumference of a circle.\n");
    printf("Enter the radius of the circle: ");
}

double find_area(double radius)
{
    return(PI * radius * radius);
}

double find_circum(double radius)
{
    return(2.0 * PI * radius);
}


/* Enter radius> 5.0
The area is 78.5397
The circumference is 31.4159 */