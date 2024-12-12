#include <stdio.h>

// Function to find common elements between two arrays
int findCommonElements(double arr1[], int size1, double arr2[], int size2, double result[]) {
    int count = 0; // Counter for common elements

    // Search for common elements
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (arr1[i] == arr2[j]) {
                // Check if the element is already added to the result
                int alreadyAdded = 0;
                for (int k = 0; k < count; k++) {
                    if (result[k] == arr1[i]) {
                        alreadyAdded = 1;
                        break;
                    }
                }

                // If not added, add the element to the result array
                if (!alreadyAdded) {
                    result[count++] = arr1[i];
                }
            }
        }
    }

    // Return 0 if no common elements are found, otherwise return their count
    return count == 0 ? 0 : count;
}

int main() {
    double array1[] = { 1.1, 2.2, 3.3, 4.4 };
    double array2[] = { 3.3, 4.4, 5.5, 6.6 };
    double result[10]; // Array to store common elements

    int commonCount = findCommonElements(array1, 4, array2, 4, result);

    if (commonCount == 0) {
        printf("No common elements found.\n");
    }
    else {
        printf("Number of common elements: %d\n", commonCount);
        printf("Common elements: ");
        for (int i = 0; i < commonCount; i++) {
            printf("%.1f ", result[i]);
        }
        printf("\n");
    }

    return 0;
}
