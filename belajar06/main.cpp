//kalkulator sederhana dengan if else

#include <iostream>
using namespace std;

int main(){
	char yesno;

	cout << "KALKULATOR SEDERHANA"<< endl;
	cout << endl;

	cout << "apakah anda ingin mengunakan kalkulator sederhana?? Y/N"<< endl;
	cin >> yesno;
	if (yesno == 'Y'){

	} else if(yesno == 'N'){
		cout << "anda menolak" << endl;
	}else {
		cout << "invalid input" << endl;
	}
	return 0;
}
