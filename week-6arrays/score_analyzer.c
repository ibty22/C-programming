#include <stdio.h>
double analyze_scores(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return (double)sum / size;
}
void display_above_average(int scores[], int size, double average) {
    printf("\n scores above average (%.2f):\n ", average );
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (scores[i] > average) {
            printf("score %d at position %d\n", scores[i], i);
            found = 1;
        }
    }
    if (!found) {
        printf("none\n");
    }
}
    int main() {
    printf("enter %d student scores:\n",SIZE );
    for (int i = 0; i < SIZE; i++) {
        printf("score %d: ", i + 1);
        scanf("%d", &scores[i]);
    }
double average = calculateAverage (scores,SIZE);
printf("\n --- results ---\n");
printf("average score: %.2f\n", average);
display_above_average(scores, SIZE, average);
return 0;
}
