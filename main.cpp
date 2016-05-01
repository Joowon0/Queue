//
// Name: Joowon Byun
// Date: July 22th 2015 ~ July 27th 2015
//
#include <iostream>
#include <stdlib.h>
#include "Queue.h"

using namespace std;

int menu() {
	int a;
	cout << "[1] insert" << endl;
	cout << "[2] pop" << endl;
	cout << "[3] list" << endl;
	cout << "[4] exit" << endl;
	cout << "Your choice? : ";

	cin >> a;
	return a;
}

void choice() {
	Queue<int> *q = new Queue<int> ();
	int in, choice;
	while(1) {
		choice = menu();
		if (choice == 1) {
			cout << "Type an input :";
			cin >> in;
			q->pushRear(in);
			cout << endl;
		}
		else if (choice == 2) {
			q->popFront();
		}
		else if (choice == 3) {
			q->listFromFront();
		}
		else if (choice == 4) {
			exit(-1);
		}
	}
}

int main() {
	choice();
	return 0;
}
