#include <iostream>

// Lab 5 — Betsy Caudel
// CIS 5 Week 05 · Eligibility check
using std::cout;
using std::cin;
using std::endl;

int main() {
  int age = 0;
  double gpa = 0.0;

  // Asks for age and GPA.
  // Stores age and GPA.
  cout << "What is your age?" << endl;
  cin >> age;
  cout << "What is your GPA?" << endl; 
  cin >> gpa; 

  // Sets limits for bools.
  bool adult = age >= 18;
  bool honors = gpa >= 3.5;

  // Thresholds: sdults are 18 and up.
  // honors is at 3.5 GPA and up.
  if (adult && honors) {
    cout << "You are eligible for the honors program";
  } else if (adult || honors) {
    cout << "You're half way there! One requirement met.";
  } else {
    cout << "You are not eligible yet.";
  }

  return 0;
}
