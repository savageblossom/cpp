  #include <iostream>
  #include <cstring>
  #include <cmath>

  using namespace std;

  int main() {
      // // task 1
      //
      // int val, s = 0;
      // cout << "enter the sequence of numbers: \n";
      // while(s < 100) {
      //   cin >> val;
      //   if(val < 0) {
      //     s += val*val;
      //   }
      //   else if(val > 0) {
      //     s += val;
      //   }
      // }
      // cout << "s = " << s << endl;
      // cin.get();


      // // task 2
      //
      // int val, s = 0, least = 2147483647;
      // cout << "enter the sequence of numbers: \n";
      // while(true) {
      //   cin >> val;
      //   if(val == 0) break;
      //   if(least > val) least = val;
      //   if(val > 10 && val < 25) {
      //     s += val;
      //     if(val > 15) {
      //       s *= val;
      //     }
      //   }
      //   cout << "current sum/mul: " << s << endl;
      // }
      // cout << "least number: " << least << endl;


      // // task 3
      //
      // int val, max = -2147483647;
      // cout << "ENTER the sequence of NUMBBBEEERSSS: ";
      // while(true) {
      //   cin >> val;
      //   if(val == 0) break;
      //   if(val > max) max = val;
      //
      // }
      // cout << max << endl;

      // task 4

      string ch;
      int number;

      while(true) {
        cout << "\nenter symbol plz: ";
        cin >> ch;
        if(ch == ".") break;
        cout << "enter NUMBER: ";
        cin >> number;
        for(int i = 0; i <= number; i++) {
          cout << ch;
        }
      }
  }
