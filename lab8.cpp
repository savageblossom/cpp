  #include <iostream>
  #include <cstring>
  #include <cmath>


  using namespace std;

  // task 5 functions
  void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
  }

  void bubbleSort(int arr[], int n) {
    for(int i = 0; i < n-1; i++){
      for(int j = 0; j < n-1; j++) {
        if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
      }
    }
  }

  int main() {
    // // task 1
    // float A[8];
    // int positive = 0, negative = 0;
    // for(int i = 0; i <= (sizeof(A)/sizeof(*A)-1); i++) {
    //   cout << "Enter element " << i << " of array: ";
    //   cin >> A[i];
    //   if(A[i] < 0) negative++;
    //   if(A[i] > 0) positive++;
    // }
    // cout << "Positive numbers: " << positive << endl
    //      << "Negative numbers: " << negative << endl;


    // // task 2
    //  float A[8], A_reversed[8];
    //  int length = sizeof(A)/sizeof(*A)-1;
    //  for(int i = 0; i <= length; i++) {
    //    cout << "Enter element " << i << " of array: ";
    //    cin >> A[i];
    //    A_reversed[length-i] = A[i];
    //  }
    //  cout << "Initial array: ";
    //  for(int i = 0; i <= length; i++) {
    //    cout << A[i] << " ";
    //  }
    //  cout << "\nReversed array: ";
    //  for(int i = 0; i <= length; i++) {
    //    cout << A_reversed[i] << " ";
    //  }


    // // task 3
    //  float A[8];
    //  int length = sizeof(A)/sizeof(*A);
    //  for(int i = 0; i <= length-1; i++) {
    //    cout << "Enter element " << i << " of array: ";
    //    cin >> A[i];
    //    if(A[i] > 2 && A[i] <= 6) A[i] = A[i] * -1;
    //  }
    //  cout << "result: ";
    //   for(int i = 0; i <= length; i++) {
    //     cout << A[i] << " ";
    //   }


    // // task 4
    // int A[] = {3, 6, 9, 12, 15, 18, 21},
    //     B[] = {3, 5, 4, 12, 81, 18, 21},
    //     length = sizeof(A)/sizeof(*A);
    // string C[length];
    // for(int i = 0; i <= length-1; i++) {
    //   if(A[i] == B[i]) C[i] = "+";
    //   else C[i] = "-";
    // }
    // cout << "Result: " << endl;
    // for(int i = 0; i <= length-1; i++) {
    //   cout << C[i] << " ";
    // }

    // task 5
    int A[8];
    for(int i = 0; i <= (sizeof(A)/sizeof(*A)-1); i++) {
      cout << "Enter element " << i << " of array: ";
      cin >> A[i];
    }
    bubbleSort(A, 8);
    for(int i = 0; i <= 7; i++) {
      cout << A[i] << " ";
    }

  }
