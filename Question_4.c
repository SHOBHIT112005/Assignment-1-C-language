#include<stdio.h>
int main()
{
   int Radius;
   double pi = 3.14;
   printf("Enter the radius of the circle");
   scanf("%d",&Radius);
   double Area = pi*Radius*Radius;
   printf("Area of circle is %f of radius %d ",Area, Radius);//%f is for decimal values?
   return 0;
}