#include <stdio.h>

void main() {
    int arr[100], size, i, sum = 0;
    
    printf("Enter the number of data: ");
    scanf("%d", &size);
    
    printf("Enter array elements: ");
    
    for(i=0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    
    for(i=0; i < size; i++){
        sum += arr[i];
    }
    
    printf("\nSum of the array = %d\n", sum);
    printf("\nAverage of the array = %.2f\n\n", sum/(float)size);
}

