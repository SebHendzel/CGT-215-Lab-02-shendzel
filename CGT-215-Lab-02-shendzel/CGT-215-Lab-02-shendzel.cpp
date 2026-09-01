#include <iostream>
using namespace std;

int main()
{
	float A;
	float B;
	float X;
	float C;
	cout << "B = (A + 4) + 1 " << endl; 
	
	cout << "Please enter a value for A: ";
	cin >> A;

	cout << "A= " << A << endl;

	B = (A + 4) + 1;
	cout << "B= " << B << endl;

	//same thing but with 3 variables

	//float A; thought it might redo the variable and get rid of the previously mentioned one, but instead just left it
	//float B;
	//float X;

	cout << "A = 4C + B" << endl;
	cout << "solve for C" << endl;

	cout << "please enter a value for A: ";
	cin >> A;
	cout << "A = " << A << endl;

	cout << "Now enter a value for B: ";
	cin >> B;
	cout << "B = " << B << endl;

	cout << A << " = 4" << "C" << " + " << B << endl;
	
	C = (A - B) / 4; //I realize you have to break the equation down to whatever the varaible is equal to because the code wont do it.
		
	cout << "C = " << C << endl;

}