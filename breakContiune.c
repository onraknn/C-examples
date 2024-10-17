#include<stdio.h>
#include<stdlib.h>

int main(){

    int i;
    for(i=0;i<20;i+=2){

    printf("%d\n",i);
        if(i==4)
            continue;

        else if(i==12)
            break;
    }
return 0;
}
