#include<stdio.h>

int binary_search(int a[], int l, int h, int key) {
    int mid;
    if (l > h) {
        printf("Search unsuccessful\n");
        return -1;
    }
    mid = (l + h) / 2;
    if (key > a[mid])
        return binary_search(a, mid + 1, h, key);
    else if (key < a[mid])
        return binary_search(a, l, mid - 1, key);
    else {
        printf("\nSearch successful\n");
        return mid + 1; 
    }
}

int main() {
	printf("SADIKSHYA SUBEDI!!\n");
    int a[10], n, i, l, h, key, loc;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    l = 0;
    h = n - 1;
    printf("\nEnter array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter the key: ");
    scanf("%d", &key);
    loc = binary_search(a, l, h, key);
    if (loc != -1)
        printf("\nLocation = %d\n", loc);
    return 0;
}

