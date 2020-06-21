/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Please enter a number for the aestheticc (inspired by spiderman's mask lol): ");
    int x;
    scanf("%d", &x);
    
    for (int row = 0; row <=x; row++){
        if (row%2 ==0){
                printf("\\");
            }
            else{
                printf("/");
            }
        for (int col = row; col >= 0; col--){
            printf("*");
        }
        
        for (int i = 0; i <= (2*x+2) - (row+1)*2+2; i++){
            printf(" ");
        }
        
        for (int col = row; col >= 0; col--){
            printf("*");
        }
        
        if (row%2 ==0){
                printf("/");
            }
            else{
                printf("\\");
            }
        
        printf("\n");
    }
    
    for (int row = x; row >=0; row--){
        if (row%2 ==0){
                printf("\\");
            }
            else{
                printf("/");
            }
        for (int col = row; col >= 0; col--){
            printf("*");
        }
        
        for (int i = (2*x+2) - (row+1)*2+2; i >= 0; i--){
            printf(" ");
        }
        
        for (int col = 0; col <= row; col++){
            printf("*");
        }
        
        if (row%2 ==0){
                printf("/");
            }
            else{
                printf("\\");
            }
        printf("\n");
}
    return 0;
    }
