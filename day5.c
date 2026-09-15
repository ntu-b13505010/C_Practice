#include <stdio.h>

int findMax(const int score[], int size) {
    int max = score[0];

    for (int i = 1; i < size; i++) {
        if (score[i] > max)
            max = score[i];
    }

    return max;
}

int findMin(const int score[], int size) {
    int min = score[0];

    for (int i = 1; i < size; i++) {
        if (score[i] < min)
            min = score[i];
    }

    return min;
}

float findAverage(const int score[], int size) {
    int total = 0;

    for (int i = 0; i < size; i++) {
        total += score[i];
    }

    float ave = total / (float)size;

    return ave;
}

int main() {
    int score[5];
    int max;
    int min;
    float Ave;

    printf("Enter your score: ");

    scanf("%d %d %d %d %d",
          &score[0], &score[1], &score[2], &score[3], &score[4]);

    max = findMax(score, 5);
    min = findMin(score, 5);
    Ave = findAverage(score, 5);

    printf("MAX is %d\n", max);
    printf("MIN is %d\n", min);
    printf("Average is %.2f\n", Ave);

    return 0;
}