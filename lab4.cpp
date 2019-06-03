#include <iostream>
#include <cstring>
#include <cmath>
#include <clocale>

using namespace std;

int main() {

  // // ------------
  // //    TASK 1  |
  // // ------------
  //
  // char ch;
  // string asciiCode;
  //
  // cout << "Type character and press ENTER: ";
  // cin >> ch;
  // asciiCode = to_string(ch);
  // cout << "The ASCII-code is: " + asciiCode << endl
  //      << "Press ENTER to exit."            << endl;
  // cin.get();
  // cin.get();

  // // ------------
  // //    TASK 2  |
  // // ------------
  //
  // char st[6];
  // char ch;
  //
  // cout << "type characters and press ENTER: " << endl;
  // cin >> st;
  // ch = st[0];
  // st[0] = st[4];
  // st[4] = ch;
  // cout <<"the result is: " << st;
  // cin.get();
  // cin.get();



  // // ------------
  // //    TASK 3  |
  // // ------------
  //
  // char stFirst[3], stSecond[3];
  // string str;
  // cout << "Enter the first string: " << endl;
  // cin >> stFirst;
  // cout << "Enter the second string: " << endl;
  // cin >> stSecond;
  // str = stFirst;
  // cout << "The result is: " + str << endl;


  // // task 4
  // char st[5], ch;
  // string converToString;
  // cout << "Enter string (length 5 symbols): " << endl;
  // cin >> st;
  // ch = st[0];
  // st[0] = st[4];
  // st[4] = st[2];
  // st[2] = ch;
  // converToString = st;
  // cout << "The result is: " + converToString << endl;
  //


  // task 5
  setlocale(LC_ALL, "Russian");
  char* username = NULL;
  int ascii, n;
  cout << "Enter Length of your name: " << endl;
  cin >> n;
  username = new char[n];
  cout << "Enter YOUR name: " << endl;
  cin >> username;
  for(int i = 0; i <= n-1; i++) {
    ascii = username[i];
    cout << username[i] << ": " << ascii << endl;
  }
  cout << "Press ENTER to exit." << endl;
  cin.get();
  cin.get();

}
