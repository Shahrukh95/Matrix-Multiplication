#include <iostream>
#include <time.h>
using namespace std;

// This function populates the matrix by user input
int* populate_matrix(){
	int* entries = new int[8];	// Numbers will be stored in an array
	srand(time(NULL));	//Seed initialization

	for (int i = 0; i < 8; i++){
		entries[i] = rand() % 100 + 1;	//Random Numbers will be generated and stored in the array "entries"
	}

	return entries;
}

//This function multiplies the two matrices
int* multiply_matrices(int* entries){
	int* answer = new int[4];	//The answer array has four entries which is the final matrix
	answer[0] = (entries[0] * entries[4]) + (entries[1] * entries[6]);
	answer[1] = (entries[0] * entries[5]) + (entries[1] * entries[7]);
	answer[2] = (entries[2] * entries[4]) + (entries[3] * entries[6]);
	answer[3] = (entries[2] * entries[5]) + (entries[3] * entries[7]);

	return answer;
}

int main(){
	int *entries = new int[8];
	entries = populate_matrix();

	int* answer = new int[4];
	answer = multiply_matrices(entries);

	cout << "Answer Matrix\n\n";
	for (int i = 0; i < 4; i++){
		if (i == 2)
			cout << endl;
		cout << answer[i] << "\t";
	}

	cout << endl << endl;
	system("pause");
}