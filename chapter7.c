// Arrays

#include <stdio.h>

void print(int *arr,int length) {
    *(arr+2)=5;
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(arr+i));
    }
}

int main()
{
    // Array 1D declaration and output
    int arr1[5] ={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr1[i]);
    }

    // Array 2D declaration and output
    int arr2[2][2] ={{1,2},{3,4}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t",arr2[i][j]);
        }
        printf("\n");
        
    }

    // Array acsess by function and pointer
    int arr[] ={1,2,3,4,5};
    print(&arr,5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}