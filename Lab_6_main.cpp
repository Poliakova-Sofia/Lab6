#include <iostream>
using namespace std;

/*Given an integer array of size N.
Output all multiples of 5 numbers contained in this array in ascending order of their indices,
as well as their number K.*/

void array8();
void input_arr(int arr[], int& n, const int N);
void multi(int arr[], int n);
void output(int arr[], int newSize);

/*Given an integer array of size N. Duplicate all even numbers in it.*/

void array110();
void multiplymatches(int arr[], int n);


int main() // menu
{
    int task_num; // diclaration integer
    do {
        cout << " Enter task number (0 - exit): ";
        cin >> task_num; // input integer
        if (!cin) {
            cout << " Ups!" << endl; continue; // error notification
        }
        switch (task_num) 
        {
            case 1 : array8(); break; // task1
            case 2 : array110(); break; // task2
            case 0 : cout << " Bye!" << endl; break; // exit from the program
            default : cout << " Wrong task number!" << endl; 
            // output for incorrect numbers
        };
    } while (task_num != 0); // end the program
    return 0;
}

//task 1
void array8() {
   cout << " *** Task 1 Array8 *** " << endl;
   const int N = 50; // declaration of the constable integer
   int n = 0; // declaration of the variable
   int arr[N]; // declaration of the array of variables
   //input function call
   input_arr(arr, n, N);
   //solve function call
   multi(arr, n);
}

void input_arr(int arr[], int& n, const int N)
{
   cout << " Amount of elements: ";
   cin >> n;
   if (n < N && n > 0) {
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
   }
   else { 
      cout << " N entered wrong";
      // error notification
    }
}

void multi(int arr[], int n) { 
  //calculation area
  int newSize = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 5 == 0) {
       arr[newSize] = arr[i];
       newSize++;
    }
    else {
       arr[i] = 0;
    }
   }
// output function call
output(arr, newSize);
    // describes a new size of the massive
    cout << " New size of the massive is " << newSize << endl;
}

void output(int arr[], int newSize) {
   for (int i = 0; i < newSize; i++) {
   cout << " Array with index [" << i << "] = " << arr[i] << endl;
   } //output results
}

//task 2
void array110() {
   cout << " *** Task 2 Array110 *** " << endl;
   const int N = 50; // declaration of the constable integer
   int n = 0; // declaration of the variable
   int arr[N]; // declaration of the array of variables
   //input function call
   input_arr(arr, n, N);
   //solve function call
   multiplymatches(arr, n);
}

void multiplymatches(int arr[], int n) {
   int j = 0;
   const int A = 50;
   int ar[A];
   //Creates a new array that stores the data
   for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
          ar[j] = arr[i];
          ar[j + 1] = arr[i];
          j += 2;
        }
        else {
          ar[j] = arr[i];
          j++;
        }
    }
    int temp = j;
 cout << " Edited array = " << endl; 
 for (j = 0; j < temp; j++) {
    cout << ar[j] << " ";
}
 //New array
 cout << endl;
}
