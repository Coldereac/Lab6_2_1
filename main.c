#include <stdio.h>
#include <stdlib.h>
#define SIZE 20
#define NUMBERS 10
/*
*Користувач задає послідовність чисел. Написати рекурсивну функцію
виведення всіх чисел, розташованих до першого від’ємного числа.
ІІ варіант послідовність зберігається у масиві.
 */
void print(int * arr);
int * allocating( const int size);
int * input();

int main(void) {
    int * numbers = input();
    print(numbers);
    free(numbers);
    return 0;
}

void print(int * arr) {
    if (arr == NULL) {
        return;
    }
    if (*arr < 0) {
        return;
    }
    printf("%d ", *arr);
    print(++arr);
}


int * allocating( const int size) {
    return (int*) malloc(size * sizeof(int));
}

int * input() {
    int * result = allocating(SIZE);
    printf("Enter %d numbers\n", NUMBERS);
    for (int i = 0; i < NUMBERS; ++i) {
        scanf("%d", &result[i]);
    }
    return result;
}