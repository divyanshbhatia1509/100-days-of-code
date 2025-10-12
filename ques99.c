// Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>
#include <string.h>

int main() {
    char date[20];
    char day[3], month[3], year[5];
    char monthName[4];

    printf("Enter date in format dd/mm/yyyy: ");
    scanf("%s", date);

    strncpy(day, date, 2);
    day[2] = '\0';
    strncpy(month, date + 3, 2);
    month[2] = '\0';
    strncpy(year, date + 6, 4);
    year[4] = '\0';

    if (strcmp(month, "04") == 0)
        strcpy(monthName, "Apr");
    else
        strcpy(monthName, "???"); 

    printf("Formatted date: %s-%s-%s\n", day, monthName, year);

    return 0;
}
