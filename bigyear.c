
#include <stdio.h>
#define TARGET_AGE 88

int year1, year2;

int calcYear(int year1);

int main(void)
{
    //Ask for birth year
    printf("What year was the subject born?");
    printf("Enter as a 4 digit year: ");
    scanf(" %d", &year1);

    //Calculate
    year2 = calcYear(year1);

    printf("Someone born in %d will be %d in %d.", year1, TARGET_AGE, year2);

    return 0;
}

int calcYear(int year1)
{
    return(year1+TARGET_AGE);
}