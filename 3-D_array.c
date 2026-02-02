/*
Problem - 3-D array
Summary - Taking the input for a 3-D array and then printing the array back
*/

#include <stdio.h>

int main()
{
    int blocks, row, cols;
    printf("Enter the number of schools : ");
    scanf("%d", &blocks);
    printf("Enter the number of classrooms : ");
    scanf("%d", &row);
    printf("Enter the number of students : ");
    scanf("%d", &cols);

    int a[blocks][row][cols];

    for (int i = 0; i < blocks; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                printf("Enter the marks of student %d of classroom %d from school %d : ", k + 1, j + 1, i + 1);
                scanf("%d", &a[i][j][k]);
                printf("\n");
            }
        }
    }
    printf("The marks of the students are : \n");

    for (int i = 0; i < blocks; i++)
    {
        for (int j = 0; j < row; j++)
        {
            for (int k = 0; k < cols; k++)
            {
                printf("Student %d of classroom %d from school %d : %d\n", k + 1, j + 1, i + 1, a[i][j][k]);
            }
        }
    }

    return 0;
}