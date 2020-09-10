#include <stdio.h>

int main(){
    double num;
    int count = 0;
    double sum = 0.0;

    while(num != 0){
        printf("0-9: ");
        scanf("%lf", &num);

        if(num == 0){
            break;
        }
        count++;
        sum += num;
    }
    printf("Count: %d \n" ,count);
    printf("Sum: %f \n", sum);
    printf("Average: %f \n",sum / count);
    return 0;
}
