#include<iostream>
#include<Windows.h>
using namespace std;
class queue {
	int* arr;
	int count = 0;
	int size;
public:
	queue(int si = 10) {
		size = si;
		arr = new int[size];
		for (int i = 0; i < size; i++) {
			arr[i] = -1;
		}
	}
	void insert(int val) {
		arr[count] = val;
		count++;
	}
	void print() {
		cout << "Data";
		for (int i = 0; i < size; i++) {
			if (arr[i] != -1)
				cout << " -> " << arr[i];
		}
	}
};
int fab(int n, queue& q1) {
	if (n <= 1) {
		return n;
	}
	else {
		int left = fab(n - 1, q1);
		q1.insert(left);
		int right = fab(n - 2, q1);
		q1.insert(right);
		int sum = left + right;
		return sum;
	}
}
int main() {
	queue q1;
	q1.insert(fab(4, q1));
	cout << endl;
	q1.print();
	cout << endl << endl;
	return 0;
}