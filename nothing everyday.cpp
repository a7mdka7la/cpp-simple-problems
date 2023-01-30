#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;





/* Write a program that reads the departure time (hours and minutes) of a train
and the arrival time (hours and minutes) and computes and displays the trip
time.
int main() {
	int departurehours, departureminutes, arrivalhours, arrivalminutes;
	cout << "enter the hour of train departure: "; cin >> departurehours;
	cout << "enter the minute of train departure: "; cin >> departureminutes;
	cout << "enter the hour of train arrival: "; cin >> arrivalhours;
	cout << "enter the minute of train arrival: "; cin >> arrivalminutes;


	int actuallmin = 60 - departureminutes;
	departurehours += 1;
	int actuallhours = arrivalhours - departurehours;
	int min = actuallmin + arrivalminutes;
	if (min >= 60) {
		min -= 60;
		actuallhours++;
	}


	cout << actuallhours << " hours and " << min << " minutes";
};
*/




/* Guess Game: Write a program that generates a random number from 10 to
20. It then gives the user 5 chances to guess the generated number and
prints either “Try again” for wrong guess or “Well Done” for correct guess.

int main() {
	int chances = 6, N;
	srand(time(NULL));  
	int hidden = rand() % 11 + 10;
	int i = 0;
	while (i < chances)
	{
		cout << "enter number between 10 and 20: "; cin >> N;
		i++;
		if (i == chances) {
			cout << "you lost";
		}
		else if (hidden == N) {
			cout << "well done!";
			break;
		}
		else
		{
			cout << "try again" << "\n";
		}
	}
}
*/


/*  Write a program that reads a statement from the user and counts the number of
vowel letters in the statement. If no vowels found the program prints “No vowels
found”.
int main() {
	float count = 0;
	string check;
	char vowels[] = { 'a','i','u','o','e' };
	cout << "type a string: " << "\n"; getline(cin,check);
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < sizeof(check); j++) {
			if (vowels[i] == check[j]) {
				count++;
			}
		}
	}
	if (count == 0) {
		cout << "no vowels found " << "\n";
	}
	else
	{
		cout << "found for " << count << " times" << "\n";
	}

};
*/


/* Write a program to read N numbers from the user and print the sum of the
odd elements and the sum of the even elements.
int main() {
	int N, evensum = 0,oddsum=0;
	cout << "enter a number: "; cin >> N;
	for (int i = 0; i < N + 1; i++) {
		if (i % 2 == 0) {
			evensum += i;
		}
		else
		{
			oddsum += i;
		}
	}
	cout << "here's the sum of even numbers: " << evensum << "\n";
	cout << "and here's the sum of odd numbers: " << oddsum;
};
*/


/*  Write a program that reads N numbers from the user and prints the average
of the elements greater than 6.
int main() {
	int counter = 0;
	float Avg=0, N,sum =0;
	cout << "enter number greater than 6: "; cin >> N;
	for (int i = 6; i < N + 1; i++) {
		sum += i;
		counter++;
	}
	Avg = sum / counter;
	cout << "here's the average of numbers are greater than 6: " << Avg;
};
*/






/* swaping without third variable 
int main() {
	int x, y;
	cout << "enter x value: "; cin >> x;
	cout << "enter y value: "; cin >> y;
	cout << "befor swap x = " << x << "," << " y = " << y << "\n";
	x = x + y;
	y = x - y;
	x = x - y;
	cout << "after swaping x = " << x << "," << " y = " << y;
};
*/


/* program that asks the user for three one-digit numbers and then
uses them as units, tens, and hundreds to evaluate one 3-digit number out
of them
int main() {
	int units, tens, hundreds,number;
	cout << "enter units: "; cin >> units;
	cout << "enter tens: "; cin >> tens;
	cout << "enter hundreds: "; cin >> hundreds;
	number = units + (tens * 10) + (hundreds * 100);
	cout << number;
};
*/




/* Write a program that reads two integer values N1 and N2 and calculates
and prints the summation of numbers between N1 and N2 and their
average.
int main() {
	float N1, N2, avg = 0, sum = 0;
	int counter = 0;
	cout << "enter 2 numbers: "; cin >> N1 >> N2;
	if (N2 > N1) {
		for (N1; N1 < N2 + 1; N1++) {
			sum += N1;
			counter++;
		}
	}
	else
	{
		for (N2; N2 < N1 + 1; N2++) {
			sum += N2;
			counter++;
		}
	}
	avg = sum / counter;
	cout << "here's the sum: " << abs(sum) << "\n";
	cout << "and here's the average: " << avg;
};
*/



/* Write a program to get a number N from the user. If it is negative a
message should be displayed that the number is negative. Otherwise: it
should print the summation of the numbers from 1 to N.
int main() {
	int N,sum = 0;
	cout << "enter number: "; cin >> N;
	if (N < 0) {
		cout << "this number is Negative";
	}
	else {
		for (int i = 0; i < N + 1; i++) {
			sum += i;
		}
		cout << "here's the sum from one to num: " << sum;
	}
};
*/

/* Write a program that reads a number N from the user and prints the sum of
the series: Sum = 1^2 + 2^2 + 3^2 + 4^2 + . . . N^2
int main() {
	int N,sum = 0;
	cout << "enter num: "; cin >> N;
	for (int i = 0; i < N + 1; i++) {
		sum += (i * i);
		cout << sum << "\n";
	}
}
*/




/* given number odd or even using ternary operator
int main() {
	int num;
	cout << "enter num: "; cin >> num;
	string result = (num % 2 == 0) ? "even" : "odd";
	cout << result;
};
*/