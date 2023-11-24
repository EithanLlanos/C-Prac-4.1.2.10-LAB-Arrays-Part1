//Scenario
//The Fibonacci sequence is a series of natural numbers built up by this simple formula :
//
//The first Fibonacci number is equal to 1;
//The second Fibonacci number is equal to 1 too;
//The third, fourth and every subsequent Fibonacci number is equal to the sum of the two previous numbers.
//This means that the first five Fibonacci numbers look as follows :
//
//1, 1, 2, 3, 5
//
//Write a program that prints this Fibonacci sequence and two of its subsequent numbers.It should print :
//
//the first ten numbers from the Fibonacci sequence,
//then it should print only the odd numbers(1st, 3rd, 5th, 7th and 9th),
//after that, only the even numbers(2nd, 4th, 6th, 8th and 10th).
//Your version of the program must print the same result as the expected output.
//
////////////////////////////////////////////////////////////////////////////////////////////////////
//
//Expected output
//1
//1
//2
//3
//5
//8
//13
//21
//34
//55
//1
//2
//5
//13
//34
//1
//3
//8
//21
//55
//
////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int main(void) {
	int num[10];
	num[0] = 1;
	num[1] = 1;
	for (int i = 0; i < 10;i ++) {
		if (i>0 && i<9) num[i + 1] = num[i] + num[i - 1];
		printf("%d\n", num[i]);
	}
	for (int i = 0; i < 10; i += 2) {
		printf("%d\n", num[i]);
	}
	for (int i = 1; i < 10; i += 2) {
		printf("%d\n", num[i]);
	}

}