#include <stdio.h>

int main(void){
    int x;

    do{
        printf("Plhktrologise ari8mo sto euros 11-99: ");
        scanf("%d", &x);
        if (x < 11 || x > 99)
            printf("Apotyxia eisagwgeis dipsifiou ari8mou, prospa8hse ksana\n");
    } while (x < 11 || x > 99);
    
    int r_x = (x%10)*10 + (x/10);
    //printf("%d", r_x);
    
    int i, pl = 0, sum = 0;
    if (r_x % 2 != 0){
        for (i = 1; i <= r_x; i+=2){
            sum += i;
            pl++;
        }
    }
    else{
        i = 2;
        while (i <= r_x){
            sum += i;
            pl++;
            i+=2;
        }
    }

    printf("%d", sum/pl);    
    
    return 0;
}
