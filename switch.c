#include <stdio.h>
int main(){

    double num1,num2;
    char operator;

    printf("This Calculator takes the input of two values and an operator to operate\n");
    printf("choose the operator ['+','-','/','*']: ");
    scanf("%c",&operator);
    printf("enter the first number here: ");
    scanf("%lf",&num1);

    printf("enter the second number here: ");
    scanf("%lf",&num2);


    double result;

    switch(operator){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        default:
        printf("Please follow the instructions");
    }
    printf("this is your result: %lf\n",result);

    return 0;
}