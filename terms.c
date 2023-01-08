#include <stdio.h>
int main(){
    int terms,i, sum =0,temp=1;
    printf("Enter the number of terms: ");
    scanf("%d",&terms);
    for(i=0;i<terms;i++){
    printf("%d ", temp);
    if(i<terms-1){
        printf("+ ");
    }
    sum += temp;
    temp = (temp*10)+1;
    }
    printf("\nSum of the series is: %d\n",sum);

	return 0;
}
