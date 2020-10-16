#include <stdio.h>

int main(void)
{
    double *dollars = 0;
    
    printf("How many USD shall I convert for you? ");
    scanf("%lf", &dollars);

    return 0;
}

double convert(double *dollars)
{
    double euro, dkk, yen, rubler, *dollars;
    double dollars_per_euro = 0.89;
    double dollars_per_dkk = 6.66;
    double dollars_per_yen = 119.9;
    double dollars_per_rubler = 66.43;


    euro = *dollars * dollars_per_euro;
    dkk = *dollars * dollars_per_dkk;
    yen = *dollars * dollars_per_yen;
    rubler = *dollars * dollars_per_rubler;

}