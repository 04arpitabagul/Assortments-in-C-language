//Q.4 Sum of Elements in Row & Column of 2D Array
//Develop a Program to print and find the sum of all elements of a given row & column from a 2D
//array.
//Example:
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 7
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 9
//a[2][2] = 6
//Output:
//Enter row number: 0
//Elements of row 0: 2, 7, 1
//The sum of a row 0: 10
//Enter column number: 2
//Elements of column 2: 1, 4, 6
//The sum of column 2: 11


#include<stdio.h>
#include<conio.h>
int main() {
    int row, col, i, j;
    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    int arr[row][col];
    printf("Enter array's elements: ");
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int row_num, col_num;
    printf("Enter row number: ");
    scanf("%d", &row_num);
    printf("Elements of row %d: ", row_num);
    int row_sum = 0;
    for(j=0; j<col; j++) {
        printf("%d, ", arr[row_num][j]);
        row_sum += arr[row_num][j];
    }
    printf("\nThe sum of row %d: %d\n", row_num, row_sum);
    printf("Enter column number: ");
    scanf("%d", &col_num);
    printf("Elements of column %d: ", col_num);
    int col_sum = 0;
    for(i=0; i<row; i++) {
        printf("%d, ", arr[i][col_num]);
        col_sum += arr[i][col_num];
    }
    printf("\nThe sum of column %d: %d\n", col_num, col_sum);
    return 0;
}

