#include <iostream>
#include <string>
using namespace std;

void menu(){
  cout << "1. Enter new contact" << endl;
  cout << "2. View Entire Phone book." << endl;

 }


int main() {


  char first[100];
  char last[100];
  int num;
  int input;
  char userinput;


cout << "Welcome to the phone book!" << endl;
do{
cout << "What would you like to do: " << endl;
menu();
cin >> input;

switch (input){
  case 1:
  cout << "Enter a contact First name: " << flush;
  cin >> first;
  cout << "Enter a contact Last name: " << flush;
  cin >> last;
  cout << "Enter contact number: " << flush;
  cin >> num;
  break;

  case 2:
  cout << "Here is your contact list: " << endl;
  cout << last <<"," << first << " - " << num << endl;
  break;
  
  default:
  cout << "This is not a valid selection!" <<endl;
  break;
  
}
cout << "Would you like to make another selection? y/n: " << flush;
cin >> userinput;

  }
   while(userinput == 'y'); 
}
