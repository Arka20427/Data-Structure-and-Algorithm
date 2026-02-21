#include <stdio.h>

//Q. Write a program in C to print the first n natural numbers using recursion;
void f(int n) {
    if (n == 0) {
        return;
    } else {
        f(n - 1);          // recursive call
        printf("%d ", n); // print while returning
    }
}

int main() {
    int terms;
    printf("Enter the last term of the numbers: ");
    scanf("%d", &terms);

    f(terms);

    return 0;
}

