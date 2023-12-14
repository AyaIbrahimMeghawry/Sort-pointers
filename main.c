#include <stdio.h>

// Function to sort the numbers using pointers
void sort(int n, int* ptr)
{
    int i, j, t;

    // Sort the numbers using pointers
    for (i = 0; i < n; i++) {

        for (j = i + 1; j < n; j++) {

            if (*(ptr + j) < *(ptr + i)) {

                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }

    // print the numbers
    for (i = 0; i < n; i++)
        printf("%d ", *(ptr + i));
}

// Driver code
int main()
{
    int n = 5;
    int arr[] = { 0, 23, 14, 12, 9 };

    sort(n, arr);

    return 0;
}





























/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Red[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int Green[3][3]={{10,11,12},{13,14,15},{16,17,18}};
    int Blue[3][3]={{19,20,21},{22,23,24},{25,26,27}};
    int *RGB[3]={Red,Green,Blue};
    int **ptr=RGB;
    //int i;
   /* for(i=0;i<9;i++)
        { printf("%d ",*(*ptr +i));
        }
        printf("%d",*(*ptr +2)+0);

    return 0;
}*/
