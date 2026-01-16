#include <iostream> 
#include <string>
#include <iomanip>

using namespace std;

int main() {
    string name; 
    int age, score;
    double h, w;
    
    // Ask for Name
    cout << "Enter your name:"; cin >> name;
    
    // Ask for Age 
    cout<< "Enter your age:  "; cin >> age;
  
  // Ask for Height 
  cout << "Enter your height (meters):"; cin >> h;

  // Ask for Weight
  cout << "Enter your weight (kg): "; cin >> w;

 // Ask for Test Scores 
    cout << "Enter your test score (0-100):"; cin >> score;
 
 // Calculate the number first
  double bmi = w/ (h*h);
    string cat; 
    if (bmi < 18.5) cat= "Underweight";
    else if (bmi<25) cat= "Normal Weight";
    else if (bmi<30) cat= "Overweight"; 
    else cat="Obese";

    string grade; 
    if (score>90) grade = "A";
    else if (score>=80) grade = "B";
    else if (score>=70) grade = "C";
    else if (score>=60) grade = "D";
    else grade = "F";

    // 5. Output
    cout << fixed << setprecision(2); 
    cout << "\nHey " << name << ", you're " << age << " years old with a BMI of " 
         << bmi << " (" << cat << ") and you got a grade " << grade << "! Keep it up!" << endl;