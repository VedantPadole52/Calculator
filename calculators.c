#include <stdio.h>

int main() {
    char operator;
    int num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%d,%d", &num1, &num2);

    switch(operator) {
        case '+':
            result=num1 + num2;
            printf("Result is %d",result);
            break;
        case '-':
            result=num1 - num2;
            printf("Result is %d", result);
            break;
        case '*':
            result= num1*num2;
            printf("Result is %d", result);
            break;
        case '/':
            if (num2 != 0){
                result=num1/num2;
                printf("Result is %d",result);
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
