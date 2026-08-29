//kalkulator sederhana dengan if else

#include <iostream>
using namespace std;

int main(){
	int hasil;
	char yesno;
	char mtk;
	float nilai1, nilai2;
	float ytta;

	cout << "KALKULATOR SEDERHANA"<< endl;
	cout << endl;

	cout << "apakah anda ingin mengunakan kalkulator sederhana?? Y/N"<< endl;
	cin >> yesno;
	if (yesno == 'Y' | yesno == 'y'){
		cout << "pilih operator yng ingin di gunakan" << endl;
		cout << "membagi : / , perkalian : * , perkurangan : - , pertambahan : +" << endl;
		cout << endl;

		cout << "contoh: 'pilih operator: +' " << endl;
		cout << endl;

		cout << "pilih operator: ";
		cin >> mtk;

		cout << "pilih nilai pertama";
		cin >> nilai1;

		cout << "pilih nilai kedua";
		cin >> nilai2;

		if (mtk == '+'){
			hasil = nilai1 + nilai2;
			cout << "hasil: "  << hasil << endl;
		}

	} else if(yesno == 'N' | yesno == 'n'){
		cout << "anda menolak" << endl;
	}else {
		cout << "invalid input" << endl;
	}
	return 0;
}
