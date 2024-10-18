#include <stdio.h>
#include <stdlib.h>

int* TwoSum ( int *numbers, int numberSize, int target, int *outputSize){

    int* outputArr = (int*) malloc(2*sizeof(int));
    if (outputArr == NULL){
        fprintf(stderr, "Memory allocation failed! \n");
        exit(EXIT_FAILURE);
    }

    *outputSize = 0;


    for ( int i = 0; i < numberSize-1; i++ ){
        for (int j= i +1; j < numberSize; j++){
            if (numbers[i] + numbers[j] ==target){
                outputArr[0] = i;
                outputArr[1] = j;
                *outputSize = 2;
                return outputArr;
            }
        }
    }


    free(outputArr);
    *outputSize = 0;
    return NULL;
}


int main () {
    int numberSize;

    printf("Enter the number of elements in the array: \n");
    if (scanf ("%d", &numberSize) !=1 || numberSize <= 0){
        fprintf (stderr, "Invalid input for numbers of elements. \n");
        return EXIT_FAILURE;
    }


    int* numbers = (int*)malloc(numberSize * sizeof(int));
    if (numbers == NULL){
        fprintf(stderr, "Memory allocation failed for numbers array!\n");
        return EXIT_FAILURE;
    }


    printf("Enter the elements of the array:\n");
    for (int i =0; i < numberSize; i++){
        if (scanf("%d", &numbers[i]) !=1){
            fprintf(stderr,"Invalid input for array element. \n");
            free(numbers);
            return EXIT_FAILURE;
        }
    }


    int target;
    printf ("Enter the target number: ");
    if (scanf("%d", &target) !=1){
        fprintf(stderr, "Invalid input for target number. \n");
        free(numbers);
        return EXIT_FAILURE;
    }


    int outputSize;
    int * results = TwoSum(numbers, numberSize, target, &outputSize);


    if(outputSize == 2) {
        printf ("Indices of the numbers that sum to %d : %d and %d\n", target, results[0], results[1]);
        free (results);
    } else {
        printf("No two numbers sum to %d. \n", target);
    }


    free(numbers);

    return 0;
}
