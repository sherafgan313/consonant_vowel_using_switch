#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	char c;
	cout<<"Enter an Alphabet to check whether it is vowel or consonant : ";
	cin>>c;
	
	switch(c)
	{
		case 'A':
		case 'a':
		case 'E':
		case 'e':
	    case 'I':
		case 'i':
		case 'O':
		case 'o':
		case 'U':
		case 'u':
		cout<<"The given Alphabet is Vowel"<<endl;
		break;
		default:
		cout<<"The given Alphabet is Consonant"<<endl;	
	}
	return 0;
}
