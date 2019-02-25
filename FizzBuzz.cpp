/*
FizzBuzz
Count up by integers and prints them.
Prints "Fizz" if divisible by 3
Prints "Buzz" if divisible by 5
Prints "FizzBuzz" if divisible by 3 and 5
Runs as long as user decides
*/
#include <stdio.h>
int main(void){
	int num,i;
	printf("Enter how long the program should run: ");
	scanf("%d",&i);
	for(num=1;num<=i;num++){
		if(num%3==0){
			if(num%5==0) printf("FizzBuzz\n");
			else printf("Fizz\n");
		}
		else if(num%5==0) printf("Buzz\n");
		else printf("%d\n",num);
	}
}
