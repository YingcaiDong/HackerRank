#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int countNum(int* q, int n, int *result) {
    int cnt = 0; int tempCnt = 0;
    int temp;
    int order = 0; // 0 means not in order
    int rightBoundary1, rightBoundary2;
    if (n%2 == 0) {
        rightBoundary1 = n-2;
        rightBoundary2 = n-3;
    } else {
        rightBoundary1 = n-3;
        rightBoundary2 = n-2;
    }
    while(order == 0){
        for(int j = 0; j <= rightBoundary1; j=j+2){
            if(q[j] > q[j+1]){
                temp = q[j+1];
                q[j+1] = q[j];
                q[j] = temp;
                cnt += 1;
            }
        }
        tempCnt = cnt;
        for(int j = 1; j <= rightBoundary2; j=j+2){
            if(q[j] > q[j+1]){
                temp = q[j+1];
                q[j+1] = q[j];
                q[j] = temp;
                cnt += 1;
            }
        }
        if(tempCnt == cnt){
            order = 1;
        } else{order = 0;}
    }
    *result = cnt;
    return 0;
}
int main(){
    int T; 
    scanf("%d",&T);
    for(int a0 = 0; a0 < T; a0++){
        int badFlag = 0;
        int n;       
        scanf("%d",&n);
        int *q = malloc(sizeof(int) * n);
        for(int q_i = 0; q_i < n; q_i++){
           scanf("%d",&q[q_i]);
           // get distance difference
           // q[i] - (i+1)
           int DD = q[q_i] - (q_i + 1);
           if(DD > 2){
               badFlag = 1;
            }
        }
        // counting steps
        int cnt = 0;
        countNum(q, n, &cnt);
        // your code goes here 
        if(badFlag == 1){
            printf("Too chaotic\n");
            
        }else{
            printf("%d\n", cnt);
        }
    }
    return 0;
}

