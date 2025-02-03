#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,d;
    printf("Enter the coefficients a,b,c :");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b - 4* a * c;
    if (d == 0){
        printf("the given quadratic equation has equaal roots\n");
        printf("both roots is %f", (-b / (2 *a))); 
    }else if (d>0){
        printf("the given quadratic equattions has two roots\n");
        printf("1st root is %f\n", (-b + sqrt (d))/ 2 *a);
        printf("2nd root is %f\n", (-b -sqrt (d))/ 2 *a);
    }else {
        printf ("the given quadratic equation has imaginary roots");
    }
    return 0;
    
}