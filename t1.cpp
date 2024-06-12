#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
	string password;
	cout << "Enter password";
	cin >> password;

	int length = password.length();
	int score = 0;

	if (length >= 6) {
		score += 20;
	}
	for (char c : password) {
		if (isdigit(c)) {
			score += 20;
			break;
		}
	}
	for (char c : password) {
		if (ispunct(c)) {
			score += 20;
			break;
		}
	}
	for (char c : password) {
		if (isupper(c)) {
			break;
		}
	}
	for (char c : password) {
		if (islower(c)) {
			score += 20;
			break;
		}
	}
	cout << "password difficulty:" << score << "%" << endl;
	return 0;

}
