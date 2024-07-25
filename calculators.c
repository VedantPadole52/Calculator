#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf,%lf", &num1, &num2);

    switch(operator) {
        case '+':
            result=num1 + num2;
            printf("Result is %.2lf",result);
            break;
        case '-':
            result=num1 - num2;
            printf("Result is %.2lf", result);
            break;
        case '*':
            result= num1*num2;
            printf("Result is %.2lf", result);
            break;
        case '/':
            if (num2 != 0){
                result=num1/num2;
                printf("Result is %.2lf",result);
            }
            else{
                printf("Error: Division by zero\n");
            
            }
            break;
        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}
