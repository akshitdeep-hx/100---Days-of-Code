#include<stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;
    printf("Enter total seconds:");
    scanf("%d", &totalSeconds);

    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    printf("Time : %d:%d:%d\n", hours, minutes, seconds);


}