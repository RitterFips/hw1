
#include <iostream>
using namespace std;

int main () {
  int N;
  cout << "Bitte geben Sie an bis zu welcher Zahl die Fibonacci-Folge laufen soll und bestätigen Sie dies mit Enter."<<endl;
  cin >> N;
  int a = 0;
  cout << "Die 0. Fibonacci Zahl lautet:" << a <<endl;
  int b = 1;
  cout << "Die 1. Fibonacci Zahl lautet:" << b <<endl;
  int c;
  for (int x = 1; x < N; x++) {
    c = a+b;
    a = b;
    b = c;
    cout << "Die " << x+1 << ". Fibonacci-Zahl lautet:" << c <<endl;
  }
}