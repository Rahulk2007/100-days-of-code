#include <stdio.h>
#include <string.h>

int main() {
    char date[15], newDate[15];
    char day[3], month[3], year[5];

    printf("Enter date in format dd/04/yyyy: ");
    scanf("%s", date);

    
    sscanf(date, "%2s/%2s/%4s", day, month, year);

    
    if (strcmp(month, "04") == 0)
        sprintf(newDate, "%s-Apr-%s", day, year);
    else
        sprintf(newDate, "%s-%s-%s", day, month, year); 

    printf("Converted date: %s\n", newDate);

    return 0;
}
