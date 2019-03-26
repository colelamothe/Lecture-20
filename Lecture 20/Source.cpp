// Supplementary program: 1 Dimensional arrays

#include<iostream>

using namespace std;

// function with array input 
double getAverage(double[], int);
void outputElements(double[],int);
void changeValues(double[], int, int);

int main() {
	/*
		Arrays are a type of variable that allows the organized storage of multiple values.
		Arrays are defined by a single variable type. Trying to assign a character to an integer array will throw an error.
		declaring an array:	data_type indentifier[array size] = {element1,element2,...elementN}
		Arrays are counted starting from 0 so the first item in the list is position 0
		Arrays are categorized by their offsets/indices/subscripts. This is the number of elements in each direction. This chapter only covers one dimension arrays.
		Array dimension is only limited by the available memory
		Size is defined as number of elements, index is defined counting from 0
		Arrays are not checked for bounds by the compiler when we read/write and may result in runtime error.
		defining a function to use an array defines it as passing by reference.
	*/

	int data[5] = { 15,1,7,3,4 }; // initializes an integer array with a dimension of 5 elements and initializes the array.

	// Arrays will initialize the elements of an array in order, if you define the size as 10 and initialize one it only defines the first element.
	char letters[10] = { 'a' }; // Initializes a character array of 10 elements and assigns the first element to 'a'. The rest remain unitialized, in this case they will be spaces.

	bool answerKey[] = { true,true,false,true,false }; // Setting an array without defining dimensions can be done when we are initializing in one step and it set the dimension equal to the initialization elements.
	char word[] = "Hello"; // Initializes a character array with size equal to the number of characters in the assigned string and sets each consecutive letter in the next available element space
	const int SIZE = 10;
	int myArray[SIZE]; // When we are defining an array it is good form to define the size as a named constant. Only constant variables can be used to define size, other types will throw errors.

	int arrayMath;

	

	letters[1] = 'b'; // sets the second element of the letters array == to 'b'
	myArray[0] = 10;

	arrayMath = data[3] + myArray[0]; // array math = 3 + 10. 3 is the 4th element in the data array and 10 is the first element of myArray

	cout << data[0] << " is the first element of the data array" << endl; // calls the first element of data using [] syntax
	cout << data[4] << " is the last element of the 5 element data array." << endl;
	cout << letters[0] << endl; // outputs the first element of the letters array
	cout << letters[1] << endl; // outputs the second element of the letters array

	cout << letters[26] << endl; // Since there is no 26th element to this array the compiler will return whatever is there. If nothing is in that memory location nothing will be returned. Otherwise random numbers etc.

	for (int i = 0; i < 5; ++i) {
		cout << "Array position " << i << " : " << data[i] << endl; // outputs all of the values of the array from 0-4
	}

	int counter = 0;
	double mark[10];
	do {
		cout << "Enter mark " << counter + 1 << " : " << endl;
		cin >> mark[counter];
		counter++;
	} while (counter < 10);

	outputElements(mark,10);
	
	double average = getAverage(mark, 10);
	cout << "Average: " << average << endl;

	// Functions that receive arrays are given the entire array are passed by reference
	changeValues(mark, 10, 5); // increments all elements in the mark array by 5
	outputElements(mark, 10); // outputs the newly incremented array.

	system("pause");
	return 0;
}

// Define a function that takes an array and find the average of the numbers within.
// When an array function is defined it passes by reference not just the values.
double getAverage(double inputArray[], int size) {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += inputArray[i];
	}
	return (sum / size);
}

// outputs the value of an array.
void outputElements(double inputArray[] , int size) {
	cout << "Contents of array: " << endl;
	for (int i = 0; i < size; i++) {
		cout << inputArray[i] << endl;
	}
}

// Increments the value of an array by a factor.
void changeValues(double inputArray[], int size, int factor) {
	for (int i = 0; i < size; i++) {
		inputArray[i] = inputArray[i] + factor;
	}
}
