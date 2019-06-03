  #include <iostream>
  #include <cstring>
  #include <cmath>

  using namespace std;

  int main() {
    // // task 1
    // int a, b;
    // cout << "enter a and b:";
    // cin >> a >> b;
    // if(a > b) {
    //   cout << "a > b";
    // }
    // else if(a < b) {
    //   cout << "a < b";
    // }
    // else {
    //   cout << "a = b";
    // }
    //
    // // task 2
    // int x;
    // cout << "enter X cord: ";
    // cin >> x;
    // if( (x >= -3 && x <=1)||(x > 5 && x < 8)) {
    //   cout << "[+] point BELONGS to area" << endl;
    // }
    // else {
    //   cout << "[-] point DOESN'T BELONG to area!" << endl;
    // }


    // // task 3
    // int age;
    // cout << "Enter your age: \n";
    // cin >> age;
    // if(age>=0 && age<=6) cout << "deathskiy sad" << endl;
    // else if(age >= 7 && age <= 16) cout << "school" << endl;
    // else if(age >= 17 && age <= 22) cout << "university" << endl;
    // else if(age >= 23 && age <= 60) cout << "work" << endl;
    // else if(age >= 61) cout << "death" << endl;


    // // task 4
    // int x, y;
    // cout << "enter point cooridantes (x, y): \n";
    // cout << "x = ";
    // cin >> x;
    // cout << "y = ";
    // cin >> y;
    // if((x >= -1 && x <= 2) || (y >= -2 && y <= 1)) {
    //   cout << "[+] this point belongs to area" << endl;
    // }
    // else {
    //   cout << "[-] this point doesn't belong to area" << endl;
    // }


    // task 5
    int day;
    cout << "enter number of day: ";
    cin >> day;
    switch(day){
      case 1: cout << "MONDAY" << endl;
              break;
      case 2: cout << "TUESDAY" << endl;
              break;
      case 3: cout << "WEDNESDAY" << endl;
              break;
      case 4: cout << "THURSDAY" << endl;
              break;
      case 5: cout << "FRIDAY" << endl;
              break;
      case 6: cout << "SATURDAY" << endl;
              break;
      case 7: cout << "SUNDAY" << endl;
              break;
      default: cout << "ENTER CORRECT NUMBER OF DAY PLZ" << endl;
               break;
    }

  }
