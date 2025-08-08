#include <stdio.h>

int main(){
    int seconds;
    int minutes;
    int hours;
    scanf("%i",&seconds);

    minutes = seconds / 60;
    seconds = seconds % 60;
    hours = minutes / 60;
    minutes = minutes % 60;
    printf("%ih %imin %isec",hours,minutes,seconds);
    return 0;
}