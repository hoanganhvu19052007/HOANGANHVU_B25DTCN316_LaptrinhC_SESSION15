#include <stdio.h>

int findLeastFrequency(int arr[], int size) {
    int minFreq = size + 1;   
    int result = arr[0];      
	int i, j;
    for (i = 0; i < size; i++) {
        int freq = 1;  

        for (j = i + 1; j < size; j++) {
            if (arr[j] == arr[i]) {
                freq++;
            }
        }

        if (freq < minFreq) {
            minFreq = freq;
            result = arr[i];
        }
    }

    return result;
}

int main() {
    int arr[] = {1, 3, 3, 2, 4, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int least = findLeastFrequency(arr, size);

    printf("Phan tu xuat hien it nhat la: %d\n", least);

    return 0;
}
