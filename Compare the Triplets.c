#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int a[3];
    int b[3];
    for(int cnt = 0; cnt < 3; cnt++){
        scanf("%d", &a[cnt]);
    }
    for(int cnt = 0; cnt < 3; cnt++){
        scanf("%d", &b[cnt]);
    }

    int alice = 0, bob = 0;
    for(int cnt = 0; cnt < 3; cnt++){
        if(a[cnt] > b[cnt]){
            alice += 1;
        } else if(a[cnt] < b[cnt]){
            bob += 1;
        }else{;}
    }
    
    printf("%d %d", alice, bob);
    return 0;
}

