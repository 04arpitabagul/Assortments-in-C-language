//Q.3 Transpose of 2D Array
//Develop a Program to find the transpose matrix of a given 2D array.
//Example:
//Input:
//Enter the array's row & column size: 3
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 4
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 2
//a[2][2] = 6
//Output:
//The transpose matrix of an array:
//2 3 8
//4 5 2
//1 4 6

#include<stdio.h>
#include<conio.h>

int main() {
    int row, col, i, j;
    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    col = row; 
    int arr[row][col];
    printf("Enter array's elements: ");
    for(i=0; i<row; i++) {
        for(j=0; j<col; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The transpose matrix of an array: \n");
    for(i=0; i<col; i++) {
        for(j=0; j<row; j++) {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
    }
    return 0;
}

