  #include <iostream>
  #include <cstring>
  #include <cmath>


  using namespace std;

  float RingS(int R1, int R2) {
    float Pi = 3.14;
    if(R1 > R2) return Pi*(pow(R1, 2)-pow(R2,2));
    else return 666;
  }


  int main() {
    // // while 3
    // // 15 / 3 = 5
    // // 15 12 9 6 3
    // int N, K, acc = 0;
    // cout << "Enter N and K (N/K): ";
    // cin >> N >> K;
    // while(N>=K) {
    //   acc++;
    //   N -= K;
    // }
    // cout << "Result of divion: " << acc << endl
    //      << "Remaining: " << N << endl;
    //

    // proc 19
    int R1, R2;
    cout << "Enter R1 and R2 to find S of circles (R1 > R2!): ";
    cin >> R1 >> R2;
    cout << "S of trianles equals to: " << RingS(R1, R2) << endl;






  }
