#include <stdio.h>
#include <stdlib.h>

int sum = 0;

void avgArray(int data[], int size);
double average(double data[], int numEntries);

int main() {

	int data[4] = { 4,3,2,1 };

	avgArray(data, 4);
	average(data, 4);

	return 0;
	system("PAUSE");

}

//function that computes the average of data

void avgArray(int data[], int size) {

	for (int coln = 0; coln < size; coln++) {

		sum = sum + data[coln];

	}

	//int avg = sum / size;
	printf("%d\n", &size);
}

double average(double data[], int numEntries) {
	int index;
	double sum = 0.0;

	for (index = 0; index < numEntries; index++) {
		sum += data[index];
	}
	double avg = sum / numEntries;
	printf("%lf", &sum);
	return(sum / numEntries);
}

/*function that compute the sample variance of data

void varArray(int data[], int SIZE; int var;) {



}

function that compute the sample standard deviation of data
*/
