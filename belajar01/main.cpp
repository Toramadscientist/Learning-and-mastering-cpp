#include <iostream>
#include <array>
using namespace std;

int main(){

	int input;
	array <int, 10> nilaimurid = {0,1,2,3,4,5,6,7,8,9};
	for (int nilai : nilaimurid){
		cout << &nilai << ":" << nilai << endl;
	}

    cout << endl;

	for (int &nilaiRef : nilaimurid){
		nilaiRef *= 2;
		cout << &nilaiRef << ":" << nilaiRef << endl;
	}


    cout << endl;

	for (int &nilaiRef : nilaimurid){
		cout << &nilaiRef << ":" << nilaiRef << endl;
	}
	return 0;
}
