#include <stdio.h>

int main()
{
    int days, hours, minutes, second;

    printf("Enter hours: ");
    scanf("%d", &hours);

    days = 365;
    hours = 24*days;
    minutes = 60*hours;
    second = minutes*60;

    /* Print all resultant values */
    printf("Hours: %d\n", hours);
    printf("Minutes: %d\n", minutes);
    printf("Second: %d", second);

    return 0;
}
