#include<stdio.h>

struct complex
{
    int real;
    int img;
};




int main()
{
    struct complex a,b,*ptra,*ptrb;
    ptra=&a;
    ptrb=&b;

    printf("Enter the real part of first number:");
    scanf("%d",&ptra->real);
    printf("Enter the imaginary part of first number:");
    scanf("%d",&ptra->img);

    printf("Enter the real part of second number:");
    scanf("%d",&ptrb->real);
    printf("Enter the imaginary part of second number:");
    scanf("%d",&ptrb->img);

    int real_sum=ptra->real+ptrb->real;
    int img_sum=ptra->img+ptrb->img;

    int real_diff=ptra->real-ptrb->real;
    int img_diff=ptra->img-ptrb->img;

    printf("\n The sum is %d+%di",real_sum,img_sum);
    printf("\n The differnce is %d+%di",real_diff,img_diff);

}