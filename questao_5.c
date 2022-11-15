#include <stdio.h>
#include <conio.h>


int main(){
    int i = 34;
    int j;
    int *p;
    p = &i;
    (*p)++;
    j = (*p) +33;
    
    printf("%d %d", *p, j);    
}
// j = 68 p == 35



