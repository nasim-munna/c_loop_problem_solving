#include <stdio.h>
int main(){
    int number,lastDigit,product=1;
    printf("Enter the number: ");
    scanf("%d",&number);
    while(number!=0){
            lastDigit= number%10;
            product*= lastDigit;
            number /= 10;

    }
    printf("%d",product);
    return 0;
}
