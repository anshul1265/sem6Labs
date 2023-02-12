/* First come first serve 1*/
#include<stdio.h>
int main()
{
    int b[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &b[i]);
    }
    int avg_tat = 0, avg_burst = 0;
    double avg_burst_final = 0;
    for (int i = 0; i < 5; i++)
    {
        avg_tat += b[i];
        avg_burst_final += avg_tat;
    }
    printf("The final average turn-around time is %.2f\n", avg_burst_final / 5);
    return 0;
}