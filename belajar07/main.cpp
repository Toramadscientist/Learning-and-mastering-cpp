#include <iostream>
#include <array>

/* void panggil(int a, std::array <int, 10> b){
        for (int a : b)
        std::cout << a << std::endl;
        }
*/
int main(){
	char yesno;
	int inputindex;
	std::array  <int, 10> nilaimurid = {0,0,0,0,0,0,0,0,0,0};
	std::cout << "nilai murid" << std::endl;
	    for (int nilai : nilaimurid){
            std::cout << nilai << " ";
            }
        std::cout << std::endl;
        std::cout << "index (0 - 9)" << std::endl;
            std::cin >> inputindex;
            if (inputindex > 10){
                std::cout << "kelebihan goblok" << std::endl;
                    return 0;
                    } else{
                        std::cout << "masukan nilai";
                        int *inputnilai = &nilaimurid[inputindex];
                        std::cin >> *inputnilai;
                        for (int nilai : nilaimurid){
                        std::cout << nilai << " ";
                        }
    } return 0;
}
