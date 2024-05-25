#include<stdio.h>
void main()
{
    float a[3];
    printf("enter your 1st item : \n");
    scanf("%f",&a[0]);
    printf("enter your 2nd item : \n");
    scanf("%f",&a[1]);
    printf("enter your 3rd item : \n");
    scanf("%f",&a[2]);

    printf("price of 1st item after gst: %f \n",a[0]+(0.18*a[0]));
    printf("price of 2nd item after gst: %f \n",a[1]+(0.18*a[1]));
    printf("price of 3rd item after gst: %f \n",a[2]+(0.18*a[2]));
    
}