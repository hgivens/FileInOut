#include <iostream>
#include <fstream>
using namespace std;

/*********************************************************************
----------Hannah Givens 
----------09/30/20
----------Files IN OUT

---VVV Delcration of funcitons VVVV---
**********************************************************************/
int menu();
int enterGrade();
int viewGrades();
int viewMidGrade();

int main() {
  //this will allow the user to access the menue after they are done doing an set of inputs.
  while(menu() != 0){
  cout << menu();
  }
  cout << "Thank You";
}

/*This function allows you to pick what function you want to use*/
int menu(){
  int i;
  string options = "--MENU OPTIONS--\n1) Enter Grades \n 2) View All Grades \n 3) View Average Grades \n 0) EXIT \n";
  cout << options;
  cout << "Please choose one: \n";
  cin >> i;
while(i != 0){
  if(i == 1){
    enterGrade();
    cout << options;
    cin >> i;
  }else if(i == 2){
    viewGrades();
    cout << options;
     cin >> i;
  }else if(i == 3){
    viewMidGrade();
    
    cout << options;
    cin >> i; 
  }else{
    cout <<" invalade choice \n";
    break;
  }
}
return 0;
}

/*This Function allows you to ender greads*/
int enterGrade(){
  int keepGoing;
  string stName;
  int  grade1, grade2, grade3, grade4, grade5;
  ofstream fileOut;
  fileOut.open("grades.txt", ios::app);//ios::app means to append to the file instead of making a new. 
  cout << "would you like to add grades and name? \n 1)Yes \n 0) No\n";
  cin >> keepGoing;

  while(keepGoing != 0 ){
    if(keepGoing > 0 ){
      cout << "please enter in a name and 5 grades with spacing (if done enter 0): \n";
    cin >> stName >> grade1 >> grade2 >> grade3 >> grade4 >> grade5 ;
    
    fileOut << stName << " " << grade1<< " "  << grade2<< " "  << grade3<< " "  << grade4<< " "  << grade5 << endl;
    }else{
      cout << menu();
    }
    
  }
  fileOut.close();
  menu();

return 0;
}

/*This function allows you to view all the grades on document grades.txt*/
int  viewGrades(){
  string stName;
  int  grade1, grade2, grade3, grade4, grade5;
  ifstream fileIn;
  fileIn.open("grades.txt");
  if (!fileIn){
    exit(1);
  }
  while(!fileIn.eof()){
      cout << stName << " " << grade1<< " "  << grade2<< " "  << grade3<< " "  << grade4<< " "  << grade5 << endl;
      fileIn >> stName >> grade1 >> grade2 >> grade3 >> grade4 >> grade5;
  }
  fileIn.close();

return 0;
}

/*This function allows you to view the avarage grade for a student on the garde.txt*/
int viewMidGrade(){
  string stName;
  int  grade1, grade2, grade3, grade4, grade5;
  int  gradeAvg;
  gradeAvg = (grade1 + grade2 + grade3 + grade4 + grade5)/5;
   ifstream fileIn;
  fileIn.open("grades.txt");
while(!fileIn.eof()){
    cout << stName << " " << gradeAvg << endl;
    fileIn >> stName >> gradeAvg;
    
  }
  fileIn.close();

return 0;
}