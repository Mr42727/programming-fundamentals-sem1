#include<stdio.h>

int main(){
    int total_days, year, month, days;
    printf("Enter the number of days: ");
    scanf("%d", &total_days);
    year = total_days / 365;
    month = (total_days % 365) / 30;
    days = (total_days % 365) % 30;
    printf("Year: %d\nMonth: %d\nDays: %d\n", year, month, days);
    return 0;
}
