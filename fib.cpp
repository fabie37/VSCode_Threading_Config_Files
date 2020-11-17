
#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <thread>
  
int fib(int x, int x1, int x2);
int fib(int x);

int fib(int x, int x1, int x2) {
    if (x == 0) {
        return x2;
    } else {
        return fib(x-1, x1+x2, x1);
    }
}

int fib(int x) {
    return fib(x, 0, 1);
}

int main() {
    auto t1 = std::thread([](){ printf("%d\n", fib(40)); });
    auto t2 = std::thread([](){ printf("%d\n", fib(41)); });
    printf("%d\n", fib(42));

    t1.join();
    t2.join();
}