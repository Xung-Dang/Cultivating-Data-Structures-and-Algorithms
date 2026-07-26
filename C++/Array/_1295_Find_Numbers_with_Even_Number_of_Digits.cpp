#include <iostream>
#include <string>
using namespace std;
class Findnumber {
private:
	int a;
public:
	int Find_number_with(int nums[], int size);
	int computedigit(int digit);
protected:

};

int Findnumber::computedigit(int digit) {
	int countvariable = 0;
	int result = abs(digit);
	do
	{
		result /= 10;
		countvariable++;
	} while (result != 0);

	return countvariable;
}


int Findnumber::Find_number_with(int nums[], int size) {
	int countvariable = 0;
	Findnumber FN;
	//int b = FN.a;

	for (int i = 0; i < size; i++) {
		int numberofdigit = FN.computedigit(nums[i]);

		if (numberofdigit % 2 == 0) {
			countvariable++;
		}
	}

	return countvariable;

}


int main() {
	int nums[] = { 1,2,3,4,1, -23, -9, -999,0 };
	int sizeofnums = sizeof(nums) / sizeof(nums[0]);

	Findnumber FN;
	//cout << FN.computedigit(12)<<"/n";
	cout << "Print number in array:" << FN.Find_number_with(nums, sizeofnums) << "\n";

	// Array iteration 1
	/*

	int n2[] = { 4,3,2,1 };
	int sizeofn2 = sizeof(n2) / sizeof(n2[0]);

	for (int i = 0; i < sizeofn2; i++) {
		n2[i] = sizeofn2 - i;
	}

	for (int ai : n2) {
		cout << "Print number in array:" << ai << "\n";
	}
	*/



	return 0;
};