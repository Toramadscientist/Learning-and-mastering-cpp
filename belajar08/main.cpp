#include <iostream>

void arraymd (int *array,int baris,int kolom){
int index = 0;
    for(int i = 0; i < baris; i++){
        for(int j = 0; j < kolom; j++){
            std::cout << *(array + index) << " ";
            index++;
        }
    }
}

int main(){

    //multidemensi array
    int baris;
    int kolom;
    int array[2][2] = {1,2,3,4};
    std::cin >> baris;
    std::cin >> kolom;

    if (baris == -1){
        std::cout << "masukin baris woi";
        return 1;
    } else if (kolom == -1){
        std::cout << "masukin kolom woi";
        return 1;
    } else if (baris > 2 || kolom > 2 || baris <= 0 || kolom <= 0){
        std::cout << "invalid input" << std::endl;
        return 1;
    }
    arraymd(*array, baris, kolom);
return 0;
}
