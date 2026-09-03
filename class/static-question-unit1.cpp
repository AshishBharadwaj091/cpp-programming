#include <stdio.h>

// Bubble Sort function
void bubbleSort(int marks[], int n)
{
    int i, j, temp;

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (marks[j] > marks[j + 1])
            {
                temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int marks[100], n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Add marks to array
    printf("Enter marks of %d students:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    // Sort using Bubble Sort
    bubbleSort(marks, n);

    // Display sorted marks
    printf("\nMarks after sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", marks[i]);
    }

    return 0;
}