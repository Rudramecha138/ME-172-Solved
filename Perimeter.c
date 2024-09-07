Code For Question No.01:
 #include<stdio.h>
#include<stdlib.h>
//defining PI as a global Variable
#define PI 3.1416
int main()
{
float r,P;
printf("Enter The Radius Of Circle=");
scanf("%f",&r);//Scanning Radius as an input
P=2*r*PI;//Formula for finding Perimeter
printf("\nThe Perimeter Of The Circle Is=%f",P);
return 0;
}


