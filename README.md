**Documentation**

*Iterative Method*

The program contains two functions namely “populate_matrix” and multiply_matrix. The function “populate_matrix” feeds two 2x2 matrices with random numbers and returns an array with all the numbers stored in both matrices. Then we call multiply_matrix and  pass the returned array in it. This returns the final multiplied matrix.

*Strassen’s Multiplication*

The function “define_matrices” populates the two matrices with random numbers and returns an array. This array is passed into the function “seven_products” and this returns an array which is the first step of this algorithm. Then this array is passed into the function “answer_matrix” which forms the final matrix and its values stored in array and returned.
The complexity is O(n^2.8).

*Analysis*

The complexity of the iterative method is O(n^3) because we have square matrices of size n x n and there are 3 iterative loops. The complexity of Strassen’s Algorithm is O(n^2.8). It multiplies 2x2 matrices with only 7 multiplications instead of usual 8 at the expense of several other additions and subtractions.

*How To Run*

Both these programs are written in C++ and can be compiled and run in Visual Studio.
