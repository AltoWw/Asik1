/* Problem 1 
#include <iostream>
using namespace std;

int findMin(int arr[], int n){
	if (n == 1)
		return arr[0];
	else {
		int minNum = findMin(arr, n - 1);
		if (minNum < arr[n - 1])
			return minNum;
		else
			return arr[n - 1];

	}
}

int main() {
	int n;
	int arr[1000];
	cin >> n; 
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int min = findMin(arr, n);
	cout << min << endl;
		
	return 0;	
} 
*/

/* Problem 2 
#include <iostream>
using namespace std;

double findAverage(int arr[], int n) {
	if (n == 0)
		return 0;
	else {
		double findRestSum = findAverage(arr, n - 1) * (n - 1);
		double average = (findRestSum + arr[n - 1]) / n;
		
		return average;
	}
}

int main() {
	int n;
	int arr[1000];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	double average = findAverage(arr, n);
	cout << average << endl;

	return 0;
}
*/

/* Problem 3 
#include <iostream>
using namespace std;

bool isPrime(int n, int i = 2) {
	if (n <= 2) { 
		return true;
	}
	if (n % i == 0) { 
		return false;
	}
	if (i * i > n) { 
		return true;
	}
	return isPrime(n, i + 1); 
}

int main() {
	int n;
	cin >> n;
	if (isPrime(n)) {
		cout << "Prime";
	}
	else {
		cout << "Composite";
	}
	return 0;

}
*/
/* Problem 4
#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return factorial(n - 1) * n;
}

int main() {
	int n;
	cin >> n;
	int result = factorial(n);
	
	cout << result;
}
*/

/* Problem 5
#include <iostream>
using namespace std;

int fibonacci(int n) {
	if (n == 0 || n == 1) {
		return n;
	}
	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
	int n;
	cin >> n;
	int result = fibonacci(n);
	
	cout << result;
}
*/

/* Problem 6
#include <iostream>
using namespace std;

int power(int a, int n) {
	if (n == 1) {
		return a;
	}
	return a * power(a, n - 1);
}

int main() {
	int a, n;
	cin >> a >> n;
	int result = power(a, n);

	cout << result;

	return 0;
}
*/

/* Problem 7
#include <iostream>
#include <string>
using namespace std;

void permutations(string str, int start, int end) {
	if (start == end) {
		cout << str << endl;
	}
	else {
		for (int i = start; i <= end; i++) {
			swap(str[start], str[i]);
			permutations(str, start + 1, end);
			swap(str[start], str[i]);
		}
	}
}

int main() {
	string str;
	cin >> str;
	permutations(str, 0, str.length() - 1);

	return 0;
}
*/

/* Problem 8
#include <iostream>
#include <string>
using namespace std;

bool checkDigits(string s) {
	if (s.length() == 0) { 
		return true;
	}
	if (isdigit(s[0]) == false) { 
		return false;
	}
	return checkDigits(s.substr(1)); 
}

int main() {
	string s;
	cin >> s;
	if (checkDigits(s)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
*/

/* Problem 9
#include <iostream>
using namespace std;

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	return factorial(n - 1) * n;
}

int binomial(int n, int k) {
	if (k == 0 || k == n) {
		return 1;
	}
	else {
		int numerator = factorial(n);
		int denominator = factorial(k) * factorial(n - k);
		return numerator / denominator;
	}
}

int main() {
	int n, k;
	cin >> n >> k;
	int result = binomial(n, k);
	
	cout << result;
	
	return 0;
}
*/

/* Problem 10
#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0) { 
		return a;
	}
	return gcd(b, a % b);
}

int main() {
	int a, b;
	cin >> a >> b;
	int result = gcd(a, b);
	
	cout << result << endl;
	
	return 0;
}
*/
