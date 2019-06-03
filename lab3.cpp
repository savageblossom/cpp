#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {

	// //				//
	// // Task 1 //
	// //				//
	//
	// int meters;
	// string result;
	//
	// cout << "Enter value in meters (m): \n";
	// cin >> meters;
	// if(meters > 2,147,483,647) { cout << "error. stack overflow!\n"; }
	// else {
	// 	result = to_string(meters/1000) + " km " + to_string(meters%1000) + "m";
	// 	cout << "Converted to: " + result + "\n";
	// 	cin.get();
	// }



	// //				//
	// // Task 2	//
	// //				//
	//
	// int num1, num2;
	// float result;
	//
	// cout << "Enter number 1: ";
	// cin >> num1;
	// cout << "Enter number 2: ";
	// cin >> num2;
	//
	// // // 2.1
	// // result = (-num1 + sqrt(pow(num1, 2) + 3 * num2)) / (2 * num2);
	//
	// // // 2.2
	// // result = sqrt((3 + num1 * num2) / (4 * pow(num1, 2)));
	//
	// // // 2.3
	// // result = (6 - abs(num1 - 3 * num2)) / (sqrt(5 - pow(num2, 2)));
	//
	// // // 2.4
	// // result = pow(exp(1), num1 + 7) * sqrt(37 * num2 - pow(num1, 3));
	//
	// // // 2.5
	// // result = sin(num1) + (pow(num2, 2))/(cos(2 * num1) + 23);
	//
	// // 2.6
	// result = tan(num2) - abs(num1 - 3 * num2 + (2)/sqrt(num2 + 4));
	//
	// cout << "The result is: " + to_string(result) + "\nPress ENTER to brexit";
	// cin.get();
	// cin.get();



	// //				//
	// // Task 3	//
	// //				//
	//
	// int code;
	// char ch;
	// cout << "Type character and press ENTER: ";
	// cin >> ch;
	// string ch_next(1, ch + 1);
	// string ch_previous(1, ch - 1);
	// cout << "ASCII-code is: " 						+ to_string(ch)	<< endl
	// 		 << "The next character is: " 		+	ch_next 			<< endl
	// 		 << "The previous character is: " + ch_previous 	<< endl
	// 		 << "Press ENTER to exit."												<< endl;
	// cin.get();



	// //				//
	// // Task 4	//
	// //				//
	// cout << "Numbers to work with are: 2.3, -3.6, 3.8, -5.1\n";
	// float arr [] = {2.3, -3.6, 3.8, -5.1};
	// for(int i = 0; i <= 3; i++) {
	// 	cout << to_string(arr[i]) + ": " << endl
	// 			 << "ceil(x):  " + to_string(ceil(arr[i])) 	<< endl
	// 			 << "floor(x): " + to_string(floor(arr[i])) << endl
	// 			 << "trunc(x): " + to_string(trunc(arr[i])) << endl
	// 			 << "round(x): " + to_string(round(arr[i])) << endl
	// 			 << "Press ENTER to exit."  								<< endl;
	// }
	// cin.get();



	//				//
	// Task 4	//
	//				//
	int a, b, c, p, result;

	cout << "Enter sides of triangle (in cm)\n";
	cout << "a: ";
	cin >> a;
	cout << "b: ";
	cin >> b;
	cout << "c: ";
	cin >> c;
	p = (a + b + c)/2;
	result = sqrt(p*(p-a)*(p-b)*(p-c));
	cout << "Result is: " + to_string(result) + " cm²"	<< endl
			 << "Press ENTER to exit."											<< endl;
	cin.get();

}

// Done by Muradasilov U. I1-18
