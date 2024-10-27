#include <stdio.h>
int main() {
    int num, prime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num<2){
        prime=0;
    }
    else{
    for(int i =2; i<num; i++)
    {
    if(num%i==0){
    prime=0;
    break;
    }
    }
    if(prime==1){
    printf("%d is a prime number\n",num);
    }
    else{
    printf("%d is not a prime number\n",num);
    }
    }
    return 0;
}
