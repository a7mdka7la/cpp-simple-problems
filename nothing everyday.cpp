#include <iostream>
#include <string>
#include <cmath>
using namespace std;
/* first problem "calculate the area of circle"
int main() {
	int radius;
	const float pi = 3.14;
	cout << "enter radius: ";
	cin >> radius;
	radius =radius * radius;
	float area = pi * radius;
	cout << "the area of this circle is: " << area;
};
*/


/* second problem "calculate the area of triangle"
int main() {
	float base, Height;
	cout << "enter the base: "; cin >> base;
	cout << "enter the height: "; cin >> Height;
	float area = 0.5 * base * Height;
	cout << "here's the area homeless: " << area;
};
*/


/* third problem "calculate the average of 3 nums"
int main() {
	int x, y, z;
	cout << "enter 3 numbers: "; cin >> x >> y >> z;
	float avg = (x + y + z) / 3;
	cout << "here's the average: " << avg;
};
*/


/* forth problem "calculate the distance between 2 points"
int main() {
	float x1, x2, y1, y2;
	cout << "enter x points: "; cin >> x1 >> x2;
	cout << "enter y points: "; cin >> y1 >> y2;
	float area = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "here's the distance: " << area;
};
*/


/* problem five "calculate the minutes of given weeks"
int main() {
	int weeks;
	cout << "enter numbers of weeks: "; cin >> weeks;
	float minutes = weeks * 10080;
	cout <<"here's the minutes in this weeks: " << minutes;
};
*/


/*problem six "calculate the number of days and remainder hours based on the given hours"
int main() {
	int hours;
	cout << "enter number of hours: "; cin >> hours;
	int days = hours / 24;
	int remainder = hours % 24;
	cout << "here's the number of days: " << days << "\n";
	cout << "here's the remainder hours: " << remainder;

};
*/



/* Calculate and print the number of trays, N, needed to hold X glasses if each tray contains Y glasses.
int main() {
	int trays, glasses,tg;
	cout << "enter the number of glasses: "; cin >> glasses;
	cout << "how much glasses can the tray carry? "; cin >> tg;
	trays = glasses / tg;
	cout << "here's the number of trays: " << trays;
};
*/


/*If you distribute N apples in groups of 7 apples each, how many groups will contain
exactly 7 apples and how many apples remain?
int main() {
	int apples,exactly,remainder;
	cout << "enter the number of apples: "; cin >> apples;
	exactly = apples / 7; remainder = apples % 7;
	cout << "here's the number of exactly group of 7 apples: " << exactly << "\n";
	cout << "and here's the number of remainder apples: " << remainder;
};
*/


/*Display N grams in the form of number of kilograms and number of left grams.
int main() {
	int grams,remainder;
	int kilo;
	cout << "enter the number of grams: "; cin >> grams;
	kilo = grams / 1000; remainder = grams % 1000;
	cout << "here's the number of kilos: " << kilo << "\n";
	cout << "and here's the number of remainder: " << remainder;
};
*/


