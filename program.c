#include<stdio.h>
#include<math.h> //for function
void func(int a, int b, float *sum, float *avg, float *multi);

//main function
void main()
{
    int a,b;
    float sum, avg, multi;

    printf("Enter 1st number: ");
    scanf("%d", &a);
    printf("Enter 2nd number: ");
    scanf("%d", &b);


    func(a,b,&sum,&avg,&multi);

    printf("The Sum: %f\n", sum);
    printf("The Average: %f\n", avg);
    printf("The Multiplication: %f", multi);

}

//func function
void func(int a, int b, float *sum, float *avg, float *multi)
{
    *sum = a+b;
    *avg = *sum/5.0;
    *multi = a*b;


}
