#include <stdio.h>
int main (void)
{
    int runningTime;
    printf("Movie running time:");
    scanf("%d", &runningTime);
    int startHour;
    int startMin;
    printf("Start time:");
    scanf("%d:%d",&startHour, &startMin);

    int hours = runningTime / 60;
    int minutes = runningTime % 60;

    int endHour = startHour + hours;
    int endMin = startMin + minutes;

    if(endMin >= 60){
        endHour = endHour + (endMin / 60); //Update value of endHour variable
        endMin = endMin % 60;//Update value of endMin variable
        //If someone runs a 1,000 min movie we already fix the problem and will give you a right answear
    }

    printf("The movie will last %d hr and %d min\n", hours, minutes);
    printf("End time: %d:%02d\n", endHour, endMin);
}
