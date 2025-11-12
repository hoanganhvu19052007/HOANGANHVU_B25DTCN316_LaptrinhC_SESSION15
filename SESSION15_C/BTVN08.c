#include <stdio.h>

int removeDuplicates(int arr[], int size) {
    if (size == 0) return 0;
    int i, j;
    int writeIndex = 1;
    
    for (i = 1; i < size; i++) {
        int isDuplicate = 0;
        for (j = 0; j < writeIndex; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[writeIndex] = arr[i];
            writeIndex++;
        }
    }
    
    return writeIndex;
}
int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 1, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Mang ban dau: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    int newSize = removeDuplicates(arr, size);
    
	printf("Mang sau khi loai bo trung lap: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Kich thuc moi: %d\n", newSize);
    return 0;
}
