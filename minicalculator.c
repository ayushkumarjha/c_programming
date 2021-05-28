#include <stdio.h>
#include<conio.h>
int main() {
    char operator;
    double first, second;
    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);
    printf("Please enter the first operands: ");
    scanf("%lf", &first);
    printf("Please enter the second operands:");
    scanf("%lf",&second);
    switch (operator) {
    case '+':
        printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }
	printf("\nThank you!\nIf u got your result please press enter & u may exit..");	
    getch();
    return 0;
}
