#include <iostream>
using namespace std;

int main() {
  char letter = 'a';
  cout << "Enter 'x' to Exit.\n" << endl;
	do 
	{
    cout << "Please enter a letter" << endl;
		cin >> letter;

    cout << "The letter you entered is " << letter << endl;
	}  while (letter != 'x');
	
}
// I think in this case the do is a command asking the user to enter something and the while is the correct answer so if we put the code in the correct order the execution of the program shouldn't be affected.

