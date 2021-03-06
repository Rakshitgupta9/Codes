#include <stdio.h>
void shellsort(int arr[], int num)
{
    int i, j, k, tmp;
    for (i = num / 2; i > 0; i = i / 2)
    {
        for (j = i; j < num; j++)
        {
            for(k = j - i; k >= 0; k = k - i)
            {
                if (arr[k+i] >= arr[k])
                    break;
                else
                {
                    tmp = arr[k];
                    arr[k] = arr[k+i];
                    arr[k+i] = tmp;
                }
            }
        }
    }
}
int main()
{
    int arr[30];
    int i,  num;
    printf("Enter total no. of elements : ");
    scanf("%d", &num);
    printf("\nEnter %d numbers: ", num);
    for (i=0;i<num;i++)
    {
        scanf("%d", &arr[i]);
    }
    shellsort(arr, num);
    printf("\nSorted array is: ");
    for (i=0;i<num;i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
