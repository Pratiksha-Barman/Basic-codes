#include<stdio.h>
void main()
{
printf("Hello World");
}



//Initialize two numbers and compute their sum.

#include<stdio.h>
void main()
{
int N1=10,N2=20,sum;
sum=N1+N2;
printf("The sum of the two numbers are %d",sum);
}



//Read two numbers and compute their sum and print it.

#include<stdio.h>
void main()
{
int n1,n2,sum;
printf("Enter the two numbers\n");
scanf("%d %d",&n1,&n2);
sum=n1+n2;
printf("The sum of the two numbers is %d",sum);
}


//Read length and breadth of a rectangle and compute the area.

#include<stdio.h>
void main()
{
float l,b,area;
printf("Enter the length and breadth of the rectangle\n");
scanf("%f %f",&l,&b);
area=l*b;
printf(" The area of the given rectangle is %f",area);
}




//Read the radius of the circle and compute the area of the circle.

#include<stdio.h>
#define pi 3.14
void main()
{
float r,area;
printf("Enter the radius of the circle\n");
scanf("%f",&r);
area=pi*r*r;
printf("Area of the circle is %f", area);
}
