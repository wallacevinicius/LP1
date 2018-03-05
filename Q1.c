#include <stdio.h>

int main(){
    double salary;

    //Take away the '\n'
    printf("Type your salary: ");
    scanf("%lf", &salary);

    if(salary >= 420)
        salary -= (salary * 0.08);
    else if(salary > 420 && salary <= 1350)
        salary -= (salary * 0.09);
    else if(salary > 1350)
        salary -= (salary * 0.1);

    printf("\nYour salary with the INSS discount is equal to: %.2lf\n", salary);
}
