/* 
 * File:   main.c
 * Author: Angel Wangji
 *
 * Created on January 28, 2014, 4:48 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int fibonacci(int n);

int main() {
    int theNth = fibonacci(10);
    printf("the nth fibonacci is %d", theNth);
    return 0;
}

int fibonacci(int n) {
    int i = 0;
    int sum = 0;
    int a = 0;
    int b = 1;
    if (n==0) {
        return 0;
    } else if (n==1) {
        return 1;
    } else {
        for (i=2; i<=n; i++) {
            sum = b + a;
            a = b;
            b=sum;
        }
        return sum;
    }

}
