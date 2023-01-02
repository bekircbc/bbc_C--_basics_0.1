//basic

// #include <iostream> //header file library

// int main() { //functions
//   std::cout << "Hello World!"; //output, print text
//   return 0;//ends the main function
// }

///////////////////////////////////
#include <iostream> //header file library
#include <string>
#include <cmath>
using namespace std; //names for objects and variables from standard library

int myNum = 15;

string greeting = "Hello";

float myFloatNum = 5.98;

double myDoubleNum = 5.99;

float f1 = 35e3;

double d1 = 12E4;

char myLetter = 'D';

string myText = "Hello World!";

bool myBoolean = true;

      int x = 5, y=6, z;

int sum = x+y;

int timeLine = 20;

string result = (timeLine < 18) ? "Good day." : "Good evening.";

int day = 4;

int initial = 0;

int initia = 0;

string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};

void myFunction (string fname){
  cout<<fname<<"Doe";
}


int main() { //functions
  cout << "Hello World! \n\n" << endl; //output, print text //<<endl nstead of \n\n
  cout << "I am learning C++ \n\n";
  cout << myNum <<endl;
  cout << myLetter <<endl;
  cout << myFloatNum <<endl;
  cout << myDoubleNum <<endl;
  cout << myText <<endl;
  cout << f1 <<endl;
  cout << d1 <<endl;
  cout << greeting <<endl;
  cout << sum <<endl;
  cout << max(5,10) <<endl;
  cout << min(5,10) <<endl;

cout << sqrt(64) <<endl;
cout << round(2.6) <<endl;
cout << log(2) <<endl;
cout << pow(2,4) <<endl;

if (x>y) {
  cout << "greater than" <<endl;
} else {
  cout << "less than" <<endl;
}

cout << result <<endl;

while (initial<5) {
  cout << initial << "\n";
  initial++;
}

do {
  cout << initia << "\n";
  initia++;
}
while (initia<5);


for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  } else {
  cout << i << "\n";
  continue;
  }

}


for (int i = 0; i < 4; i++) {
  cout << i << ": " << cars[i] << "\n";
}

switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}

myFunction("John");

  // cout << "Type a number:"; //for getting value and show 
  // cin>> z; //input from user
  // cout << "Your number is: " << z;


  // string fullName;
  // cout << "Type your full name: ";
  // getline (cin, fullName);
  // cout << "Your name is: " << fullName;

  return 0;//ends the main function
}

////////////////////////////////////////////////////////////////

//int, double,char,string,bool

