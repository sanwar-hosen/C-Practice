#include<stdio.h>


int main(){

int a;
int f=1;
printf("Please Insert a positive number.\n");
scanf("%d", &a);

    if(a<0){
    printf("Insert a Valid positive number \n");
    }

    else{
    for(int i=1;i<=a;i++){
    f=f*i;
    }
    printf("Factorial of %d is: %d\n", a, f);
    }

return 0;
}
