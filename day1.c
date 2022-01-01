#include <stdio.h>

int main()
{
    
    int t, n, d;
    printf("Enter test cases : ");
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        printf("\nEnter size of array  : ");
        scanf("%d", &n);
        printf("Enter number to rotate clockwise by :");
        scanf("%d", &d);
        int size = n + d;
        int k = n;
        int a[size];
        printf("Enter elements : ");
        for (int j = 0; j < n; j++)
            scanf("%d", &a[j]);
        for (int i = 0; i < d; i++)
        {
            a[k++] = a[i];
        }
        for(int k=d;k<size;k++)
        a[k-d]=a[k];

        for (int k = 0; k < n; k++)
            printf("%d ", a[k]);

        printf("\n");
    }
    return 0;
}