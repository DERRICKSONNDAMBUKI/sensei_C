#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isprime(unsigned long n){
    if(n==2||n==3) return 1;
    if(n==1||n%2==0||n%3==0) return 0;
    for (unsigned long i=5;i<=sqrt(n);i+=6){
        if(n%i==0||n%(i+2)==0) return 0;
    } return 1;
}
int main(){
    unsigned long a,b,c=0;
    scanf("%lu %lu",&a,&b);
    for(unsigned long i=a;i<=b;i++){
        if(isprime(i))
        c++;
    }
    printf("%lu",c);
    return 0;
}
// ricky has bugs