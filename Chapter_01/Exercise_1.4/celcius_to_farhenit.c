#include <stdio.h>
int main(){
    int cel;
    
    printf("Enter your value (in Cel): ");
    scanf("%d",&cel);

    int farh=(cel * 9/5) + 32;
    printf("%d degree Celcius in Farhenit is %d\n",cel,farh);

    return 0;
}