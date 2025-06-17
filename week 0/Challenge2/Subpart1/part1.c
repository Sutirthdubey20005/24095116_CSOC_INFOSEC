#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));  // geenrate random number
    if(rand()%6==0)
        printf("Bang! You're dead.\n");
    else
        printf("Clic You survived.\n");
    return 0;
}
