#include <iostream>
#include <time.h>
using namespace std;

// This function takes input for the 2 matrices
int* define_matrices(){
	int *entries = new int[8];
	srand(time(NULL));	//Seed initialization


	for (int i = 0; i < 8; i++){
		entries[i] = rand() % 100 + 1;	//Random Numbers will be generated and stored in the array "entries"
	}

	return entries;
}

// Calculates the Seven Products of Strassen's Matrix Multiplication
int* seven_products(int *entries){
	int *prod = new int[7];

	prod[0] = entries[0] * (entries[5] - entries[7]);
	prod[1] = entries[7] * (entries[0] + entries[1]);
	prod[2] = entries[4] * (entries[2] + entries[3]);
	prod[3] = entries[3] * (entries[6] - entries[4]);

	prod[4] = (entries[0] + entries[3]) * (entries[4] + entries[7]);
	prod[5] = (entries[1] - entries[3]) * (entries[6] + entries[7]);
	prod[6] = (entries[0] - entries[2]) * (entries[4] + entries[5]);

	return prod;
}

//This function puts the products in the right order to get the final matrix
int* answer_matrix(int* prod){
	int* answer = new int[4];
	answer[0] = prod[5] + prod[4] + prod[3] - prod[1];
	answer[1] = prod[0] + prod[1];
	answer[2] = prod[2] + prod[3];
	answer[3] = prod[0] + prod[4] - prod[2] - prod[6];

	return answer;
}

int main(){
	int *entries = define_matrices();	// Define The Two Matrices
	int *products = seven_products(entries);	// Calculate the Products
	int *answer = answer_matrix(products);		// Place all entries in the Final Matrix

	cout << "Answer Matrix\n";		// Printing The Final Matrix
	for (int i = 0; i < 4; i++){
		if (i == 2)
			cout << endl;
		cout << answer[i] << "\t";
	}

	cout << endl << endl;
	system("pause");
}