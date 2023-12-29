#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale>

#define SIZE 10

int main() {
    setlocale(LC_ALL, "Ukr");
    srand(time(NULL));

    int a[SIZE];

    for (int i = 0; i < SIZE; i++) {
        a[i] = rand() % 100;
    }

    printf("Елементи масиву: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", a[i]);
    }

    int max = a[0], min = a[0];

    for (int i = 1; i < SIZE; i++) {
        if (a[i] > max) {
            max = a[i];
        }

        if (a[i] < min) {
            min = a[i];
        }
    }

    printf("\nМаксимальне значення: %d\n", max);
    printf("Мiнiмальне значення: %d\n", min);

    return 0;
}