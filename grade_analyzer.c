#include <stdio.h>

#define STUDENTS 5

float calculate_average(int scores[], int size)
{
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }

    return (float) total / size;
}

int main(void)
{
    int scores[STUDENTS];

    printf("=================================\n");
    printf("   SENTINEL GRADE ANALYZER       \n");
    printf("=================================\n");

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    printf("\nStudent Results:\n");

    for (int i = 0; i < STUDENTS; i++)
    {
        printf("Student %d: %d - ", i + 1, scores[i]);

        if (scores[i] >= 70)
        {
            printf("A\n");
        }
        else if (scores[i] >= 60)
        {
            printf("B\n");
        }
        else if (scores[i] >= 50)
        {
            printf("C\n");
        }
        else if (scores[i] >= 45)
        {
            printf("D\n");
        }
        else if (scores[i] >= 40)
        {
            printf("E\n");
        }
        else
        {
            printf("F\n");
        }
    }

    float average = calculate_average(scores, STUDENTS);

    printf("\nClass Average: %.2f\n", average);

    printf("\nThank you for using Sentinel Grade Analyzer!\n");

    return 0;
}