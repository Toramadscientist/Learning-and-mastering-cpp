#include <iostream>
#include <array>
using namespace std;

using nganuin = array<array<int, 3>, 2>;
const baris;
const kolom;
void FungsiNganuin (const nganuin& nunjukin);

int main(){
	nganuin nilaianak = {{
        {10, 20, 30}, 
        {40, 50, 60}  
    }};

    FungsiNganuin(nilaianak);
	return 0;
}
	void FungsiNganuin(const nganuin& nunjukin){
    for (baris = 0; baris < nunjukin.size(); ++baris) {
        for (kolom = 0; kolom < nunjukin[baris].size(); ++kolom) {
            cout << nunjukin[baris][kolom] <<" " << &nunjukin[baris][kolom] << " ";
        }
        cout << endl;
    }
}
