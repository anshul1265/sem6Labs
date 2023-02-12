/* Round Robin */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i, n, sum = 0, count = 0, y, quantum, wt = 0, tat = 0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    y = 5;
    printf("Enter the burst times : ");
    for (i = 0; i < 5; i++)
    {
        at[i] = 0;
        scanf("%d", &bt[i]);
        temp[i] = bt[i];
    }
    // Accept the Time quantum from the inp1.txt file at the end
    printf("\nEnter the time quantum : ");
    scanf("%d", &quantum);
    for (sum = 0, i = 0; y != 0;)
    {
        if (temp[i] <= quantum && temp[i] > 0) // define the conditions
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - quantum;
            sum = sum + quantum;
        }
        if (temp[i] == 0 && count == 1)
        {
            y--;
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == 5 - 1)
        {
            i = 0;
        }
        else if (at[i + 1] <= sum)
        {
            i++;
        }
        else
        {
            i = 0;
        }
    }
    avg_wt = wt * 1.0 / 5;
    avg_tat = tat * 1.0 / 5;
    printf("Average Turn Around Time : %.2f\n", avg_tat);
    printf("Average Waiting Time : %.2f", avg_wt);
    return 0;
}