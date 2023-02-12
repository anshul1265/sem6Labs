/* Shortest Job First non-Preemptive 2*/
#include<stdio.h>
int main()
{
    int d[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &d[i]);
    // sorting here
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (d[i] > d[j])
            {
                int tmp = d[i];
                d[i] = d[j];
                d[j] = tmp;
            }
        }
    }
    int avg_tat = 0, avg_burst = 0;
    double avg_burst_final = 0;
    for (int i = 0; i < 5; i++)
    {
        avg_tat += d[i];
        avg_burst_final += avg_tat;
    }
    printf("The final average turn-around time is %.2f\n", avg_burst_final / 5);
    return 0;
}