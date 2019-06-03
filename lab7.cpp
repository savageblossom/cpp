  #include <iostream>
  #include <cstring>
  #include <cmath>

  using namespace std;

  // task 1 function
  int max (int a, int b) {
    if(a > b) return a;
    else return b;
  }

  // task 2 function(s)
  int fucktorial(int n) {
    int mul = 1;
    while(n != 1) {
      mul *= n;
      n--;
    }
    return mul;
  }

  int row () {
    int n;
    double sum = 0;
    cout << "Enter N: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
      sum += (2*i)/(fucktorial(i));
    }
    return sum;
  }

  // task 3 FUNCTIOOOON
  string isPrime() {
    int n;
    string flag;
    cout << "enter N to determine its SIMPLENESS: ";
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++) {
      if(n % i == 0) flag = "false";
    }
    if(flag == "false") return "it's not simple\n";
    else return "it's simple af\n";
  }


  // task 4
  int lengthOfSegment(int x1, int y1, int x2, int y2) {
    int length;
    // cout << "Enter x1 and y1: ";
    // cin >> x1 >> y1;
    // cout << "Enter x2 and y2: ";
    // cin >> x2 >> y2;
    length = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    return length;
  }


  // task 5
  int decr(int x) {
    return --x;
  }

  int main() {
    // // task 1
    //
    // cout << max(12, 9) << endl;
    // cout << max(-6, -7) << endl;
    // cout << max(30, -30) << endl;
    // // cout << max(12, 9, 20) << endl;
    // // cout << max(15, 17, 16) << endl;
    //
    // // task 2
    // cout << row() << endl;

    // // task 3
    // cout << isPrime();
    //


    // //task 4
    // cout << "A(1,0), B(3,2), C(4,3)" << endl;
    // int AB = lengthOfSegment(1,0,3,2);
    // int BC = lengthOfSegment(3,2,4,3);
    // int AC = lengthOfSegment(1,0,4,3);
    //
    // if(AB + BC > AC && AB + AC > BC && BC + AC > AB) {
    //   cout << "[+] it's a triangle!" << endl;
    // }
    // else cout << "[-] it's not a triangle!" << endl;
    //
    //
    // cout << "A(1,0), B(3,2), D(0,1)" << endl;
    // int BD = lengthOfSegment(3,2,0,1);
    // int AD = lengthOfSegment(1,0,0,1);
    //
    // if(AB + BD > AD && AB + AD > BD && BD + AD > AB) {
    //   cout << "[+] it's a triangle!" << endl;
    // }
    // else cout << "[-] it's not a triangle!" << endl;

    // task 5
    cout << decr(4);

  }
