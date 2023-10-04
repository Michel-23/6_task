#include <stdio.h>
#include <math.h>

int main (void)
{
    int x1, y1, x2, y2, x3, y3;
    float P, S;
    float a, b,c;
    printf("Enter the coordinates of the triangle");
    printf("\nx1=");
    scanf("%d", &x1);
    printf("y1=");
    scanf("%d", &y1);
    printf("x2=");
    scanf("%d", &x2);
    printf("y2=");
    scanf("%d", &y2);
    printf("x3=");
    scanf("%d", &x3);
    printf("y3=");
    scanf("%d", &y3);
    a=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    b=sqrt(pow((x3-x2),2) + pow((y3-y2),2));
    c=sqrt(pow((x3-x1),2) + pow((y3-y1),2));
    printf("P=%lf\n", a+b+c);
    P=a+b+c;
    S=sqrt((P/2)*((P/2)-a)*((P/2)-b)*((P/2)-c));
    printf("S=%lf", S);
    return 0;
}