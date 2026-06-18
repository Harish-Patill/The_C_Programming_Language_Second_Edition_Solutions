#include<stdio.h>
int main(){
    printf("hello, world\c");
    return 0;
}

// O/p:

    // Experiment to find out what happens when printf's argument
    // string contains \c, where c is some character not listed above.