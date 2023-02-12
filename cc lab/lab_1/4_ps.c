/* Priority Scheduling */
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int burst_time[5];
    printf("Enter the burst time : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &burst_time[i]);
    }
    int d[5];
    int priority[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &priority[i]);
    }
    int avg_tat = 0, avg_burst = 0;
    double avg_tat_final = 0, avg_wt_final;
    for (int i = 0; i < 5; i++)
    {
        d[i] = burst_time[i];
    }
    int z = 0;
    for (int j = 0; j < 5; j++)
    {
        int max = 0;
        for (int i = 0; i < 5; i++)
        {
            if (priority[i] > max)
                max = priority[i];
        }
        for (int i = 0; i < 5; i++)
        {
            if (priority[i] == max)
            {
                burst_time[z++] = d[i];
                priority[i] = -1;
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        avg_wt_final += burst_time[i];
        avg_tat += burst_time[i];
        avg_tat_final += avg_tat;
    }
    printf("The final average waiting time is %.2f\n", (avg_tat_final - avg_wt_final) / 5);
    printf("The final average turn-around time is %.2f\n", avg_tat_final / 5);
    return 0;
}