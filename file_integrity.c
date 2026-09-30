#include <stdio.h>

unsigned long calculate_hash(FILE *file)
{
    unsigned long hash = 5381;
    int character;

    while ((character = fgetc(file)) != EOF)
    {
        hash = ((hash << 5) + hash) + character;
    }

    return hash;
}

int main(void)
{
    FILE *file;
    FILE *baseline;
    unsigned long current_hash;
    unsigned long saved_hash;

    printf("====================================\n");
    printf("     SENTINEL FILE INTEGRITY CHECKER\n");
    printf("====================================\n");

    file = fopen("important.txt", "rb");

    if (file == NULL)
    {
        printf("Error: Could not open important.txt\n");
        return 1;
    }

    current_hash = calculate_hash(file);
    fclose(file);

    baseline = fopen("baseline.txt", "r");

    if (baseline == NULL)
    {
        baseline = fopen("baseline.txt", "w");

        if (baseline == NULL)
        {
            printf("Error: Could not create baseline.\n");
            return 1;
        }

        fprintf(baseline, "%lu", current_hash);
        fclose(baseline);

        printf("\nBaseline created successfully!\n");
        printf("Run the program again to check for changes.\n");

        return 0;
    }

    fscanf(baseline, "%lu", &saved_hash);
    fclose(baseline);

    printf("\nOriginal hash: %lu\n", saved_hash);
    printf("Current hash:  %lu\n", current_hash);

    if (current_hash == saved_hash)
    {
        printf("\nSTATUS: File is unchanged.\n");
    }
    else
    {
        printf("\nALERT: File modification detected!\n");
    }

    printf("\nIntegrity check completed.\n");

    return 0;
}