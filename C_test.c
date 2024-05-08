#include <stdio.h>
#include <stdlib.h>

int is_prime(int num){
    if(num == 1) return 0;
    else if(num == 2) return 1;
    
    for (int i=2;i<num;i++){
        if ((num%i) == 0) return 0;
    }
    return 1;
}

int main(void)
{
    int input;
    
    int prime_sum = 0;
    printf("Enter a number:");
    scanf("%d", &input);
    int *a = (int*)malloc(input * sizeof(int)); //output a[]
    //print output
    for (int i=0;i<input;i++)
    {
        a[i]=i+1;   
    }

    for (int i=0;i<input;i++)
    {
      printf("%d \n", a[i]);
    }

    //find prime
    for (int i=2;i<input;i++){
        if ((is_prime(i)) == 1){
            if (input % i != 0){
                prime_sum = prime_sum + i;
            }
        }
    }
    if (is_prime(input) == 1) prime_sum = prime_sum + input;
    printf("All prime sum is %d", prime_sum);
    free(a);
    system("pause");
    return 0;

}

