/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			Pyramid of Numbers
 * Author:			<your name>
 * ----------------------------------------------------------
 * Description:
 * Calculates a pyramid of numbers, i.e., it multiplies a big
 * integer by the number 2, its result by 3, etc. and then
 * returns to the original value by subsequently dividing,
 * again starting by 2, 3, etc.
 * ----------------------------------------------------------
 */
#include <stdio.h>

/// The maximum number of digits allowed in a big int.
#define MAX_DIGITS 160

/** BigInt represents an integer number which can have MAX_DIGITS digits
*** @see MAX_DIGITS
*/
struct BigInt {
	/** number of digits of the big int. */
	int digits_count;

	/** array of digits of big int. */
	unsigned int the_int[MAX_DIGITS];
};

/** strtobig_int converts a string into a BigInt. If strtobig_int runs
*** against a character not between '0' and '9' the conversion stops
*** at this point.
*** @param *str The string to be converted.
*** @param len Number of characters in string to be converted.
*** @param *big_int The converted string now as BigInt.
* @return The number of characters converted.
*/
int strtobig_int(const char *str, int len, struct BigInt *big_int);
{
	len--;
	int alreadyConvert;
	for (size_t i = 0; i < len; i++) {
		if(str[len] < '0' || str[len] > '9'){
			return 0;
		}
		big_int->digits_count = alreadyConvert;
		return alreadyConvert;
	}
}

/** print_big_int() prints a BigInt.
*** @param *big_int The BigInt to be printed.
*/
void print_big_int(const struct BigInt *big_int);
{
	bool isNullFound = true;
	for (size_t i = 0; i < digits_count->big_int; i++) {
		if(big_int->the_int[i] > 0 || isNullFound == false){
			printf("%s", big_int->the_int[i]);
			isNullFound = false;
		}
	}
}

/** multiply() multiplies a BigInt by an int.
*** @param big_int The BigInt to be multiplied.
*** @param factor The int value which is multiplied by BigInt.
*** @param *big_result The result of the multiplication.
*/
void multiply(const struct BigInt *big_int, int factor, struct BigInt *big_result);{
	int temp;
	int overflow = 0;
	for (size_t i = 0; i < big_int->digits_count; i++) {
		big_result->digits_count = 1+i;
		big_result->the_int[i] = 0;
		temp = overflow * 100 + big_int->the_int[i];
		if(temp <= divisor){
			big_result->the_int[i] = temp / divisor;
		}
		else{
			overflow = big_int->the_int[i];
		}
	}
}

/** divide() multiplies a BigInt by an int.
*** @param big_int The BigInt to be divided.
*** @param divisor The int value by which we want to devide big_int.
*** @param *big_result The result of the division.
*/
void divide(const struct BigInt *big_int, int divisor, struct BigInt *big_result);{
	int temp;
	int overflow = 0;
	for (size_t i = 0; i < big_int->digits_count; i++) {
		big_result->the_int[i] = 0;
		big_result->digits_count = i+1;
		temp = overflow * 10 + big_int->the_int[i];
		if (tempResult >= divisor) {
				big_result->the_int[i] = tempResult / divisor;
				overflowNumber = tempResult % divisor;
			}
			else
			{
				overflowNumber = big_int->the_int[i];
			}
	}
}

/** copy_big_int() copies a BigInt to another BigInt.
*** @param from The source where we want to copy from.
*** @param *to The target where we want to copy to.
*/
void copy_big_int(const struct BigInt *from, struct BigInt *to);{
	from = to;
}

/**
*** main() reads the base number from which the pyramid has to be calculated
*** into an array of char. The max. length of this number is MAX_DIGITS.
*** The number is checked to contain only digits. If not the program exits.
*** Then the inputted number is converted into a big int by calling the
*** function strtobig_int().
*** After the conversion the tower is calculated by calling the functions
*** multiply(), print_big_int(), and copy_big_int() consecutively from 2 to
*** 9 and then again with divide() instead of multiply() from 2 to 9.
***
*/
int main(int argc, char *argv[])
{
	int lenght = 0;
	int convert;
	printf("Pyramid of Numbers\n");
  printf("\n");
  char userInput[MAX_DIGITS];
  printf("Please enter a number: \n");
  scanf("%s", userInput);
	lenght = strlen(input);
	convert = strtobig_int(*userInput, userInput.length, BigInt);
	if(Convert = 0){
		return 0;
	}
	return 0;
}
