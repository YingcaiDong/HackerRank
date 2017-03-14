#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int remender(int input, int k){
    int output, temp_result;
    temp_result = input%k;
    if(temp_result > k){
        output = remender(temp_result, k);
    }else{
        if(temp_result == 0){
            output = k;
        }else{
            output = temp_result;
        }
    }
    return output;
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    
    // check K is even or odd
    int k_state;
    if(k%2 == 0) {
        k_state = 10;//'EVEN'
    }else{
        k_state = 11;//'ODD'
    }
    
    int *rmdCmptChk;    //remender group completion check
    rmdCmptChk = (int*)malloc(k*sizeof(int));
    for(int i = 0; i < k; i++){
        rmdCmptChk[i] = 0;     // initialize the array with 0;
    }
    
    int *a; int temp_a;
    a = (int*)malloc(n*sizeof(int));
    for(int i=0; i < n; i++){
        scanf("%d", &temp_a);
        a[i] = remender(temp_a, k);
        
        if(a[i] != k){      //preforming remender group check
            rmdCmptChk[a[i]-1] = 1;
        }else{
            rmdCmptChk[k-1] = 1;
        }
    }

    if(k_state == 10){      //k_state == 'EVEN'
        int cnt, cntL, cntR;
        cnt = 0;
        for(int i = 0; i < ((k-2)/2); i++){
            cntL = 0; cntR = 0;
            if(rmdCmptChk[i] + rmdCmptChk[k-2-i] == 1){
                for(int index = 0; index < n; index++){     // go through the input array.
                    if(a[index] == i+1 || a[index] == k-1-i){
                        cnt += 1;
                    }
                }
            } else if(rmdCmptChk[i] + rmdCmptChk[k-2-i] == 2){
                for(int index = 0; index < n; index++){
                    if(a[index] == i+1){
                        cntL += 1;
                    }
                    if(a[index] == k-1-i){
                        cntR += 1;
                    }
                }
                if(cntL >= cntR){
                    cnt += cntL;
                }else{
                    cnt += cntR;
                }
            } else {;} // rmdCmptChk[i] + rmdCmptChk[k-2-i] == 0
        }
        // for remender = 0
        if(rmdCmptChk[k-1] == 1){
            cnt += 1;
        }
        // for the middle number in the rmdCmptChk array
        if(rmdCmptChk[(k-2)/2] == 1){
            cnt += 1;
        }
        printf("%d", cnt);
        
    }else{      //k_state == 'ODD'
        int cnt, cntL, cntR;
        cnt = 0;
        for(int i = 0; i < ((k-1)/2); i++){
            cntL = 0; cntR = 0;
            if(rmdCmptChk[i] + rmdCmptChk[k-2-i] == 1){
                for(int index = 0; index < n; index++){     // go through the input array.
                    if(a[index] == i+1 || a[index] == k-1-i){
                        cnt += 1;
                    }
                }
            } else if(rmdCmptChk[i] + rmdCmptChk[k-2-i] == 2){
                for(int index = 0; index < n; index++){
                    if(a[index] == i+1){
                        cntL += 1;
                    }
                    if(a[index] == k-1-i){
                        cntR += 1;
                    }
                }
                if(cntL >= cntR){
                    cnt += cntL;
                }else{
                    cnt += cntR;
                }
            } else {;} // rmdCmptChk[i] + rmdCmptChk[k-2-i] == 0
        }
        // for remender = 0
        if(rmdCmptChk[k-1] == 1){
            cnt += 1;
        }
        printf("%d", cnt);
    }
    return 0;
}

