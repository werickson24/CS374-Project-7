#include "myalloc.h"
#include <stdio.h>

void example1();
void example2();
void example3();

int main(void){
    return 0;
    printf("\nExample 1: =========================\n");
    //example1();
    printf("\nExample 2: =========================\n");
    //example2();
    printf("\nExample 3: =========================\n");
    //example3();
}

void example1(){
    void *p;

    p = myalloc(512);
    print_data();

    myfree(p);
    print_data();
}

void example2(){
    myalloc(10); print_data();
    myalloc(20); print_data();
    myalloc(30); print_data();
    myalloc(40); print_data();
    myalloc(50); print_data();
}

void example3(){
    void *p;

    myalloc(10);     print_data();
    p = myalloc(20); print_data();
    myalloc(30);     print_data();
    myfree(p);       print_data();
    myalloc(40);     print_data();
    myalloc(10);     print_data();
}
