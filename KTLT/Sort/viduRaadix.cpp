#include <stdio.h>
#include <stdlib.h>
void countSort(int arr[], int n, int exp)
{
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
    for (i = 0; i < n; i++)arr[i] = output[i];
}
void radixsort(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > m)
            m = arr[i];
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
int main(){
    int n;
    printf(" enter the number of elements to be sorted: ");
    scanf("%d", &n);
    int a[n];
    printf("\n enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    radixsort(a, n);
    printf("\nsorted list: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}