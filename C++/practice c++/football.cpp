#include <iostream>
#include <conio.h>
using namespace std;

class Soccer {
  int jn, nog, noa, total;

public:
  Soccer() {
    jn = 0;
    noa = 0;
    nog = 0;
  }
  Soccer(int j, int ng, int na) {
    jn = j;
    nog = ng;
    noa = na;
    int total = na + ng;
  }
  void display() {
    cout << "Jersey Number: " << jn << endl;
    cout << "No. of goals: " << nog << endl;
    cout << "No. of assists: " << noa << endl;
    cout << "Total goals/assists: " << total << endl;
  }
  int operator >(Soccer S) {
    if (total > S.total) {
      return 1;
    } else {
      return 0;
    }
  }
};

int main() {
  int great;
  Soccer S[4] = {Soccer(10, 100, 5), Soccer(19, 98, 10), Soccer(15, 90, 1),
                 Soccer(20, 101, 41)};
  for (int i = 0; i < 4; i++) {
    if (S[i] > S[i + 1]) {
      great = i + 1;
    } else {
      great = i;
    }
  }
  cout << "Greatest Player is: " << endl;
  S[great].display();
  getch();
}
