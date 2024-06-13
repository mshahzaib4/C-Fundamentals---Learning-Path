/*21. The length & breadth of a rectangle and radius of a circle are input through
the keyboard. Write C++ code to calculate the area & perimeter of the
rectangle, and the area & circumference of the circle.*/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>
 main()
{  float radius,length,breadth,circumference,Area,peri;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the breadth of rectangle: ");
    scanf("%f", &breadth);
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    Area=length*breadth;
    printf("\n\nThe area of the rectangle :%f\n",Area);
    peri=2*(length+breadth);
    printf("The perimeter of the rectangle :%f\n\n",peri);
    float Area_circle=3.14*pow(radius,2);
    printf("The area of the circle :%f\n",Area_circle);
    circumference=(2*3.14)*radius;
    printf("The circumference of the circle :%f\n",circumference);
}
