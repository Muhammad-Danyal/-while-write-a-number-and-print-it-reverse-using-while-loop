#include<iostream>
using namespace std;

int main() {
	int num, rem, rev=0;
	cout << "enter the number\n";
	cin >> num;


	while (num != 0)
	{
		rem = num % 10;
		rev = rem + (rev * 10);
		num /= 10;
	}
	cout << "the reverse of given number is :  " << rev;


	return 0;

}