//WAP to find the area of the circle. Take radius of circle from user as input and print the
//result in below given format
#include<stdio.h>
int main()
{
    int R;
    int pi=1.414;
    printf("Enter the radius of a circle:\n");
    scanf("%d",&R);
    float A=pi*R*R;
    printf("Area of a circle is %f",A);
    return 0;
}
