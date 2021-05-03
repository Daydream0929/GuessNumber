#include<iostream>
using namespace std;

int n;
int l ;
int r ;


bool Guess(int x) {
	if (x == n) {
		cout << "You got it";
		return true;
	}
	else if (x < n) {
		cout << "You guess is too low" << endl;
		cout << "Guess what number i have :" ;
		cin >> x;
		Guess(x);

	}
	else {
		cout << "You guess is too high" << endl;
		cout << "Guess what number i have :" ;
		cin >> x;
		Guess(x);
	}


}

void enter(int _l,int _r) {
	cout << "limited min number :";
	cin >> _l;
	cout << _l << endl;
	l = _l;
	cout << "limited max number :";
	cin >> _r;
	cout << _r << endl;
	r = _r;
	if (l == r) {
		cout << "Tow number are equal,please enter again!" << endl;
		enter(l, r);
	}
}

int main() {

	int res;
	enter(l, r);



	n = rand() % (r - l) + l;

	cout << "Guess what number i have :" ;
	cin >> res;
	Guess(res);

	return 0;

}