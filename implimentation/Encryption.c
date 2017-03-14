#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);

    // get total number of charactors
    int L = 0;
    while(s[L] != '\0'){
        L += 1;
    }
    int rows = sqrt(L); //round down
    int cols;
    if(rows*rows == L){
        cols = rows;
    }else if(rows*(rows+1) >= L){
        cols = rows + 1;
    }else{
        cols = rows + 1;
        rows = cols;
    }
    
    // fill in letters to grid
    char grid[rows][cols];
    int cnt = 0;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            grid[i][j] = s[cnt];
            cnt += 1;
        }
    }
    
    
    // read output
    for(int j = 0; j < cols; j++){
        for(int i = 0; i < rows; i++){
            if(i == rows-1 && j > cols-((rows*cols)-L)-1){
                ;
            }else{
                printf("%c", grid[i][j]);
            }
        }
        if(j != cols-1){
            printf(" ");
        }
    }
    return 0;
}

